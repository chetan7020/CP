/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
// #define for(i, a, b) for(int i = (a); i < (b); i++)


using namespace std;

void revArr(vector<int> &arr, int i, int j){
	if(i>j) return;
	swap(arr[i], arr[j]);
	i++; j--;
	revArr(arr, i, j);
}

void solve(){
	int n; cin>>n;
	vector<int> arr(n);

	for(int i=0; i<n; i++) cin>>arr[i];

	for(int i=0; i<n; i++) cout<<arr[i]<<" ";	

	revArr(arr, 0, n-1);

	cout<<endl;
	for(int i=0; i<n; i++) cout<<arr[i]<<" ";	
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}