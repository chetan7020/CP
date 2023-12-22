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

int solve(){
	int n; cin>>n;

	vector<int>a(n);
	fore(i, 0, n) cin>>a[i];

	int ans= -1e9, sm=a[0];

	ans= max(ans, sm);

	fore(i, 1, n){
		
		if(max(a[i], -a[i])%2==max(a[i-1], -a[i-1])%2) sm=0;

		if(sm<0) sm=0;

		sm+=a[i];

		ans= max(ans, sm);
	}

	return ans;

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve()<<endl;
	}

	return 0;

}	