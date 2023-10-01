/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long


using namespace std;

void solve(){
	int n, m; cin>>n>>m;

	vector<int> arr(n), arr2(m);

	for(int i=0; i<n; i++) cin>>arr[i];
	for(int i=0; i<m; i++) cin>>arr2[i];

	int i=0, j=0;

	while(i<n || j<m){
		if(i==n) cout<<arr2[j++]<<" ";
		else if(j==m) cout<<arr[i++]<<" ";
		else{
			if(arr[i]<=arr2[j]) cout<<arr[i++]<<" ";
			else cout<<arr2[j++]<<" ";
		}
	}
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		solve();
		cout<<endl;
	}

	return 0;

}