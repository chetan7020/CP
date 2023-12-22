/*

Build | ..... | Peace


*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int f(vector<int> &a, vector<int>&dp, int lvl, int n){
	cout<<lvl<<" "<<dp[lvl]<<endl;

	if(lvl>=n) return INT_MAX;

	if(lvl==n-1) return 0;

	if(dp[lvl]!=-1) return dp[lvl];

	int ans= INT_MAX;

	for(int i=1; i<=a[lvl]; i++){
	    int t= f(a, dp, lvl+i, n);
	    
	    if(t!=INT_MAX) ans= min(ans, 1+t);
	}

	return dp[lvl]=ans;
}

void solve(){
	int n; cin>>n;

	vector<int> a(n), dp(n+1, -1);

	fore(i, 0, n) cin>>a[i];

	int ans= f(a, dp, 0, n);

	if(ans==INT_MAX) cout<<-1;
	else cout<<ans;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}