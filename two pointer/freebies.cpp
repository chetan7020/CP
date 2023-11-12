/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)


using namespace std;

void solve(){
	int n, t; cin>>n;

	vector<int> a(n);

	fore(i, 0, n) cin>>a[i];

	cin>>t;

	sort(a.begin(), a.end());

	int i=0, j=0, ans= 0;
	// int ans= -1;

	while(j<n){
		while(j<n && a[j]-a[i]>t) i++;
		ans= max(ans, (j-i+1));
		j++;
	}

	cout<<ans;
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	return 0;

}