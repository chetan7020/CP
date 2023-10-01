/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long


using namespace std;

string solve(){
	int n, k;
	cin>>n>>k;

	vector<int> arr(n);

	bool flag= false;

	for(int i=0; i<n; i++) {
		cin>>arr[i];
		if(arr[i] == k) flag=true;
	}

	if(flag) return "YES";
	return "NO";
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