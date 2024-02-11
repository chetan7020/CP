/*

Build | ..... | Peace

cpy mat kar bc

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

#define direc_4 vector<vector<int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}
#define direc_8 vector<vector<int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}}

//----------------------- MACRO END ---------------------------

using namespace std;

void dfs(vector<int>adj[], vector<int>&vis, int ver){
	vis[ver]=1;

	for(int ch: adj[ver]){
		if(vis[ch]==0) dfs(adj,vis,ch);
	}
}

void solve(){


	int n, m; cin>>n>>m;

	vector<int>adj[n+1];

	for(int i=0; i<m; i++){
		int a, b; cin>>a>>b;

		adj[a].pb(b);
		adj[b].pb(a);
	}

	vector<int> cities, vis(n+1, 0);

	for(int i=1; i<=n; i++){
		if(vis[i]==0){
			dfs(adj, vis, i);
			cities.pb(i);
		}
	}

	cout<<cities.size()-1<<endl;
	if(cities.size()==1) cout<<cities[0];
	else{
		for(int i=0; i<cities.size()-1; i++){
			cout<<cities[i]<<" "<<cities[i+1]<<endl;
		}
	}
	
	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	int t=1;
	// cin>>t;

	while(t--) solve();

	return 0;

}