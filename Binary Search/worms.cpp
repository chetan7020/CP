/*

Build | ..... | Peace

cpy mat kar bc

https://codeforces.com/problemset/problem/474/B

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

void solve(){
	int n; cin>>n;
	vector<int>a(n+1);

	a[0]=0;

	for(int i=1; i<=n; i++) cin>>a[i], a[i]+=a[i-1];

	int m; cin>>m;
	vector<pair<int, int>>b;

	for(int i=0; i<m; i++){
		int x; cin>>x;
		b.pb({x,i});
	}

	sort(b.begin(), b.end());

	int j=0;

	vector<int> ans(m);

	for(int i=0; i<m; i++){
		while(b[i].ff>a[j]) j++;
		ans[b[i].ss]=j;
	}

	for(int i: ans) cout<<i<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

	solve();

	// cout<<"a";

	return 0;

}