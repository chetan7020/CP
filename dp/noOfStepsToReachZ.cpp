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

int cnt=0;

int f(int n, vector<int>&dp, vector<int>&vis){
	if(n==0){
		return 0;
	}

	if(vis[n])return dp[n];

	int ans=1e9;

	if(n%3==0){
		ans=min(ans, 1+f(n/3, dp, vis));
	}

	if(n%2==0){
		ans=min(ans, 1+f(n/2, dp, vis));
	}

	if(n-1>=0){
		ans=min(ans, 1+f(n-1, dp, vis));
	}

	vis[n]=1;
	return dp[n]=ans;
}

// 0 1 2 3 4 5 6
// 0 
int f2(int n){
	vector<int>dp(n+100);
	// vector<int>vis(n+100, 0);

	dp[0]=0;

	for(int i=1;i<=n;i++){
		int ans=1e8;

		if(i%3==0){
			// cnt++;
			ans=min(ans, 1+dp[i/3]);
		}

		if(i%2==0){
			// cnt++;
			ans=min(ans, 1+dp[i/2]);
		}

		if(i-1>=0){
			// cnt++;
			ans=min(ans, 1+dp[i-1]);
		}

		dp[i]=ans;
	}

	for(int i=0;i<=n;i++)cout<<dp[i]<<endl;

	return dp[n];
}


void solve(){


	int n; cin>>n;

	vector<int>dp(n+100);
	vector<int>vis(n+100, 0);

	cout<<f(n, dp, vis);

	// for(int i=0;i<=n;i++)cout<<dp[i]<<" "; 

	// cout<<f2(n)<<endl;

	// cout<<cnt;
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