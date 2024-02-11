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

void bfs(int n, int m, vector<vector<char>>&g,vector<vector<int>>&vis,vector<vector<int>>&dis,queue<pair<int,int>>&q){
	while(q.size()){
		auto curr= q.front();

		int x= curr.ff;
		int y= curr.ss;

		q.pop();

		for(auto dir: direc_4){
			int nx= x+dir.ff;
			int ny= y+dir.ss;

			if(nx<0 || ny<0 || nx>=n || ny>=m)continue;
			if(vis[nx][ny])continue;

			dis[nx][ny]=dis[x][y]+1;

			vis[nx][ny]=1;
			q.push({nx,ny});
		}
	}
}

int bfs1(int n, int m, vector<vector<char>>&g, vector<vector<int>>&vis, vector<vector<int>>&dis, vector<vector<int>>&dis_fire, queue<pair<int,int>>&q){
	while(q.size()){
		auto curr= q.front();

		int x= curr.ff;
		int y= curr.ss;

		if(x==n-1 || x==0 || y==m-1 || y==0)return 1;

		q.pop();

		for(auto dir: direc_4){
			int nx= x+dir.ff;
			int ny= y+dir.ss;

			if(nx<0 || ny<0 || nx>=n || ny>=m)continue;
			if(vis[nx][ny])continue;
			if(dis[x][y]+1>=dis_fire[nx][ny])continue;

			dis[nx][ny]=dis[x][y]+1;

			vis[nx][ny]=1;
			q.push({nx,ny});
		}
	}
	return 0;
}

void solve(){
	int n,m; cin>>n>>m;

	vector<vector<char>>g(n,vector<char>(m));

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>g[i][j];
	}

	vector<vector<int>>vis_fire(n,vector<int>(m,0));
	vector<vector<int>>dis_fire(n,vector<int>(m,INT_MAX));

	vector<vector<int>>vis_man(n,vector<int>(m,0));
	vector<vector<int>>dis_man(n,vector<int>(m,INT_MAX));

	queue<pair<int,int>>q;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(g[i][j]=='X'){
				q.push({i,j});
				vis_fire[i][j]=1;
				dis_fire[i][j]=0;
			}
		}
	}

	bfs(n,m,g,vis_fire,dis_fire,q);

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(g[i][j]=='M'){
				q.push({i,j});
				vis_man[i][j]=1;
				dis_man[i][j]=0;
			}
		}
	}


	cout<<bfs1(n, m, g, vis_man, dis_man, dis_fire, q)<<endl;
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