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


void solve(){
	int n, m; cin>>n>>m;

	vector<int>adj[n+1];
	vector<int>vis(n+1, 0), dis(n+1, 0), par(n+1);

	for(int i=0; i<m; i++){
		int a, b; cin>>a>>b;

		adj[a].pb(b);
		adj[b].pb(a);
	}

	queue<int>q;
	q.push(1);
	vis[1]=1;

	while(q.size()){
		int curr=q.front();
		q.pop();

		for(int ch: adj[curr]){
			if(vis[ch]==1) continue;

			dis[ch]=dis[curr]+1;
			vis[ch]=1;
			par[ch]=curr;

			q.push(ch);
		}
	}

	if(vis[n]==0){
		cout<<"IMPOSSIBLE";
		return;
	}

	vector<int>ans;

	int p=n;

	for(int i=dis[n];i>=0;i--){
		ans.pb(p);
		p=par[p];
	}

	rev(ans);

	cout<<dis[n]+1<<endl;
	for(int i:ans) cout<<i<<" ";
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