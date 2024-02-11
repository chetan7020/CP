/*

Build | ..... | Peace

i/p
3 3
1 2 3
1 2 3
1 2 3
1
1 1 2 3

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
	int n,m; cin>>n>>m;

	vector<vector<int>>a(n+1, vector<int>(m+1, 0));

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}

	//row wise sum
	for(int i=1;i<=n;i++){ 
		for(int j=1;j<=m;j++){
			a[i][j]+=a[i][j-1];
		}
	}

	//col wise sum
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[j][i]+=a[j-1][i];
		}
	}

	int q; cin>>q;

	while(q--){
		int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

		cout<<a[x2][y2]-a[x1-1][y2]-a[x2][y1-1]+a[x1-1][y1-1]<<endl;
	}

	// print
	// for(auto &i:a){
	// 	for(auto &j:i) cout<<j<<" ";
	// 	cout<<endl;
	// }

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