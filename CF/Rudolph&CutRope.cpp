/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int solve(){
	int n;
	cin>>n;
	int cnt=0;
	while(n--){
		int a,b;
		cin>>a>>b;
		if(a>b) cnt++;
	}

	return cnt;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve();
		cout<<endl;
	}

	return 0;

}