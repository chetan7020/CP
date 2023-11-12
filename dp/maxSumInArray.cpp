/*

Build | ..... | Peace

cpy mat kar bc

con - no 2 adj elements should be picked up
find max possible sum

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int f(vector<int> &dp, vector<int> &a, int lvl, int n){

	//base case
	if(lvl>=n) return 0;

	//cache check
	if(dp[lvl]!=-1) return dp[lvl];

	//do not take it
	int ans= f(dp, a, lvl+1, n);

	//take it
	ans= max(ans, a[lvl]+f(dp, a, lvl+2, n));

	//save and return
	return dp[lvl]= ans;

}

void solve(){
	int n; cin>>n;

	vector<int> a(n);

	vector<int> dp(n, -1);

	for(int i=0; i<n; i++) cin>>a[i];

	cout<<f(dp, a, 0, n);
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


    solve();

	return 0;

}