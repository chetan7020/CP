/*

Build | ..... | Peace

cpy mat kar bc

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
	string s; cin>>s;

	int z=0, curr=0, mx=0;

	for(int i=0; i<n; i++){
		if(s[i]=='.'){
			curr++;
			z++;
		}else{
			mx= max(mx, curr);
			curr=0;
		}
	}
	mx= max(mx, curr);

	if(z==0) cout<<0;
	else if(mx>2) cout<<2;
	else cout<<z;

	cout<<endl;
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