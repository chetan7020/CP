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

int f(vector<vector<int>> &dp, vector<int>&a, int k, int sm, int lvl, int n){
	if(sm>k || lvl>n) return 0;

	// if(sm==k) return 1;

	// if(lvl==n) return a[lvl]+sm==k;
	if(lvl==n) return sm==k;

	int ans= f(dp, a, k, sm, lvl+1, n);
	ans+= f(dp, a, k, sm+a[lvl], lvl+1, n);

	ans%=1000000007;

	return ans;
}

void solve(){
	int n, k; cin>>n>>k;

	vector<int> a(n);

	int z=0;

	fore(i ,0, n) cin>>a[i], z+=(a[i]==0);

	vector<vector<int>> dp(n, vector<int>(k+1, -1));

	cout<<f(dp, a, k, 0, 0, n);
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}