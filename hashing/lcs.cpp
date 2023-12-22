/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
	int n; cin>>n;

	vector<int> a(n);

	map<int, int> mp;

	for(int i=0; i<n; i++){
		cin>>a[i];
		mp[a[i]]= 1;
	}

	for(int i=0; i<n; i++){
		if(mp.find(a[i]-1)!=mp.end()) mp[a[i]]= 0;
	}

	int ans= 0;

	// for(auto i: mp) cout<<i.first<<" "<<i.second<<endl;

	for(auto i: mp){
		int curr=1;

		// int start= i.first;

		// cout<<start<<endl;

		if(i.second==1){
			while(mp.find(i.first+curr)!=mp.end()){
				// cout<<a[i.first+curr]<<" ";
				curr++;
			}
		}
		// cout<<endl<<i.first<<" "<<curr<<endl;
		ans= max(ans, curr);
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