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

int n, m;

void bfs(vector<vector<int>>& g, vector<vector<int>>& vis, vector<vector<int>>& dis, queue<pair<int,int>>&q){
    while(q.size()){
        auto curr= q.front();

        int x=curr.first;
        int y=curr.second;

        q.pop();

        for(auto dir: direc_4){
            int nx=x+dir.first;
            int ny=y+dir.second;
        
            if(nx<0 || ny<0) continue;
            if(nx>=n || ny>=m) continue;
            if(vis[nx][ny]==1) continue;
            if(g[nx][ny]==2) continue;

            dis[nx][ny]=dis[x][y]+1;
            vis[nx][ny]=1;

            q.push({nx,ny});
        }
    }
}

int bfs1(vector<vector<int>>& g, vector<vector<int>>& dis_fire, int delay){
    queue<pair<int,int>>q;
    
    vector<vector<int>>vis(n, vector<int>(m, 0));
    vector<vector<int>>dis(n, vector<int>(m, INT_MAX));

    vis[0][0]=1;
    dis[0][0]=delay;

    q.push({0,0});

    while(q.size()){
        auto curr=q.front();

        int x=curr.ff;
        int y=curr.ss;

        q.pop();

        for(auto dir: direc_4){
            int nx=x+ dir.ff;
            int ny=y+ dir.ss;

            if(nx<0 || ny<0)continue;
            if(nx>=n || ny>=m)continue;
            if(g[nx][ny]==2)continue;
            if(vis[nx][ny]==1)continue;

            if(nx==n-1 && ny==m-1 && dis_fire[nx][ny]==dis[x][y]+1){
                vis[nx][ny]=1;
                break;
            }

            if(dis_fire[nx][ny]<=dis[x][y]+1) continue;

            dis[nx][ny]=dis[x][y]+1;
            vis[nx][ny]=1;

            q.push({nx, ny});
        }
    }

    for(auto i:dis){
        for(auto j:i) cout<<j<<" ";
        cout<<endl;
    }

    cout<<endl;

    for(auto i:vis){
        for(auto j:i) cout<<j<<" ";
        cout<<endl;
    }

    return (vis[n-1][m-1]==1);
}


void solve(){
    cin>>n>>m;

    vector<vector<int>>g(n,vector<int>(m, 0)), dis(n,vector<int>(m, INT_MAX));
    vector<vector<int>>vis(n,vector<int>(m, 0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>g[i][j];
    }

    queue<pair<int,int>>q;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]==1){
                q.push({i,j});
                dis[i][j]=0;
                vis[i][j]=1;
            }
        }
    }    

    bfs(g, vis, dis, q);

    for(auto i:dis){
        for(auto j:i) cout<<j<<" ";
        cout<<endl;
    }

    cout<<endl;

    int lo=0;
    int hi=1e9;
    int ans=-1;
    
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(bfs1(g, dis, mid)){
            ans=mid;
            lo=mid+1;
        }else hi=mid-1;
    }

    cout<<ans<<endl;
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