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

vector<string>g;
vector<vector<int>>vis;
int n, m; 

int dx[]= {0, 1, 0, -1};
int dy[]= {1, 0, -1, 0};

int check(int nx, int ny){
	if(nx>=0 && ny>=0 && nx<n && ny<m && vis[nx][ny]==0 && g[nx][ny]=='.') return 1;
	return 0;
}

void dfs(int x, int y){
	vis[x][y]= 1;
	for(int i=0;i<4;i++){
		int nx= x+dx[i];
		int ny= y+dy[i];


		if(check(nx, ny)) dfs(nx, ny);
	}
}

void solve(){
	cin>>n>>m;

	g.resize(n+1);
	vis= vector<vector<int>>(n+1, vector<int>(m+1, 0));

	for(int i=0;i<n;i++) cin>>g[i];

	int cnt=0;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(vis[i][j]==0 && g[i][j]=='.'){
				dfs(i, j);
				cnt++;
				// cout<<i<<" "<<j<<endl;
			}
		}
	}

	cout<<cnt<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	solve();

	return 0;

}