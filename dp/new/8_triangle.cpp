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

int n;
vector<vector<int>> a(1010, vector<int>(1010)), dp(1010, vector<int>(1010, -1)); 

int f(int i, int j) {
    // prunning && base case
    if(i>=n) return INT_MAX;

    if(i==n-1) return a[i][j];

    // cache check
    if(dp[i][j]!=-1) return dp[i][j];

	// save & return
    int ans=a[i][j];

    ans+=min(f(i+1, j), f(i+1, j+1));

    return dp[i][j]= ans;
}	

void solve(){
	cin>>n;

	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			// cin>>a[i][j], cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<f(0,0);
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}