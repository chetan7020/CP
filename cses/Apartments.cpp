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
	int n, m, k; cin>>n>>m>>k;

	vector<int> appli(n), appar(m);;

	fore(i, 0, n) cin>>appli[i];

	fore(i, 0, m) cin>>appar[i];

	sort(appli.begin(), appli.end());
	sort(appar.begin(), appar.end());

	int ans=0;

	int i=0, j=0;

	while(i<n && j<m){

		// cout<<i<<" "<<j<<endl;

		if( abs(appli[i]- appar[j])<=k ){
			i++;
			j++;
			ans++;
		}else if( appli[i]- appar[j]>k ) j++;
		else i++;
	}

	cout<<ans;

}


/*

i
45 60 60 80

j
30 60 75

*/

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	return 0;

}