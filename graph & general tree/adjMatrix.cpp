/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
	int v, e; cin>>v>>e;

	vector<vector<int>> a(v+1, vector<int>(v+1, 0));

	for(int i=1; i<=e; i++){
		int s, e, wt; cin>>s>>e>>wt;

		a[s][e]= wt;
		a[e][s]= wt;
	}

	for(int i=1; i<=v; i++){
		for(int j=1; j<=v; j++){
			
			cout<<a[i][j]<<" ";
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