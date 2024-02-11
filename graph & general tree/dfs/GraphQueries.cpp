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

int n,m,q;
vector<vector<int>>g;
vector<int>vis, cmp_sz;

void dfs(int ver, int cmp_no){
	vis[ver]= cmp_no;

	for(auto ch: g[ver]){
		if(vis[ch]==-1) dfs(ch, cmp_no);
	}
}

void solve(){
	cin>>n>>m>>q;

	// cout<<n<<" "<<m<<" "<<q<<endl;

	g.resize(n+1);
	vis.assign(n+1, -1);
	cmp_sz.assign(n+1, 0);

	while(m--){
		int u,v; cin>>u>>v;
		if(u==v) continue;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	int cmp_no=1;

	for(int i=1;i<=n;i++){
		if(vis[i]==-1){
			dfs(i, cmp_no);
			cmp_no++;
		}
	}

	for(int i=1;i<=n;i++)cout<<vis[i]<<" ";

	cout<<endl;

	for(int i=1;i<=n;i++) cmp_sz[vis[i]]++;

	for(int i=1;i<=n;i++)cout<<cmp_sz[i]<<" ";

	cout<<endl;

	while(q--){
		int qt; cin>>qt;
		int ver1, ver2;

		if(qt==1){
			cin>>ver1;
			cout<<cmp_sz[vis[ver1]]<<endl;
		}else{
			cin>>ver1>>ver2;
			if(vis[ver1]==vis[ver2]) cout<<"Yes";
			else cout<<"No";
			cout<<endl;
		}
	}

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif

	solve();

	return 0;

}