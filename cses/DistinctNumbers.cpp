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
	int n; cin>>n;

	vector<int> a(n);

	fore(i, 0, n) cin>>a[i];

	sort(a.begin(), a.end());

	int cnt=0;

	fore(i, 0, n){
		if(i==0 || a[i]!=a[i-1]) cnt++;
	}

	cout<<cnt;
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	solve();

	return 0;

}