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

bool dfs(int vertex, int par, vector<vector<int>> &g, vector<int> &v){

	// cout<<vertex<<" ";
	
	v[vertex]=1;

	bool ans=false;

	for(int child: g[vertex]){
		if(v[child]==1){
			if(child==par) continue;
			return true;
		}
		ans |= dfs(child, vertex, g, v);
	}

	return ans;
}

void solve(){
	int n,m; cin>>n>>m;

	vector<vector<int>> g(n);
	vector<int> v(n, 0);

	for(int i=0; i<m; i++){
		int x,y; cin>>x>>y;
		g[x].pb(y);
		g[y].pb(x);
	}

	bool ans=false;

	for(int i=0; i<n; i++){
		if(v[i]!=1){
			ans |= dfs(i, -1, g, v);
		}
	}

	if(ans) cout<<"E";
	else cout<<"NE";
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}