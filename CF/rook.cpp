/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
// #define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
	string s; cin>>s;

	for(int i=0; i<8; i++){
		if(('a'+i)!=s[0]) cout<<char('a'+i)<<s[1]<<endl;
	}

	for(int i=1; i<=8; i++){
		if(i!=s[1]-'0') cout<<s[0]<<i<<endl;
	}
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--)solve();

	return 0;

}