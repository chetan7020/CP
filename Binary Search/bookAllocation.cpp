/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

bool check(int n, int m, vector<int> &arr, int time){
	long long day=1, sec=0;
	
	for(int i=0; i<m; i++){
		if(arr[i]>time) return false;

		sec+=arr[i];

		if(sec>time){
			day++;
			sec=arr[i];
		}
	}

	return day<=n;
}

long long solve(){
	long long n, m, lo=0, hi=10e9;
	cin>>n>>m;

	vector<int> arr(m);

	for(int i=0; i<m; i++) cin>>arr[i];

	long long ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(n, m, arr, mid)){
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