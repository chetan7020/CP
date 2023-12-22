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
	int n; cin>>n;

	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	map<int, int> mp;

	for(int i=0; i<n; i++){
	  mp[a[i]]= 1;
	}
	for(int i=0; i<n; i++){
	  if(mp.find(a[i]-1)!=mp.end()) mp[a[i]]= 0;
	}

	int ans= 0;

	for(auto i: mp){
	  int tl=1;
	  int s= i.first;
	  
	  if(i.second==1){
	      while(mp.find(s+tl)!=mp.end()) tl++;
	  }
	  
	  ans= max(ans, tl);
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