/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int solve(){
	int a, b;
	cin>>a>>b;
	int ans = 0;

	if(a<b) swap(a,b);

	ans = min(((a-b)/2), b);

	b-= ans;

	ans+=b/2;

	return ans;

}

int main(){

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