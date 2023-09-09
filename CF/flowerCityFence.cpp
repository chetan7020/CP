/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

string solve(){
	int n;
	cin>>n;

	vector<int> a(n), b(n+1);

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	if(a[0]>n) return "NO";

	for(int i: a){
		b[i]++;
	}

	for(int i=n-1; i>=0; i--){
		b[i]+=b[i+1];
	}

	for(int i=0; i<n; i++){
		if(a[i]!=b[i+1]) return "NO";
	}

	return "YES";


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