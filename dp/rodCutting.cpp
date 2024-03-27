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

int f(int lvl, int n, vector<int>&a, vector<int>&dp, vector<int>&vis){
	if(lvl==n) return 0;

	if(vis[lvl])return dp[lvl];

	int ans=0;

	for(int i=1;i<=n;i++){
		if(lvl+i<n) ans=max(ans, a[i-1]+f(lvl+i, n, a, dp, vis));
	}

	// cout<<

	vis[lvl]=1;
	return dp[lvl]=ans;
}

void solve(){
	int n; cin>>n;

	vector<int>a(n);

	for(int &i:a)cin>>i;

	vector<int>vis(n+100, 0);
	vector<int>dp(n+100, 0);

	cout<<f(0, n, a, vis, dp);

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	solve();

	return 0;

}