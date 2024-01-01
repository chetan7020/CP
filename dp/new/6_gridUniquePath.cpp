/*

Build | ..... | Peace


*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long
#define srt(a) sort(a.begin(), a.end())
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int n, m;
vector<vector<int>> dp(100100, vector<int>(100, -1));

int f(int i, int j) {

    //prinning    
    if(i<0 || j<0) return 0;
    if(i>n || j>m) return 0;

    //base case
    if(i==n-1&& j==m-1) return 1;

    //cache check
    if(dp[i][j]!=-1) return dp[i][j];

    int ans=0;
    ans+=f(i+1,j);
    ans+=f(i,j+1);

    return dp[i][j]=ans;
}	

void solve(){
	cin>>n>>m;

    cout<<f(0,0);

    // cout<<"A";

    cout<<endl;

    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}