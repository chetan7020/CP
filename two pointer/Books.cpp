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
	int n, t; cin>>n>>t;

	vector<int> a(n);

	fore(i, 0, n) cin>>a[i];

	int i=-1, j=0, sm=0, ans=0;

	while(j<n){

		sm+=a[j];

		while(i<n && sm>t){
			i++;
			sm-=a[i];
		}

		ans= max(ans, (j-i));

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