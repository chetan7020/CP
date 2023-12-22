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

void dfs(int ver, int par, vector<vector<int>>&g, vector<int>&sm, vector<int>&ev){

	// cout<<ver<<endl;

	if(ver%2==0) ev[ver]++;
	sm[ver]+=ver;

	for(int ch: g[ver]){
		if(ch==par) continue;
		dfs(ch, ver, g, sm, ev);
		sm[ver]+=sm[ch];
		ev[ver]+=ev[ch];
	}
}

void solve(){
	int v,e; cin>>v>>e;

	vector<vector<int>>g(v);

	vector<int>sm(v, 0), ev(v, 0);

	for(int i=0; i<e; i++){
		int x,y; cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}

	dfs(0,-1,g,sm,ev);

	for(int i=0; i<v; i++) cout<<i<<" "<<sm[i]<<" "<<ev[i]<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


    solve();

	return 0;

}