/*

Build | ..... | Peace

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

void dfs(int ver, int par, vector<vector<int>>&g, vector<int>&d){

	for(int ch: g[ver]){
		if(ch==par) continue;
		d[ch]=d[ver]+1;
		dfs(ch, ver, g, d);
	}
}

void solve(){
	int v,e; cin>>v>>e;

	vector<vector<int>>g(v);

	vector<int>d(v, 0);

	for(int i=0; i<e; i++){
		int x,y; cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}

	dfs(0,-1,g,d);

	// for(int i=0; i<v; i++) cout<<i<<" "<<sm[i]<<" "<<ev[i]<<endl;
	int mx=-1, mx_n;

	for(int i=0; i<v; i++){
		if(d[i]>mx){
			mx=d[i];
			mx_n=i;
		}
		d[i]=0;
	}

	mx=-1;

	dfs(mx_n,-1,g,d);

	for(int i=0; i<v; i++){
		if(d[i]>mx){
			mx=d[i];
			// mx_n=i;
		}
		// d[i]=0;
	}

	cout<<mx; 
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


    solve();

	return 0;

}