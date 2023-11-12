/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

const int MOD = 1000000007;

using namespace std;

int f(int n){ //recurssion
	if(n<=1) return 1;
	return f(n-1)+f(n-2);
}

int f2(vector<int> &dp, int n){ //memo
	if(n<=1) return 1;
	if(dp[n]!=-1) return dp[n];

	return dp[n]=((f2(dp, n-1)%1000000007)+(f2(dp, n-2)%1000000007))%1000000007;
}

int f3(vector<int> &dp, int n){ //tabu
	dp[0]=1;
	dp[1]=1;
	for(int i=2; i<=n; i++) dp[i]=dp[i-1]+dp[i-2];
	return dp[n];
}

int f4(int n){ //space optimization
	int a=1, b=1;
	for(int i=2; i<=n; i++) {
		int c=a+b;
		a=b;
		b=c;
	}
	return b;
}

int f5(vector<int> &dp, int lvl, int n){
	if(lvl==n) return 1;

	if(dp[lvl]!=-1) return dp[lvl];

	int ans=0;

	for(int i=1; i<=2; i++){
		if(lvl+i<=n) ans+=f5(dp, lvl+i, n);

		ans%=MOD;
	}

	return dp[lvl]= ans;
}

void solve(){
	int n; cin>>n;
	vector<int> dp(n+1, -1);
	// cout<<f(n)<<endl;
	// cout<<f2(dp, n)<<endl;
	// cout<<f3(dp, n)<<endl;
	// cout<<f4(n)<<endl;

	cout<<f5(dp, 0, n);
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