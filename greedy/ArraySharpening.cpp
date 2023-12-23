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
	vector<int>a(n), l(n, 0), r(n, 0);

	fore(i,0,n) cin>>a[i];

	for(int i=0;i<n;i++){
		if(a[i]>=i) l[i]=1;
		else break;
	}

	for(int i=n-1;i>=0;i--){
		if(a[i]>=n-i-1) r[i]=1;
		else break;
	}
	
	bool flag=false;

	for(int i=0; i<n; i++){
		if(l[i] && r[i]) flag=true;
	}

	if(flag) cout<<"Yes";
	else cout<<"No";

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