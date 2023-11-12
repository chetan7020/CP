/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int solve(){
	int n; cin>>n;
	vector<int> arr(n);

	for(int i=0; i<n; i++) cin>>arr[i];

	sort(arr.begin(), arr.end());

	int i=0, j=0, ans=INT_MIN;

	while(j<n){
		while(arr[j]>(2*arr[i])) i++;
		ans=max(ans, (j-i+1));
		j++;
	}

	return (n-ans);
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout<<solve();

	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}