/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define for(i, a, b) for(int i = (a); i < (b); i++)


using namespace std;

void solve(){
	string s;
	cin>>s;

	int n= s.size();

	if(n>10) cout<<s[0]<<n-2<<s[n-1];
	else cout<<s;
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		solve();
		cout<<endl;
	}

	return 0;

}