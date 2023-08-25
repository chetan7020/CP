/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int solve(){
	int n;
	cin>>n;

	vector<int> arr;

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr.push_back(ele);
	}

	int maxi=0;

	for(int i=1; i<n; i++){
		if(arr[i-1]>arr[i]) maxi=max(maxi, max(arr[i], arr[i-1]));
	}

	return maxi;

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin>>t;

	while(t--){
		cout<<solve();

		cout<<endl;
	}

	return 0;

}