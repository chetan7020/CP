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
	vector<int>a(n);

	for(int i=0;i<n;i++) cin>>a[i];

	int ans=0;

	for(int i=0;i<n;i++){
		map<int,int>mp;
		int mx=INT_MIN, mi=INT_MAX;
		for(int j=i;j<n;j++){
			if(mp.find(a[j])!=mp.end()) break;
			mp[a[j]]=1;

			mx=max(mx,a[j]);
			mi=min(mi,a[j]);

			if(mx-mi==j-i) ans=max(ans, (j-i+1));
		}
	}

	cout<<ans;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}