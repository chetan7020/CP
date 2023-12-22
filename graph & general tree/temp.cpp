/*

Build | ..... | Peace

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
	vector<int>a(n), b(n);

	fore(i,0,n){
		cin>>a[i];
	} 

	fore(i,0,n){
		cin>>b[i];
	} 

	vector<pair<int, int>> v;

	fore(i,0,n){
		v.pb({a[i]+b[i], i});
	}

	srt(v);

	int ans=0, cnt=0;

	for(int i=n-1; i>=0; i--){
		if(cnt%2==0) ans+=a[v[i].ss]-1;
		else ans-=b[v[i].ss]-1;
		cnt++;
	}

	cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    int t; cin>>t;
    while(t--)solve();

	return 0;

}