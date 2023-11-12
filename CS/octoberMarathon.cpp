/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

void solve(){
	int t; cin>>t;
	if(t<3) cout<<"GOLD";
	else if(t>=3 && t<6) cout<<"SILVER";
	else cout<<"BRONZE";
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	return 0;

}