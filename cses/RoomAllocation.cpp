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

void solve(){
	int n; cin>>n;
	vector<pair<int, int>>a(n);

	fore(i,0,n){
		int x,y; cin>>x>>y;

		a.pb({x, 1});
		a.pb({y, -1});
	}

	srt(a);

	int curr=0, mx=0;

	for(auto i: a){
		curr+=i.ss;
		mx=max(mx,curr);
	}

	cout<<mx;
	// for(int i)
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}