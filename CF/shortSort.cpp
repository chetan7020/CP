/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long


using namespace std;

string solve(){
	string s;
	cin>>s;

	if(s[0]=='a' || s[1]=='b' || s[2]=='c') return "YES";
	return "NO";
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve()<<endl;
	}

	return 0;

}