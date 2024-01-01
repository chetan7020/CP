/*

Build | ..... | Peace

cpy mat kar bc

https://codeforces.com/problemset/problem/1742/E

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
	int n, m; cin>>n>>m;

	vector<int>a(n+1), b(m), preMax(n+1);;

	a[0]=0;
	preMax[0]=0;

	int mx=-1;

	for(int i=1; i<=n; i++) {
		cin>>a[i];
		mx=max(mx, a[i]);
		preMax[i]=mx;
		a[i]+=a[i-1];
	}

	for(int i=0; i<m; i++) cin>>b[i];

	// for(int i: a) cout<<i<<" ";

	// cout<<endl;

	// for(int i: preMax) cout<<i<<" ";

	// cout<<endl;

	for(int i=0; i<m; i++){
		auto it= upper_bound(preMax.begin(), preMax.end(), b[i]);

		it--;

		cout<<a[(it-preMax.begin())]<<" ";
	}

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

	int t;
	cin>>t;

	while(t--) solve();

	return 0;

}