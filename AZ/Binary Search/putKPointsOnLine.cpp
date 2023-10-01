/*


maximize the minimun distance betweeen two points by place k points on line consisting n points

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long


using namespace std;


bool check(vector<int> &arr, int n, int k, int mid){
	int placed=0;

	for(int i=1; i<n; i++){
		placed+=ceil((arr[i]-arr[i-1])/2)-1;
	}

	return placed<=k;
}

int solve(){

	int n, k, lo=0, hi=1e9;
	cin>>n>>k;

	vector<int> arr(n);
	for(int i=0; i<n; i++) cin>>arr[i];

	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(arr, n, k, mid)){
			ans=mid;
			hi=mid-1;
		}else lo=mid+1;
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