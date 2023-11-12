/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int solve(){
	int n, m;
	cin>>n>>m;

	vector<int> theorem(n), behavior(n);
	int ans=0;

	for(int i=0; i<n; i++) cin>>theorem[i];

	
	for(int i=0; i<n; i++){
		cin>>behavior[i];

		if(behavior[i]==1) ans+=theorem[i];
	}

	int i=0, j=0, maxi=INT_MIN, curr=0;

	while(j<n){

		if(behavior[j]==0) curr+=theorem[j];

		if((j-i+1)==m){

			maxi=max(maxi, curr);
			if(behavior[i]==0) curr-=theorem[i];
			i++;
		}

		j++;
	}

	return (ans+maxi);
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout<<solve();

	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}