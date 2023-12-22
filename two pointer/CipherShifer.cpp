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

	string s; cin>>s;

	cout<<s[0];

	int i=1;

	int preIdx=0;

	while(i<n){
		while(i<n && s[preIdx]!=s[i]) i++;
		i++;
		// cout<<i<<" "<<preIdx<<endl;
		if(i<n){
			// ans+=s[i];
			cout<<s[i];
			preIdx= i;
		}
		i++;
	}

	// cout<<endl;

	// return ans;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		// cout<<solve()<<endl;
		solve();
		cout<<endl;
	}

	return 0;

}