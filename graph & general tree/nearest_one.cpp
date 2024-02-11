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

	vector<vector<int>> g(n, vector<int>(m));

	vector<vector<int>> ans(n, vector<int>(m, -1));

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>g[i][j];
		}
	}

	queue<pair<pair<int,int>,int>>q;
	    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(g[i][j]==1){
                q.push({{i,j},0});
                ans[i][j]=0;
            }
        }
    }
    
    while(!q.empty()){
        int row=q.front().first.first;
        int col=q.front().first.second;
        
        int dis=q.front().second;

        q.pop();
        
        for(int i=-1; i<2; i++){
            for(int j=-1; j<2; j++){
                if(i!=0 && j!=0) continue;
                
                int nrow=row+i;
                int ncol=col+j;
                
				if(nrow<0 || ncol<0 || nrow>=n || ncol>=m || ans[nrow][ncol]!=-1) continue;    
                
                int ndis=dis+1;
                
                ans[nrow][ncol]=ndis;
                
                q.push({{nrow,ncol},ndis});
            }
        }
    }
    
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cout<<ans[i][j]<<" ";
    	}
    	cout<<endl;
    }

    // return ans;
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