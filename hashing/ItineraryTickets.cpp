/*

Build | ..... | Peace

cpy mat kar bc


find starting of journey
print it like linked list


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
	map<string, string> mp2;
	map<string, bool> mp;

	for(int i=0; i<n; i++){
		string a, b; cin>>a>>b;
		mp2[a]= b;

		if(mp.find(a)==mp.end())mp[a]= true;
		mp[b]= false;
	}

	string s="";

	for(auto i: mp){
		if(i.second==true){
			s= i.first;
			break;
		}
	}

	while(true){
		if(mp2.find(s)==mp2.end()){
			cout<<s<<".";
			break;
		}else cout<<s<<"->";
		s= mp2[s];
	}
	// cout<<".";

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}