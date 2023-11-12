/*

Build | ..... | Peace


0 1 1 2 3 5

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int f(vector<int> &dp, int n){ //memoization
	if(n<=1) return n;

	if(dp[n]!=-1) return dp[n];

	return dp[n] = f(dp, n-1)+f(dp, n-2);
}

int f2(vector<int> &dp, int n){ //tabulation
	dp[0]=0;
	dp[1]=1;

	for(int i=2; i<=n; i++) dp[i]=dp[i-1]+dp[i-2];

	return dp[n];
}

int f3(int n){
	int a=0, b=1;

	for(int i=2; i<=n; i++){
		int c=a+b;
		a=b;
		b=c;
	}

	return b;
}

void solve(){
	int n; cin>>n;

	vector<int> dp(n+1, -1);

	cout<<f(dp, n)<<endl;
	cout<<f2(dp, n)<<endl;
	cout<<f3(n);
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