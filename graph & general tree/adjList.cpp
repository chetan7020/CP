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

	vector<vector<pair<int, int>>> a(v+1);

	for(int i=1; i<=e; i++){
		int s, e, wt; cin>>s>>e>>wt;

		a[s].push_back({e, wt});
		a[e].push_back({s, wt});
	}

	for(int i=1; i<=v; i++){
		cout<<i<<endl;
		for(auto j: a[i]) cout<<j.first<<" "<<j.second<<endl;
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