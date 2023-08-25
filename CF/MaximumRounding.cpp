/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int solve(){
	int n;
	cin>>n;

	int ans=0;
	int r=0;
	long long int m=10;
	// cout<<n;

	while(n){
		r=n%10;
		n/=10;
		if(r>=5) cout<<r<<endl;
	}

	return ans;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	// int t;
	// cin>>t;

	// while(t--){
		cout<<solve();

		cout<<endl;
	// }

	return 0;

}