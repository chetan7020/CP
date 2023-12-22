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
	string s; cin>>s;
 
	vector<int> freq(26, 0);
 
	for(int i=0; i<n; i++) freq[s[i]-'a'];
 
	int maxi=0;
	for(int i=0; i<26; i++) maxi= max(maxi,freq[i]);
	
	int ans;
	
	if(n%2) ans=max(1LL, (maxi-n-maxi));
	else ans=max(0LL, (maxi-n-maxi));

	// if(n%2) ans=max(0LL,(maxi-(n-maxi)); 
 	// else ans=max(1LL,(maxi-(n-maxi));


	cout<<ans<<endl;
 
}
 
signed main(){	
 
#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif
 
    int t; cin>>t;
 
    while(t--) solve();
 
	return 0;
 
}