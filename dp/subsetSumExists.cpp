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
	if(sm>k) return 0;

	if(sm==k) return 1;

	if(lvl==n-1) return a[lvl]+sm==k;

	int ans= 0;
	if(f(dp, a, k, sm, lvl+1, n)==1) ans=1;
	if(f(dp, a, k, sm+a[lvl], lvl+1, n)==1) ans=1;

	return ans;
}

void printSet(vector<vector<int>> &dp, vector<int>&a, int k, int sm, int lvl, int n){

	if(lvl==n-1){
		cout<<a[lvl];
		// else return;
	}

	if(f(dp, a, k, sm, lvl+1, n)==1){
		printSet(dp, a, k, sm, lvl+1, n);
	}
	if(f(dp, a, k, sm+a[lvl], lvl+1, n)==1){
		cout<<a[lvl]<<" ";
		printSet(dp, a, k, sm+a[lvl], lvl+1, n);
	}

}

void solve(){
	int n, k; cin>>n>>k;

	vector<int> a(n);

	fore(i ,0, n) cin>>a[i];

	vector<vector<int>> dp(n, vector<int>(k+1, -1));

	if(f(dp, a, k, 0, 0, n)==1) printSet(dp, a, k, 0, 0, n);
	else cout<<"NP";
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}