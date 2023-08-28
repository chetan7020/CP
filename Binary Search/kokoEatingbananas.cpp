/*

Build | ..... | Peace

Link : https://leetcode.com/problems/maximum-candies-allocated-to-k-children/

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

bool check(vector<int>& piles, int h, int banana){
    long long reqHour=0;
    for(int i:piles){
        reqHour+=ceil((double)i/banana);
    }
    
    if(reqHour<=h) return true;
    return false;
}

int minEatingSpeed(vector<int>& piles, int h) {
    long long lo=1, hi=INT_MIN;
    int ans=1;
    hi = *max_element(piles.begin(), piles.end());
    
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        
        if(check(piles, h, mid)){
            ans=mid;
            hi=mid-1;
        }else lo=mid+1;
    }
    
    return ans;
}

void solve(){
	int n, k;
	cin>>n>>k;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr[i]=ele;
	}

	cout<<"Min Speed : "<<minEatingSpeed(arr, k);
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