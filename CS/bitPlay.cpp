/*

Build | ..... | Peace


	chetandagajipati

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int solve(){
	int n; cin>>n;
	string s; cin>>s;

	int ans=1;
	int i=2;

	while(i<n){
		int cnt=0; 
		int a=s[i-2]-'0';
		int b=s[i-1]-'0';
		int c=s[i]-'0';

		if((a&b)==c) cnt++;
		if((a|b)==c) cnt++;
		if((a^b)==c) cnt++;

		ans*=cnt;
		ans%=(1000000007);

		i++;
	}

	return ans;
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