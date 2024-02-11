/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long

#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

#define sum(a) accumulate(a.begin(), a.end(), 0LL)
#define srt(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define maxi(a) *max_element(a.begin(), a.end())
#define mini(a) *min_element(a.begin(), a.end())

#define direc_4 vector<pair<int,int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}
#define direc_8 vector<pair<int,int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}}

#define SEIVE(n, sv) \
    sv[0] = sv[1] = 0; \
    for (int i = 2; i <= n; i++) { \
        if (sv[i] == 0) continue; \
        for (int j = i * i; j <= n; j += i) { \
            sv[j] = 0; \
        } \
    }

using namespace std;

vector<int>topo;
int cycle=0;

void dfs(int ver, vector<int>adj[], vector<int>&vis){
    vis[ver]=1;
    
    for(int ch:adj[ver]){
        if(vis[ch]==1){
            cycle=1;
            return;
        }else if(vis[ch]==0) dfs(ch, adj, vis);
    }
    
    vis[ver]=2;
    topo.push_back(ver);
}

void dfs(int vertex, vector<vector<int>> &g, vector<int> &vis){
	vis[vertex]=1;

	for(int child: g[vertex]){
		if(vis[vertex]) continue;
		dfs(child, g, vis);
	}
}

void solve(){
	int n, m; cin>>n>>m;

	vector<int>adj[n];
	vector<int>vis(n, 0);

	for(int i=0; i<m; i++){
		int a, b; cin>>a>>b;
		adj[b].pb(a);
	}

	for(int i=0;i<n;i++){
		if(vis[i]==0)dfs(i, adj, vis);
	}

	rev(topo);

	if(!cycle) for(int i:topo)cout<<i<<" ";
	else cout<<"Cycle";
	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif
	int t=1;

	while(t--) solve();

	return 0;

}	