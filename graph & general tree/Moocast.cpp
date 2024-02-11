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


int dfs(int ver, vector<vector<int>>&g, vector<int>&vis){
	vis[ver]=1;

	int ans=1;

	for(int ch=0; ch<g.size(); ch++){
		if(vis[ch]==1) continue;
		if(g[ver][ch]==0) continue;

		ans+=dfs(ch, g, vis);
	}

	return ans;
}

void solve(){

	int n; cin>>n;

	vector<pair<pair<int,int>, int>> info;

	for(int i=0; i<n; i++){
		int x,y,p; cin>>x>>y>>p;

		info.pb({{x,y},p});
	}

	vector<vector<int>> g(n, vector<int>(n, 0));

	//create adjacency matrix of graph
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){


			//find dis from each cw to all other cw
			int dis= ((info[i].ff.ff-info[j].ff.ff)*(info[i].ff.ff-info[j].ff.ff)) +
			((info[i].ff.ss-info[j].ff.ss)*(info[i].ff.ss-info[j].ff.ss));

			int pw= (info[i].ss*info[i].ss);

			//check if pw of i th cw is reachable to j th cw 
			g[i][j]=(dis<=pw);

			// cout<<dis<<" "<<pw<<endl;
			// cout<<(dis<=pw)<<" ";
		}
		// cout<<endl;
	}

	int ans=0;

	//run dfs on each cw and find till how much cw moo is reachable and store mx
	//among them
	for(int i=0; i<n; i++){
		vector<int>vis(n);
		ans=max(ans, dfs(i, g, vis));
	}

	cout<<ans;

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