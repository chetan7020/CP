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

	vector<int> arr(n), arrB(n);

	for(int i=0; i<n; i++){
		cin>>arr[i]; //get arr A
		arrB[i] = arr[i]*i; //build arr B from A
	}

	for(int i=1; i<n; i++){ //build preSum in place for both A and B
		arr[i]+=arr[i-1]; 
		arrB[i]+=arrB[i-1]; 
	}

	// for(int i=0; i<n; i++){
	// 	cout<<arrB[i]<<" ";
	// }
	
	// cout<<endl;

	// for(int i=0; i<n; i++){
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;


	if(n==0) return 0;

	while(q--){
		int l, r;
		cin>>l>>r;

		cout<<arrB[r]+((1-l)*arr[r])<<endl;
	}

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
