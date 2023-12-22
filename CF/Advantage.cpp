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

	vector<int> a(n), m(n, -1);

	fore(i, 0, n) cin>>a[i];

	int maxi= -1;

	for(int i=0; i<n; i++){
		m[i]= maxi;
		maxi= max(maxi, a[i]);
	}

	maxi=-1;

	for(int i=n-1; i>=0; i--){
		m[i]= max(maxi, m[i]);
		maxi= max(maxi, a[i]);
	}

	for(int i=0; i<n; i++) cout<<a[i]-m[i]<<" ";
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		solve();
		cout<<endl;
	}

	return 0;

}