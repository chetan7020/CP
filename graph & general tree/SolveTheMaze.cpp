/*

Build | ..... | Peace

cpy mat kar bc

https://codeforces.com/problemset/problem/1365/D

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
void bfs(int x, int y, vector<vector<char>> &g, vector<vector<int>>&vis){
	
	queue<pair<int, int>> q;
	q.push({x,y});

	vis[x][y]=1;

	while(q.size()){
		auto curr= q.front();
		q.pop();

		int i= curr.ff;
		int j= curr.ss;

		for(auto dir:direc_4){
			int nx=i+dir[0];
			int ny=j+dir[1];

			if(nx<0 || ny<0) continue;
			if(nx>=g.size() || ny>=g[0].size()) continue;
			if(vis[nx][ny]) continue;
			if(g[nx][ny]=='#') continue;

			vis[nx][ny]=1;
			q.push({nx,ny});
		}
	}

}

void solve(){
	int n, m; cin>>n>>m;

	vector<vector<char>> g(n, vector<char>(m));
	vector<vector<int>> vis(n, vector<int>(m, 0));

	int gp=0; //good peoples

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>g[i][j];
			gp+=(g[i][j]=='G');
		}
	}

	if(gp==0){
		cout<<"YES"<<endl;
		return;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(g[i][j]=='B'){
				g[i][j]='#';
				for(auto dir:direc_4){
					int nx=i+dir[0];
					int ny=j+dir[1];

					if(nx<0 || ny<0) continue;
					if(nx>=n || ny>=m) continue;
					if(g[nx][ny]=='B') continue;

					if(g[nx][ny]=='G'){
						cout<<"NO"<<endl;
						return;
					}

					g[nx][ny]='#';
				}
			}
		}
	}

	bool flag= true;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(g[i][j]=='B') g[i][j]='#';
		}
	}

	if(g[n-1][m-1]=='.') bfs(n-1, m-1, g, vis);

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(g[i][j]=='G' && vis[i][j]==0){
				flag=false;
			}
		}
	}

	if(flag) cout<<"YES";
	else cout<<"NO";

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