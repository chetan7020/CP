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

int n,m;
vector<vector<int>>g;
vector<int>vis;
int bip=1;

void dfs(int ver, int col){
	// cout<<ver<<" ";
	vis[ver]=col;

	for(int ch: g[ver]){
		if(vis[ch]==0) dfs(ch, 1+2-col);
		else if(vis[ch]==vis[ver]) bip=0;
	}
}

void solve(){
	cin>>n>>m;

	// cout<<n<<

	vis= vector<int>(n+1, 0);
	g= vector<vector<int>>(n+1);

	while(m--){
		int a,b; cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	for(int i=1;i<=n;i++){
		if(vis[i]==0){
			dfs(i, 1);
			// cout<<i<<" ";
		}
		// cout<<i<<" ";
	}

	// cout<<endl;

	if(bip==0){
		cout<<"IMPOSSIBLE";
		return;
	}

	for(int i=1;i<=n;i++) cout<<vis[i]<<" ";

	// cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	solve();

	return 0;

}