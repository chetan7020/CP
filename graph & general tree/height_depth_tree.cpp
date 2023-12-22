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

vector<int> h(1e5+10), d(1e5+10);

void dfs(int vertex, int par, vector<vector<int>> &g){

	for(int child: g[vertex]){
		if(child==par) continue;
		d[child]= d[vertex]+1;
		dfs(child, vertex, g);
		h[vertex]= max(h[vertex], h[child]+1);
	}

	// return ans;
}

void solve(){
	int n,m; cin>>n>>m;

	vector<vector<int>> g(n);
	// vector<int> v(n, 0);

	for(int i=0; i<m; i++){
		int x,y; cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}

	dfs(0, -1, g);

	for(int i=0; i<n; i++) cout<<d[i]<<" ";

	cout<<endl;

	for(int i=0; i<n; i++) cout<<h[i]<<" ";
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}