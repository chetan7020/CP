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

/*

1 6
2 3
5 5

*/

void solve(){
	int n, x, m; cin>>n>>x>>m;

	int l=x, r=x;

	for(int i=0; i<m; i++){
		int a,b; cin>>a>>b;

		if((a<=l && l<=b) || (a<=r && r<=b)){
			l=min(a,l);
			r=max(b,r);
		}
	}

	// cout<<l<<" "<<r<<endl;

	cout<<(r-l+1)<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--) solve();

	return 0;

}