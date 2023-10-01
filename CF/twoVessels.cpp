/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

void solve(){
	int a,b,c;

	cin>>a>>b>>c;

	// cout<<a<<" "<<b<<" "<<c<<endl;

	cout<<ceil(((double)abs(a-b)/2)/c);

	// cout<<d<<endl;

	// cout<<ceil(d/c);
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	// solve();
	while(t--){
		solve();
		cout<<endl;
	}

	return 0;

}