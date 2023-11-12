/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int cntStairs(int n, int curr, vector<int> &dp){

	if(curr>n) return 0;

	if(curr==n) return 1;

	if(dp[curr]!=-1) return dp[curr];

	int ans=0;

	for(int i=1; i<=3; i++){
		if(curr+i<=n) ans+=cntStairs(n, curr+i, dp);
	}

	return ans;
}

void solve(){
	int n; cin>>n;

	vector<int> dp(n+1, -1);

	cout<<cntStairs(n, 1, dp)<<endl;
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