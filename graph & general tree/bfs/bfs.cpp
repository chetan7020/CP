#include<bits/stdc++.h>

using namespace std;

int n,m;
vector<int>vis, dis, par;
vector<vector<int>>adj;

void bfs(int ver){
	queue<int>q;
	q.push(ver);

	vis[ver]=1;
	dis[ver]=0;
	par[ver]=-1;

	while(q.size()){
		int curr_node= q.front();
		q.pop();

		for(int ch:adj[curr_node]){
			if(vis[ch]==1)continue;

			vis[ch]=1;
			dis[ch]=dis[curr_node]+1;
			par[ch]=curr_node;

			q.push(ch);
		}
	}
}

void print_path(int des){
	if(vis[des]==0){
		cout<<"No Path Exists";
		return;
	}

	vector<int>path;

	int curr=des;

	while(curr!=-1){
		path.push_back(curr);
		curr=par[curr];
	}

	reverse(path.begin(), path.end());

	for(int i:path)cout<<i<<" ";
	cout<<endl;
}

void solve(){
	cin>>n>>m;

	vis.resize(n+1, 0);
	dis.resize(n+1, INT_MAX);
	par.resize(n+1, -1);	
	adj.resize(n+1);

	for(int i=0;i<m;i++){
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	bfs(0);

	print_path(5);
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif

	solve();

	return 0;

}