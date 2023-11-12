/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int solve(vector<vector<int>> &a, vector<vector<int>> &dp, int i, int j, int n, int m){
	
	//prunning
	if (i >= n || j >= m) return INT_MAX;

	//basecase
	if(i==n-1 && j==m-1) return a[i][j];

	//cache check
	if(dp[i][j]!=-1) return dp[i][j];

	//compute & check
	int minCost= LLONG_MAX;

	minCost= min(minCost, solve(a, dp, i, j+1, n, m));
	minCost= min(minCost, solve(a, dp, i+1, j, n, m));

	//save & return
	int ans= a[i][j]+ minCost;
	return dp[i][j]= ans;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int n, m;
	cin>>n>>m;

	vector<vector<int>> a(n, vector<int>(m)), dp(n, vector<int>(m, -1));

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
			// cout<<a[i][j]<<" ";
		}
		// cout<<endl;
	}

	// cout<<endl;

	for(vector<int> i: a){
		for(int j: i){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	cout<<solve(a, dp, 0, 0, n, m);	


	return 0;

}