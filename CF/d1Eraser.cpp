/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int solve(){
	int ans=0, n, k;

	cin>>n>>k;

	string c;
	cin>>c;

	int i=0;
	// while(i<n){
	// 	if(c[i]=='B') break;
	// 	i++;
	// }

	while(i<n){
		if(c[i]=='B'){
			ans++;
			i+=k;
		}else i++;
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