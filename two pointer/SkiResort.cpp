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
	int n, k, q; cin>>n>>k>>q;

	vector<int> a(n);

	fore(i, 0, n){
		cin>>a[i];
		if(a[i]<=q) a[i]=1;
		else a[i]=0;
	}

	int cnt=0, ans=0;

	fore(i, 0, n){
		if(a[i]==1) cnt++;
		else cnt=0;

		ans+=max(0LL, cnt-k+1);
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