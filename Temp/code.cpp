#include<bits/stdc++.h>

using namespace std;

int ip(string s){
	int i=0, j=s.size()-1;

	while(i<j){
		if(s[i++]!=s[j--]) return 0;
	}

	return 1;
}

void solve(){
	string s; cin>>s;

	if(ip(s)==1) cout<<"Palindrome";
	else cout<<"Not Palindrome";
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//Temp//input.txt", "r", stdin);
    freopen("D://CP//Codes//Temp//output.txt", "w", stdout);
#endif

	int t=1;
	// cin>>t;

	while(t--) solve();

	return 0;

}