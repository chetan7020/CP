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

int n, k;
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

	for(int i=1; i<=k; i++){
		if(lvl+i<n) ans= min(ans, abs(a[lvl]-a[lvl+i]) + f(lvl+i));	
	}
	// if(lvl+1<n) 

	return dp[lvl]=ans;
}

void solve(){
	cin>>n>>k;
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