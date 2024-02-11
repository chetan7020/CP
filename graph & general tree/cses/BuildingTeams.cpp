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

bool bfs(int ver, vector<int>adj[], vector<int>&vis){

	queue<int>q;

	q.push(ver); 

	vis[ver]=1; //assign to team 1

	while(q.size()){
		int curr= q.front();

		q.pop();

		for(int ch: adj[curr]){
			//ver child is already assigned to same team in this case it is not
			//possible to assign both ver & child to diff teams
			if(vis[ch]!=0 && vis[ch]==vis[curr]) return false; 

			//child is already assigen to diff team
			if(vis[ch]!=0) continue;

			q.push(ch);

			//assign team to child of vertex (mark as visited)
			if(vis[curr]==1) vis[ch]=2;
			else vis[ch]=1;
		}

	}

	return true;

}

void solve(){


	int n, m; cin>>n>>m;

	vector<int>adj[n+1];
	vector<int>vis(n+1, 0);

	for(int i=0; i<m; i++){
		int a, b; cin>>a>>b;

		adj[a].pb(b);
		adj[b].pb(a);
	}

	// for(int i=1; i<=n; i++){
	// 	cout<<i<<" "<<endl;
	// 	for(int j: adj[i]) cout<<j<<" ";
	// 	cout<<endl;
	// }


	int flag=0;

	for(int i=1; i<=n; i++){
		if(vis[i]==0){
			if(bfs(i, adj, vis)==false){
				flag=1;
				// cout<<i<<endl;
				break;
			}
		}
	}

	if(flag){
		cout<<"IMPOSSIBLE";
		return;
	}

	// cout<<cnt;

	for(int i=1; i<=n; i++) cout<<vis[i]<<" ";
	// // for(int i: cities) cout<<i<<" ";

	// cout<<endl;
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