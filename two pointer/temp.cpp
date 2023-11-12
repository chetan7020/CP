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

int solve(){
	int n, q; cin>>n>>q;
	vector<int> arr(n);
	fore(i, 0, n){
		cin>>arr[i];
		if(i>0) arr[i]+=arr[i-1];
	}

	fore(i, 0, q){
		int l, r; cin>>l>>r;

		if((l-1)>0){
			cout<<arr[r-1]-arr[l-1];
		}else cout<<arr[r-1];
		cout<<endl;
	}
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	solve();
	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}