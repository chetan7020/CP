/*

Build | ..... | Peace

Given an array A of size N, initially all Os.
There are Q queries of the Form: 
+LRX-> Add X to all the index in the range L to R.
After all the queries You need to find the final array of size n

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int solve(){
	int n, q;
	cin>>n>>q;

	vector<int> preSum(n);

	if(n==0) return 0;

	while(q--){
		int x, l, r;
		cin>>x>>l>>r;

		preSum[l]+=x;
		if(r+1<n) preSum[r+1]-=x;
	}

	for(int i=0; i<n; i++) cout<<preSum[i]<<" ";

	cout<<endl;

	for(int i=1; i<n; i++) preSum[i]+=preSum[i-1];

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
