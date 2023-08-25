/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int solve(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr[i]=ele;
	}

	stack<int> lse, rse;
	vector<int> lseArr(n), rseArr(n);

	for(int i=0; i<n; i++){
		while(!lse.empty() && lse.top()>=arr[i]) lse.pop();
		if(lse.empty()) lseArr[i]=0;
		else lseArr[i]=lse.top();
		lse.push(arr[i]);

		while(!rse.empty() && rse.top()>=arr[n-i-1]) rse.pop();
		if(rse.empty()) rseArr[n-i-1]=0;
		else rseArr[n-i-1]=rse.top();
		rse.push(arr[n-i-1]);

	}

	// cout<<"arr : ";
	// for(auto i:arr){
	// 	cout<<i<<" ";
	// }
	// cout<<endl<<"lseArr : ";
	// for(auto i:lseArr){
	// 	cout<<i<<" ";
	// }
	// cout<<endl<<"rseArr : ";
	// for(auto i:rseArr){
	// 	cout<<i<<" ";
	// }
	int maxi=INT_MIN;

	for(int i=0; i<n; i++){
		// cout<<abs(lseArr[i]- rseArr[i])<<" ";
		maxi=max(maxi, abs(lseArr[i]- rseArr[i]));
	}

	// cout<<endl;

	return maxi;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;
	// t=1;
	while(t--){
		// if(solve()) cout<<"YES";
		// else cout<<"NO";
		cout<<solve();

		cout<<endl;
	}

	return 0;

}