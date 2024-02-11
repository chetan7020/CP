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

	vector<vector<char>> g(n, vector<char>(m)), par(n, vector<char>(m, '#'));

	vector<vector<int>> vis(n, vector<int>(m, 0)), dis(n, vector<int>(m, 0));

	int xa, ya, xb, yb;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>g[i][j];

			if(g[i][j]=='A'){
				xa=i;
				ya=j;
			}

			if(g[i][j]=='B'){
				xb=i;
				yb=j;
			}
		}
	}

	string s= "RLUD";

	queue<pair<int,int>>q;
	q.push({xa,ya});
	vis[xa][ya]=1;

	int c=-1;

	while(q.size()){
		auto curr=q.front();
		int x=curr.ff;
		int y=curr.ss;
		// vis[x][y]=1;

		// cout<<x<<" "<<y<<endl;

		q.pop();

		for(auto i: direc_4){
			int nx= x+i[0];
			int ny= y+i[1];

			c++;

			// cout<<c<<" ";
			if(nx<0 || ny<0) continue;
			if(nx>=g.size() || ny>=g[0].size()) continue;

			if(vis[nx][ny]==1) continue;

			if(g[nx][ny]=='#') continue;

			dis[nx][ny]=dis[x][y]+1;

			par[nx][ny]= s[c%4];

			q.push({nx,ny});

			vis[nx][ny]=1;
		}
	}

	if(vis[xb][yb]==0){
		cout<<"NO";
		return;
	}

	vector<char>ans;

	int px=xb, py=yb;

	int cnt=0;

	for(int i=dis[xb][yb]; i>0; i--){
		ans.pb(par[px][py]);

		if(ans.back()=='U'){
			px=px+1;
			py=py;
		}else if(ans.back()=='D'){
			px=px-1;
			py=py;
		}else if(ans.back()=='L'){
			px=px;
			py=py+1;
		}else if(ans.back()=='R'){
			px=px;
			py=py-1;
		}
	}

	rev(ans);

	cout<<"YES"<<endl<<dis[xb][yb]<<endl;
	for(auto i:ans) cout<<i;
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