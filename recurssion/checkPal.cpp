/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

bool checkPal(string &s, int i, int j){
	if(s[i]!=s[j]) return false;
	if(i>j) return true;
	i++; j--;
	return checkPal(s, i, j);
}

void solve(){
	cout
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}