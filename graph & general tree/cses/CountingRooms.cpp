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

#define d4 vector<pair<int,int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}
#define d8 vector<pair<int,int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}}

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
int n,m;

void dfs(int x, int y, vector<string>&g, vector<vector<int>>&vis){
	vis[x][y]=1;

	for(auto i:d4){
		int nx= x+i.ff;
		int ny= y+i.ss;

		if(nx<0 || ny<0 || nx>=n || ny>=m)continue;
		if(vis[nx][ny]==1) continue;
		if(g[nx][ny]=='#') continue;

		dfs(nx, ny, g, vis);
	}
}

void solve(){
	cin>>n>>m;

	vector<vector<int>> vis(n, vector<int>(m, -1));
	vector<string>g(n);

	for(auto &i:g)cin>>i;

	int cnt=0;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vis[i][j]==-1 && g[i][j]!='#')dfs(i, j, g, vis), cnt++;
		}
	}

	cout<<cnt<<endl;
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