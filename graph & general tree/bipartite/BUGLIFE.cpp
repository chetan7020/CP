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

bool bipartite(int ver, vector<vector<int>>&g, vector<int>&vis){
	vis[ver]=1;

	queue<int>q;
	q.push(ver);

	while(q.size()){
		int cur=q.front();

		// cout<<cur<<" ";

		q.pop();

		for(int ch: g[cur]){
			if(vis[ch]!=-1 && vis[ch]==vis[cur]) return false;
			if(vis[ch]!=-1) continue;

			if(vis[cur]==1) vis[ch]=0;
			else vis[ch]=1;

			q.push(ch);
		}
	}

	return true;
}

void solve(int curr){
	int n,m; cin>>n>>m;

	vector<vector<int>>g(n+1);

	for(int i=0;i<n;i++){
		int u,v; cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}

	vector<int>vis(n+1, -1);

	cout<<"Scenario #"<<curr<<":"<<endl;

	for(int i=1;i<=n;i++){
		if(vis[i]==-1){
			if(!bipartite(i, g, vis)){
				cout<<"Suspicious bugs found!"<<endl;
				return;
			}
		}
	}

	cout<<"No suspicious bugs found!";

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	int i=1;

	while(t--){
		solve(i);
		i++;
	}
	return 0;

}