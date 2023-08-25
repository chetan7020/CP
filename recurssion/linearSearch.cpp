/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

bool linearSearch(vector<int> &arr, int n, int i, int target){
	if(i==n) return false;
	if(target==arr[i]) return true;
	else return linearSearch(arr, n, i+1, target);
}

void solve(){
	int n, target;
	cin>>n>>target;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr[i]=ele;
	}

	if(linearSearch(arr, n, 0, target)) cout<<"YES";
	else cout<<"NO";

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	// cin>>t;
	t=1;

	while(t--){
		solve();
		cout<<endl;
	}

	return 0;

}