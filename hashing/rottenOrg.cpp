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

void solve(){
	int n, m; cin>>n>>m;

	vector<vector<int>> g(n, vector<int>(m)), vis(n, vector<int>(m, 0));

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>g[i][j];
		}
	}

	queue< pair< pair<int,int>, int > > q;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(g[i][j]==2){
				q.push({{i,j},0});
				vis[i][j]=1;
			}
		}
	}

	int ans=0;

	while(!q.empty()){
		int x=q.front().ff.ff;
		int y=q.front().ff.ss;
		int t=q.front().ss;

		q.pop();

		for(auto i: direc_4){
			int newX=x+i[0];
			int newY=y+i[1];

			if(newX>=n || newY>=m) continue;
			if(newX<0 || newY<0) continue;
			if(vis[newX][newY]!=0) continue;
			if(g[newX][newY] == 0 || g[newX][newY] == 2) continue;

			q.push({{newX,newY},t+1});
			vis[newX][newY]=1;
			ans=max(ans, t+1);
		}
	}

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == 1 && !vis[i][j]) {
                ans=-1;
            }
        }
    }

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<vis[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<ans<<endl;
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