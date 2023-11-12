/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

string solve(){

	vector<int> num1(3), num2(3);

	for(int i=0; i<3; i++) cin>>num1[i];
	for(int i=0; i<3; i++) cin>>num2[i];

	sort(num1.begin(), num1.end());
	reverse(num1.begin(), num1.end());

	sort(num2.begin(), num2.end());
	reverse(num2.begin(), num2.end());

	int n1=num1[0]*100+num1[1]*10+num1[2];
	int n2=num2[0]*100+num2[1]*10+num2[2];

	if(num1>num2) return "Alice";
	else if(num1<num2) return "Bob";
	return "Tie";

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