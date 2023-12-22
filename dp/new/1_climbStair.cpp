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
vector<int> dp(100100, -1);

int f(int lvl){
	//prunning
	if(lvl>n) return 0;
	
	//base case
	if(lvl==n) return 1;

	//cache check
	if(dp[lvl]!=-1) return dp[lvl];

	//save & return
	int ans=0;

	ans+=f(lvl+1);
	ans+=f(lvl+2);

	return dp[lvl]=ans;
}

void solve(){
	cin>>n;

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