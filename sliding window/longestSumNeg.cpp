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

int solve(){
	int n, k; cin>>n>>k;

	vector<int> arr(n);

	for(int i=0; i<n; i++) cin>>arr[i];

	map<int, int> mp;

	int i=0, ans=0, sum=0;

	while(i<n){
		sum+=arr[i];

		if(mp.find(sum-k)!=mp.end()) ans= max(ans, (i-mp[sum-k]));

		if(mp.find(sum)==mp.end()) mp[sum]= i;

		i++;
	}

	// for(auto i: mp) cout<<i.first<<" "<<i.second<<endl;

	// cout<<endl;

	return ans;
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout<<solve();

	return 0;

}