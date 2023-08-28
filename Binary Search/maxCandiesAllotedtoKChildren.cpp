/*

Build | ..... | Peace

Link : https://leetcode.com/problems/maximum-candies-allocated-to-k-children/

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int check(vector<int>& arr, long long k, int candie, int n){
    long long int piles=0;
    
    for(int i=0; i<n; i++){
        piles+=(long long int)(arr[i]/candie);
    }
    
    if(piles>=k) return 1;
    return 0;
}

int maximumCandies(vector<int>& arr, long long k) {
    int n= arr.size();
    
    long long lo=1;
    long long hi = *max_element(arr.begin(), arr.end());

    int ans=0;
    
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        
        if(check(arr, k, mid, n)==1){
            ans=mid;
            lo=mid+1;
        }else hi=mid-1;
    }
    
    return ans;
}

void solve(){
	int n;
	long long k;
	cin>>n>>k;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr[i]=ele;
	}

	cout<<"Max Candies : "<<maximumCandies(arr, k);
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	t=1;

	while(t--){
		solve();
	}

	return 0;

}