/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t;
	cin>>t;

	while(t--){
		int a,b,c;

		cin>>a>>b>>c;

		int ans = a+b+c;
		ans-=min(min(a,b),c);

		if(ans>=10) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}

	return 0;

}