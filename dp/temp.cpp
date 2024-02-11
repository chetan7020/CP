#include<bits/stdc++.h>

using namespace std;

vector<int>g[10010];
vector<int>vis(10010, 0);
vector<int>color(10010, -1);

int n, m, bipartite=0;

void dfs(int ver, int col){
    vis[ver]=1;
    color[ver]=col;

    for(int ch:g[ver]){
        if(color[ch]==-1) dfs(ch, 3-col);
        else if(color[ch]==color[ver]){
            bipartite=1;
            return;
        }
    }
    vis[ver]=2; //not used / no need
}

void solve(){
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i=0;i<n;i++){
        if(vis[i]==0){
            dfs(i, 1);
        }
    }

    int ans=1;

    if(bipartite) ans=-1;

    cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    int t=1;
    // cin>>t;

    while(t--) solve();

    return 0;

}