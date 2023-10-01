/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int solve(){
	int n;
	cin>>n;

	int ans=0;

	while(n){
		if(n&1) ans++;
		n>>=1;
	}

	return ans;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout<<solve();

	return 0;

}