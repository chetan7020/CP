/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int solve(){
	int n;
	cin>>n;

	vector<int> arr(n), preSum(n);

	for(int i=0; i<n; i++) cin>>arr[i];

	if(n==0) return 0;

	preSum[0] = arr[0];

	for(int i=1; i<n; i++) preSum[i]=preSum[i-1]+arr[i];

	for(int i=0; i<n; i++) cout<<preSum[i]<<" ";

	return 0;

}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<endl<<solve()<<endl;
	}

	return 0;

}
