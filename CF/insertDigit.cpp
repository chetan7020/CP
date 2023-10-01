/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

string solve(){
	int n, d;
	string no;
	cin>>n>>d;
	cin>>no;

	int i=0;
	while(i<n){

		if(no[i]-'0'<=d){
			 cout<<d;
			 for(int j=i; j<n; j++) cout<<
		}

		i++;
	}

	return (no + to_string(d));

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