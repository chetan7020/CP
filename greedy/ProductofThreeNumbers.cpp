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
	int n; cin>>n;

	int a=1, b=1, c=1;

	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			a=i;
			break;
		}
	}

	n=n/a;

	for(int i=2; i*i<=n; i++){
		if((n%i==0) && (i!=a)){
			b=i;
			break;
		}
	}

	c=n/b;

	if(a!=b && b!=c && a!=c && a!=1 && b!=1 && c!=1){
		cout<<"YES"<<endl;
		cout<<a<<" "<<b<<" "<<c;
	}else cout<<"NO";

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