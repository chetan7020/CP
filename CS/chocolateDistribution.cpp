/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

void solve(){
	long long n;
	cin>>n;

	if(n%2){
		long long m = (n-1)/2;
		cout<<1<<" "<<m<<" "<<m;
	}else cout<<1<<" "<<1<<" "<<(n-2);
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	long long t;
	cin>>t;

	while(t--){
		solve();
		cout<<endl;
	}

	return 0;

}