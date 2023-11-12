/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define for(i, a, b) for(int i = (a); i < (b); i++)


using namespace std;

int sumPara(int n){
	if(n==1){
		return 1;
	}

	return n+sumPara(n-1);
}

void solve(){
	cout<<sumPara(3);
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