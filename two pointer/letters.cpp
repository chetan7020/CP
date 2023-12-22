/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

void solve(){
	int n, m; cin>>n>>m;

	vector<int> rooms(n), roomNumbers(m), preSum(n+1);
	preSum[0]=0;

	for(int i=0; i<n; i++) cin>>rooms[i];

	for(int i=0; i<m; i++) cin>>roomNumbers[i];

	int idx=0, curr=0;

	for(int i=1; i<=n; i++){
		preSum[i]=preSum[i-1]+rooms[i-1];
	}


	int i=0, j=1;

	while(i<m){

		while(roomNumbers[i]>preSum[j]) j++;

		cout<<j<<" "<<(roomNumbers[i]-preSum[j-1])<<endl;

		i++;
	}
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