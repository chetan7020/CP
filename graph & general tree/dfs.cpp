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

void dfs(vector<vector<int>> &a, vector<int> &vis, int vertex){
	
	//vertex enters

	if(vis[vertex]==1) return;
	vis[vertex]=1;

	cout<<vertex<<" ";

	for(int child: a[vertex]){

		//child enters

		dfs(a, vis, child);

		//child exits
	}

	//vertex exits
}

void solve(){
	int v, e; cin>>v>>e;

	vector<vector<int>> a(v+1);
	vector<int> vis(v+1, 0);

	for(int i=1; i<=e; i++){
		int s, e; cin>>s>>e;

		a[s].push_back(e);
		a[e].push_back(s);
	}

	dfs(a, vis, 1);

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}