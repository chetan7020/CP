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

int f(vector<vector<int>> &dp, vector<int>&a, int lvl, int n, int k){

	if(lvl>n) return 0;

	if(k==0) return 1;

	if(k<0) return 0;

	if(dp[lvl][k]!=-1) return dp[lvl][k];

	int ans=0;

	if(f(dp, a, lvl+1, n, k)==1) ans=1;

	if(f(dp, a, lvl+1, n, k-a[lvl])==1) ans=1;

	return dp[lvl][k]= ans;
}

void solve(){
	int n; cin>>n;

	vector<int> a(n);

	for(int i=0; i<n; i++) cin>>a[i];

	int s=0;

	for(int i=0; i<n; i++) s+=a[i];

	vector<vector<int>> dp(n, vector<int>(s+1, -1));

	int e=ceil(s/2);

	int t= f(dp, a, 0, n, s);

	int ans= s;

	for(int i=1; i<=e; i++){
		if(==1){
			int s2= s-i;

			cout<<i<<" "<<s2<<endl;

			ans= min(ans, abs(i-s2));
		}
	}		

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