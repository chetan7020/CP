/*

Build | ..... | Peace

previosly solved using bs then got other approach with less time complexity

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

// bool check(vector<pair<int, int>> &arr, int n, int mid){
// 	int check = arr[0].second;

// 	for(int i=1; i<n; i++){
// 		if(arr[i].first>=mid && arr[i].second>=check) return false;
// 	}

// 	return true;
// }

int solve(){
	int n;
	cin>>n;

	vector<pair<int, int>> arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i].first;
		cin>>arr[i].second;
	}
	
	// int lo=1; 
	// int hi=arr[0].first;

	// while(lo<=hi){
	// 	int mid=lo+(hi-lo)/2;

	// 	if(check(arr, n, mid)){

	// 		ans = mid;
	// 		break;
			
	// 	}else lo=mid+1;
	// }

	for(int i=1; i<n; i++){
		if(arr[i].first>=arr[0].first && arr[i].second>=arr[0].second) return -1;
	}

	return arr[0].first;
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