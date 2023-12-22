/*

Build | ..... | Peace

Extended problem of subset sub exists problem

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int f(vector<vector<int>> &dp, vector<int>& a, int k, int lvl, int n){

    if(k<0) return 0;

    if(k==0) return 1;

	if(lvl==n-1) return a[lvl]==k;
	
	if(dp[lvl][k]!=-1) return dp[lvl][k];

	int ans= 0;
	if(f(dp, a, k, lvl+1, n)==1) ans=1;
	if(f(dp, a, k-a[lvl], lvl+1, n)==1) ans=1;

	return dp[lvl][k]= ans;        

}

void solve(){
	int n; cin>>n;

	vector<int> a(n);

	fore(i ,0, n) cin>>a[i];

    long long sm= 0;
    
    for(int i=0; i<n; i++) sm+=a[i];
    
    if(sm%2!=0){
    	cout<<0;
    	return;
    }
    
    int k= sm/2;
    
    vector<vector<int>> dp(n, vector<int>(k+1, -1));
    
    int ans= f(dp, a, k, 0, n);
    
    cout<<ans;
    
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}