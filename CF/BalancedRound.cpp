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
	int n, k; cin>>n>>k;
	
	vector<int>a(n);
	fore(i,0,n) cin>>a[i];

	srt(a);

	int cnt=0, mx=0;

	fore(i,0,n){
		if(i){
			if(a[i]-a[i-1]>k) cnt=1;
			else cnt++;
		}else cnt++;

		mx=max(mx, cnt);
	}

	cout<<n-mx<<endl;

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    int t; cin>>t;

    while(t--) solve();

	return 0;

}