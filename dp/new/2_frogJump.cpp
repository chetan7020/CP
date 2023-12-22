/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long
#define srt(a) sort(a.begin(), a.end())
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int n;
vector<int> dp(100100, -1), a(100100);

int f(int lvl){
	//prunning
	if(lvl>=n) return INT_MAX;
	
	//base case
	if(lvl==n-1) return 0;

	//cache check
	if(dp[lvl]!=-1) return dp[lvl];

	//save & return

	int ans= INT_MAX;


	if(lvl+1<n) ans= abs(a[lvl]-a[lvl+1]) + f(lvl+1);
	if(lvl+1<n) ans= min(ans, abs(a[lvl]-a[lvl+2]) + f(lvl+2));

	return dp[lvl]=ans;
}

void solve(){
	cin>>n;
	fore(i,0,n) cin>>a[i];

	cout<<f(0);
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}