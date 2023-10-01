/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

bool check(vector<int> &arr, int h, int x){
	for(int i: arr){
		if(i<=x) continue;
		if(h>i) h-=i;
		else return false;
	}

	return true;
}

int solve(){
	int n, h;
	cin>>n>>h;

	vector<int> arr(n);

	int lo=0, hi, ans=-1;

	for(int i=0; i<n; i++){
		cin>>arr[i];
		hi+=arr[i];
	}
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(arr, h, mid)){
			ans=mid;
			hi=mid-1
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