/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int int long long

using namespace std;

bool check(vector<int>& arr, int n, int x, int h) {
	int reqWater=0;

	for(int i=0; i<n; i++){
		if(arr[i]<h) reqWater+=(h-arr[i]);
	}

	return reqWater<=x;
}

int solve(){

	int n, x;
	cin>>n>>x;

	int lo=0;
	int hi=1e12;
	int ans=-1;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}	

	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(arr, n, x, mid)){
			ans=mid;
			lo=mid+1;
		}else hi=mid-1;
	}

	return ans;
}

signed main(){

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