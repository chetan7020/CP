#include<bits/stdc++.h>

using namespace std;

vector<int>dp(100005, -1);

int lis(int lvl, vector<int>&a){
	int ans=1;
	for(int i=0;i<lvl;i++){
		if(a[i]<a[lvl]) ans=max(ans, 1+dp[i]);
		// cout<<i<<" ";
	}

	return dp[lvl]=ans;
}

void solve(){
	int n; cin>>n;
	vector<int>a(n);
	for(int &i:a)cin>>i;
	int ans=INT_MIN;

	for(int i=0;i<n;i++){
		ans= max(ans, lis(i, a));
	}

	cout<<ans<<endl;

}
signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//Temp//input.txt", "r", stdin);
    freopen("D://CP//Codes//Temp//output.txt", "w", stdout);
#endif

	int t=1;
	// cin>>t;

	while(t--) solve();

	return 0;

}