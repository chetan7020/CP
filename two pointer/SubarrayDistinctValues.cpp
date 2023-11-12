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
	int n, k; cin>>n>>k;

	vector<int> a(n);

	fore(i, 0, n) cin>>a[i];

	map<int, int> mp;

	int i=0, j=0, ans=0, cnt=0;

	while(j<n){
		mp[a[j]]++;
		if(mp[a[j]]==1) cnt++;

		while(i<=j && cnt>k){
			mp[a[i]]--;
			if(mp[a[i]]==0) cnt--;
			i++;
		}

		ans+= (j-i+1);

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