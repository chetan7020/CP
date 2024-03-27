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
// #define int long long

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
	int n, q; cin>>n>>q;

	vector<string>a(n);

	for(auto &i:a)cin>>i;

	vector<vector<int>> pre(n+1, vector<int>(n+1, 0));

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]=='*') pre[i+1][j+1]=1;
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) pre[i][j]+=pre[i][j-1];
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) pre[j][i]+=pre[j-1][i];
	}

	while(q--){
		int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
		cout<<pre[x2][y2]- pre[x2][y1-1]- pre[x1-1][y2]+ pre[x1-1][y1-1]<<endl; 
	}

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	int t=1;

	while(t--) solve();

	return 0;

}