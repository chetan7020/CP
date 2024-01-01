/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long
#define srt(a) sort(a.begin(), a.end())
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;

    int ans;

    if(a == b) ans= c;
    else if(c == b) ans=a;
	else if(a == c) ans=b;

	cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t=1;
	// cin>>t;

	while(t--) solve();

	return 0;

}