/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;


/*

n=4

1 2 8

*/

void solve(){
	int n;
	cin>>n;

	vector<int> ans(n);
	ans[0]=2;
	ans[1]=3;

	int i=2;

	while(i<n){
		
		ans[i]= ans[i-1]+1;

		while(((3*ans[i])%(ans[i-1]+ans[i-2]))==0) ans[i]++;

		i++;
	}

	for(int i=0; i<n; i++) cout<<ans[i]<<" ";
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		solve();
		cout<<endl;
	}

	return 0;

}