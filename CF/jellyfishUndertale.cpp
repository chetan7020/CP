/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int solve(){
	int a, b, n; cin>>a>>b>>n;

	int ans=b;

	for(int i=0; i<n; i++){
		int ele; cin>>ele;
		ans+=min(ele, a-1);
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