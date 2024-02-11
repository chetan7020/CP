/*

Build | ..... | Peace

https://codeforces.com/contest/1144/problem/F

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

//----------------------- FUNCTION START ---------------------------

// 1-> prime
// 0-> not prime
//pass vector of sz = n initialized with 1
void seive(int n, vector<int>&sv){ 
	sv[0]=sv[1]=0;

	for(int i=2; i<=n; i++){
		if(sv[i]==0) continue;

		for(int j=i*i; j<=n; j+=i){
			sv[j]=0;
		}
	}
}

//----------------------- FUNCTION END ---------------------------

bool bfs(int vertex, vector<int> g[], vector<int> &vis){
	queue<int> q;
	vis[vertex]=0;
	q.push(vertex);

	while(!q.empty()){
		int node=q.front();
		q.pop();
		for(int child: g[node]){
			if(vis[child]!=-1 && vis[child]==vis[node]) return false;
			if(vis[child]!=-1) continue;

			q.push(child);

			if(vis[node]==0) vis[child]=1;
			else vis[child]=0;
		}
	}

	return true;
}

void solve(){
	int n, m; cin>>n>>m;

	vector<int>g[n+1];
	vector<int>vis(n+1, -1);
	vector<pair<int, int>>info;

	for(int i=0; i<m; i++){
		int a, b; cin>>a>>b;

		// cout<<a<<" "<<b<<endl;

		g[a].pb(b);
		g[b].pb(a);

		info.pb({a,b});
	}

	// for(int i=1; i<=n; i++){
	// 	cout<<i<<endl;
	// 	for(int ch: g[i]){
	// 		cout<<ch<<" ";
	// 	}
	// 	cout<<endl;
	// }

	bool flag=false;

	for(int i=1; i<=n; i++){
		if(vis[i]==-1){
			if(bfs(i, g, vis)==false){
				flag=true;
				break;
			}
		}
	}

	if(flag){
		cout<<"NO"<<endl;
		return;
	}

	cout<<"YES"<<endl;
	for(int i=0; i<m; i++){
		cout<<(vis[info[i].ff]<vis[info[i].ss]);

		// cout<<info[i].ff<<" "<<info[i].ss<<endl;
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