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
	string s; cin>>s;

	int i=0, j=0, n=s.size(), ans=0;

	map<char, int> mp;

	while(j<n){
		mp[s[j]]++;

		while(i<=j && mp[s[j]]>1){
			mp[s[i]]--;
			i++;
		}

		ans= max(ans, (j-i+1));

		// cout<<ans<<" ";

		j++;
	}

	cout<<ans;

}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// cout<<solve();
	solve();

	return 0;

}