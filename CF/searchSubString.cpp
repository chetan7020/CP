/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int solve(){
	int n, m; cin>>n>>m;
	string s, x; cin>>s>>x;

	for(int i=0; i<=6; i++){
		if(s.find(x)!=-1){
			return i;
		}
		s+=s;
	}

	return -1;
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