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
	int n, k, x;
	cin>>n>>k>>x;

	if(((k*(k+1))/2)>x) return "NO";
	if(((n-k+1+n)*k/2)<x) return "NO";
	return "YES";
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