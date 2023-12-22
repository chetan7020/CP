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

int f(vector<int>&dp, vector<int>&a, int lvl, int n){
	if(lvl>=n) return 0;

	if(dp[lvl]!=-1) return dp[lvl];

	int ans= f(dp, a, lvl+1, n);

	ans= max(ans, a[lvl]+ f(dp, a, lvl+2, n));

	return dp[lvl]=ans;
}

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	fore(i, 0, n) cin>>a[i];

	vector<int> dp(n, -1);

	int notFirst= f(dp, a, 1, n);

	for(int i=0; i<n; i++) dp[i]= -1;

	cout<<max(f(dp, a, 0, n-1), notFirst);
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}