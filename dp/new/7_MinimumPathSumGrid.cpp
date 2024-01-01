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
vector<vector<int>> a(1010, vector<int>(1010)), dp(1010, vector<int>(1010, -1)); 

int f(int i, int j) {
    // prunning && base case
    if(i>=n || j>=m) return INT_MAX;

    if(i==n-1 && j==m-1) return a[i][j];

    // cache check
    if(dp[i][j]!=-1) return dp[i][j];

	// save & return
    int ans=a[i][j];

    ans+=min(f(i+1, j), f(i, j+1));

    return dp[i][j]= ans;
}	

void solve(){
	cin>>n>>m;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
			// cout<<a[i][j]<<" ";
		}
		// cout<<endl;
	}

	// cout<<f(0,0);

    // cout<<endl;


    dp[0][0]=a[0][0];
    for(int j=1; j<m; j++) dp[0][j]=a[0][j]+dp[0][j-1];
    for(int i=1; i<n; i++) dp[i][0]=a[i][0]+dp[i-1][0];

    for(int i=1; i<n; i++){
    	for(int j=1; j<m; j++){
    		dp[i][j]=a[i][j]+min(dp[i-1][j], dp[i][j-1]);
    	}
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<dp[n-1][m-1];
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}