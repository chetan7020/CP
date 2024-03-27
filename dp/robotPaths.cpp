/*

Build | ..... | Peace

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

void solve(){
	int n, m, k; cin>>n>>m>>k;

	vector<vector<int>>a(n, vector<int>(m, 1));
	vector<vector<int>>dp(n+100, vector<int>(m+100, 0)); 

	while(k--){
		int x, y; cin>>x>>y;
		a[x][y]=0;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){

			if(i==0 && j==0){
				if(a[i][j]==1){
					dp[i][j]=1;
				}
			}else if(i==0){
				if(a[i][j]==1){
					dp[i][j]=dp[i][j-1];
				}
			}else if(j==0){
				if(a[i][j]==1){
					dp[i][j]=dp[i-1][j];
				}
			}else{
				if(a[i][j]==1){
					if(a[i-1][j]==1){
						dp[i][j]+=dp[i-1][j];
					}
					if(a[i][j-1]==1){
						dp[i][j]+=dp[i][j-1];
					}
				}
			}

		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl<<dp[n-1][m-1]<<endl;
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