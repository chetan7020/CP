/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int solve(){
	int n, k;
	cin>>n>>k;

	vector<int> arr;

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr.pb(ele);
	}

	int i=0;
	int j=n-1;


	int m=i+(j-i)/2;

	while(i<=j){
		if(arr[m]==k) return arr[m];
		else if(arr[m]>k) j=m-1;
		else i=m;

		m=i+(j-i)/2;
	}

	return arr[m];
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve()<<endl;
	}

	return 0;

}