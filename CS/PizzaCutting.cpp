/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define for(i, a, b) for(int i = (a); i < (b); i++)


using namespace std;

string solve(){
	int a; cin>>a;

	if(a==1 || (a%2==0)) return "YES";

	return "NO";
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