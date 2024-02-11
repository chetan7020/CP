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

void dfs(int x, int y, int n, int m, vector<vector<char>> &g){
    g[x][y]='Z';
    // cout<<x<<" "<<y<<endl;
    for(int i=-1; i<2; i++){
        for(int j=-1; j<2; j++){
            if(i!=0 && j!=0) continue;
            
            int nrow= x+i;
            int ncol= y+j;
            
            if(nrow<0 || ncol<0 || nrow>=n || ncol>=m) continue;
            if(g[nrow][ncol]=='X' || g[nrow][ncol]=='Z') continue;        
            
            dfs(nrow, ncol, n, m, g);
        }
    }
}

void solve(){ 
    int n, m; cin>>n>>m;

    vector<vector<char>> g(n, vector<char>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>g[i][j];
    }

    // vector<vector<int>> vis(n, vector<int>(m,0));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((i==0 || j==0 || i==n-1 || j==m-1) && g[i][j]=='O' ) dfs(i, j, n, m, g);
            // if((i==0 || j==0 || i==n-1 || j==m-1) && g[i][j]=='O' ) cout<<i<<" "<<j<<endl;
        }
    }


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(g[i][j]=='O') g[i][j]='X';
            if(g[i][j]=='Z') g[i][j]='O';
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    
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