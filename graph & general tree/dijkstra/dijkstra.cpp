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

int n, m;

void dijkstra(int src, vector<pair<int,int>>g[]){

	vector<int>vis(n, 0);
	vector<int>dis(n, 1e9);

	set<pair<int,int>>st;

	st.insert({0, src});

	dis[src]=0;
	// vis[src]=1;

	while(st.size()){
		auto node= *st.begin();
		st.erase(st.begin());

		int v= node.ss;
		int dist= node.ff;

		if(vis[v]==1)continue;
		vis[v]=1;

		for(auto child: g[v]){

			int child_v= child.ff;
			int wt= child.ss;

			if( dis[v]+wt < dis[child_v]){
				dis[child_v] = dis[v]+wt;
				st.insert({ dis[child_v], child_v });
			}

		}
	}

	for(int i=0;i<n;i++){
		cout<<dis[i]<<" ";
	}
}


void solve(){
	cin>>n>>m;

	vector<pair<int,int>>g[n];

	for(int i=0;i<m;i++){
		int a,b,c; cin>>a>>b>>c;


		g[a].push_back({b,c});
		// g[b].push_back({a,c});
	}


	// for(auto i:g){
	// 	for(auto j:i){
	// 		cout<<j.ff<<" "<<j.ss<<endl;
	// 	}
	// }

	dijkstra(0, g);



	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--) solve();

	return 0;

}