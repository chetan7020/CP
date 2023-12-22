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

int f(vector<vector<int>> &dp, vector<int> &wt,vector<int> &val, int w, int lvl, int n){
	
	if(lvl>=n || w==0) return 0;

	if(dp[lvl][w]!=-1) return dp[lvl][w];

	int ans=f(dp, wt, val, w, lvl+1, n);
	if(wt[lvl]<=w) return max(ans, val[lvl]+f(dp, wt, val, w-wt[lvl], lvl+1, n));	
	
	return dp[lvl][w]=ans;
} 

void solve(){
	int n, w; cin>>n>>w;

	vector<int> wt(n), val(n);

	vector<vector<int>> dp(n+1, vector<int>(w+1, -1));

	for(int i=0; i<n; i++) cin>>wt[i];

	for(int i=0; i<n; i++) cin>>val[i];

	cout<<f(dp, wt, val, w, 0, n);
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}