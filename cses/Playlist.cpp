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

	fore(i,0,n) cin>>a[i];

	int i=0, j=0;

	int ans=0;

	map<int, int> mp;

	while(j<n){
		mp[a[j]]++;

		while(i<=j && mp[a[j]]>1){
			mp[a[i]]--;
			i++;
		}

		ans= max(ans, (j-i+1));

		j++;
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