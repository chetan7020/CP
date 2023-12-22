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

bool f(vector<int> &dp,vector<int> &a, int lvl, int n){
	// if(lvl>=n) return false;

	if(lvl>=n-1) return true;

	if(dp[lvl]!=-1) return dp[lvl];

	bool ans= false;

	if(lvl+a[lvl]<n)
	ans= (ans || f(dp, a, lvl+a[lvl], n));


	// for(int i=1; i<=a[lvl]; i++){
		// for(int j=1; j<=i; j++){
		// ans= (ans || f(dp, a, lvl+i, n));
		// }
	// }

	return dp[lvl]= ans;
}

void solve(){
	int n; cin>>n;

	vector<int> a(n), dp(n+1, -1);

	fore(i, 0, n) cin>>a[i];

	if(f(dp, a, 0, n)) cout<<"true";
	else cout<<"false";

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    int t ;cin>>t;
    while(t--) solve();

    return 0;

}