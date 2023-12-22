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

int f(vector<int> &dp, vector<int> &a, int lvl, int n, int k){
	if(lvl>n) return INT_MAX; //prunning

	if(lvl==n-1) return 0;//base case

	if(dp[lvl]!=-1) return dp[lvl]; //cache check

	int ans= INT_MAX; //compute

	for(int i=1; i<=k; i++){
		ans= min(ans, abs(a[lvl]-a[lvl+i])+ f(dp, a, lvl+i, n, k));
	}

	return dp[lvl]= ans; //save & return
}

void solve(){
	int n, k; cin>>n>>k;

	vector<int> a(n), dp(n, -1);
	fore(i, 0, n) cin>>a[i];

	cout<<f(dp, a, 0, n, k);
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}