/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long


using namespace std;

bool check(vector<int> &arr, int n, int mid){
	if(mid==0) return true;

	if(arr[mid]<arr[mid-1]) return false;

	return true;
}

int solve(){

	int n; cin>>n;

	vector<int> arr(n);

	for(int i=0; i<n; i++) cin>>arr[i];

	int lo=0;
	int hi=n-1;
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(arr, n, mid)){
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