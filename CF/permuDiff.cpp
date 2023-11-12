/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

void solve(){
	int n; cin>>n;

	vector<pair<int, int>> arr(n);

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;

		arr[i]={ele, i};
	}

	sort(arr.begin(), arr.end());

	vector<int> ans(n);

	for(int i=0; i<n; i++){
		ans[arr[i].second]=n-i;
	}

	for(int i: ans) cout<<i<<" ";
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
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