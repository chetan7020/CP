/*

Build | ..... | Peace

Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int findMin(vector<int>& arr) {
        int i=0;
        int j=(arr.size()-1);
        int mini=INT_MAX;

        while(i<=j){
            int m=(i+j)/2;
            if(arr[m]==arr[i] && arr[m]==arr[j]){
                mini=min(mini, arr[m]);
                i++;
                j--;
            }
            else if(arr[m]>=arr[i]){
                mini=min(mini,arr[i]);
                i=m+1;
            }else{
                mini=min(mini,arr[m]);
                j=m-1;
            }
        }
        if(mini!=INT_MAX) return mini;
        return arr[0];
    }

void solve(){
	int n;
	cin>>n;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr[i]=ele;
	}

	cout<<"Min : "<<findMin(arr);
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