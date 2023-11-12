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
	vector<int> arr(n);

	for(int i=0; i<n; i++) cin>>arr[i];

	sort(arr.begin(), arr.end());

	vector<int> postSum(n);

	postSum[n-1] = arr[n-1];

	for(int i=(n-2); i>=0; i--) postSum[i]= postSum[i+1]+arr[i];

	sort(postSum.begin(), postSum.end());

	for(int i=(n-1); i>=0; i--) cout<<postSum[i]<<" "; 
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