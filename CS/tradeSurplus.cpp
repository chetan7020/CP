/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

string solve(){
	long long a1, a2, b1, b2;
	cin>>a1>>a2>>b1>>b2;

	if((a1-a2)+(b1-b2)<0) return "YES";
	return "NO";

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