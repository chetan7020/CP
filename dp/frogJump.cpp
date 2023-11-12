/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int f(int n, vector<int> &arr){ //recurssion
	if(n==0) return 0;

	int left = f(n-1, arr)+abs(arr[n]-arr[n-1]);
	int right=INT_MAX;
	if(n>1) right = f(n-2, arr)+abs(arr[n]-arr[n-2]);

	return min(left, right);
}

int f2(int n, vector<int> &arr, vector<int> &dp){ //memoization
	if(n==0) return 0;
	if(dp[n]!=-1) return dp[n];
	int left = f2(n-1, arr, dp)+abs(arr[n]-arr[n-1]);
	int right=INT_MAX;
	if(n>1) right = f2(n-2, arr, dp)+abs(arr[n]-arr[n-2]);

	return dp[n]=min(left, right);
}

int f3(int n, vector<int> &arr, vector<int> &dp){ //tabulation
	dp[0]=0;
	for(int i=1; i<n; i++){
		int left = dp[n-1]+abs(arr[n]-arr[n-1]);
		int right=INT_MAX;
		if(n>1) right = dp[n-2]+abs(arr[n]-arr[n-2]);
		dp[n]=min(left, right);
	}
	return dp[n-1];
}

// int f3(int n, vector<int> &arr){ //space optimization
// 	dp[0]=0;
// 	for(int i=1; i<n; i++){
// 		int left = dp[n-1]+abs(arr[n]-arr[n-1]);
// 		int right=INT_MAX;
// 		if(n>1) right = dp[n-2]+abs(arr[n]-arr[n-2]);
// 		dp[n]=min(left, right);
// 	}
// 	return dp[n-1];
// }

int solve(){
		int n; cin>>n;
	vector<int> arr(n), dp(n+1, -1);
	for(int i=0; i<n; i++) cin>>arr[i];
	cout<<f(n-1, arr)<<endl;
	cout<<f2(n-1, arr, dp)<<endl;
	cout<<f3(n-1, arr, dp)<<endl;

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

	// solve();

	cout<<"Hello";

	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}