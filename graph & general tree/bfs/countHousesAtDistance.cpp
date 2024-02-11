/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>


//----------------------- MACRO START ---------------------------

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

//----------------------- MACRO END ---------------------------

using namespace std;

void bfs(vector<vector<int>>&adj, int ver, vector<int>&ans, int n){
    vector<int>vis(n+1, 0);
    
    queue<pair<int,int>>q;
    q.push({ver, 0});
    vis[ver]=1;

    while(q.size()){
        auto curr= q.front();
        
        int node= curr.first;
        int dis= curr.second;

        q.pop();

        if(dis>0) ans[dis-1]+=1;
    
        for(int ch: adj[node]){
            if(vis[ch]==1) continue;

            vis[ch]=1;
            q.push({ch, dis+1});
        }
    }

    // cout<<endl;
}

void solve(){
	int n,x,y; cin>>n>>x>>y;

    vector<vector<int>>adj(n+1);

    for(int i=1;i<n;i++){
        adj[i].push_back(i+1);
        adj[i+1].push_back(i);
    }

    adj[x].push_back(y);
    adj[y].push_back(x);

    vector<int>ans(n);

    for(int i=1;i<=n;i++) cout<<i<<endl, bfs(adj, i, ans, n);

    // for(int i:ans) cout<<i<<" ";

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