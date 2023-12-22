/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define srt(a) sort(a.begin(), a.end())
#define int long long
#define ff first
#define ss second
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

bool sortBySecond(const pair<int, int> &a, const pair<int, int> &b) {
    return a.ss < b.ss;
}

void solve(){
	int n; cin>>n;
	vector<pair<int,int>>a;

	fore(i,0,n){
		int x, y; cin>>x>>y;
		a.pb({x,y});
	}

	sort(a.begin(), a.end(), sortBySecond);

	int ans=0, st=0;

	for(auto i: a){
		if(st<=i.ff){
			ans++;
			st=i.ss;	
		}
	}

	cout<<ans;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}