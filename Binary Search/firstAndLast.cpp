/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int firstOcc(vector<int> &arr, int n, int k){
	int ans=-1;
	int i=0;
	int j=n-1;

	while(i<=j){
		int m=i+(j-i)/2;

		if(arr[m]==k){
			ans=m;
			j=m-1;
		}else if(arr[m]<k) i=m+1;
		else j=m-1;
	}

	return ans;
}

int lastOcc(vector<int> &arr, int n, int k){
	int ans=-1;
	int i=0;
	int j=n-1;

	while(i<=j){
		int m=i+(j-i)/2;

		if(arr[m]==k){
			ans=m;
			i=m+1;
		}else if(arr[m]<k) i=m+1;
		else j=m-1;
	}

	return ans;
}

void solve(){
	int n, k;
	cin>>n>>k;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr[i]=ele;
	}

	cout<<"First Occurance : "<<firstOcc(arr, n, k)<<endl;
	cout<<"Last Occurance : "<<lastOcc(arr, n, k)<<endl;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		solve();
		// cout<<endl;
	}

	return 0;

}