/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

string solve(){
	long long n;
	cin>>n;

	string s;
	cin>>s;

	long long i=0, start=n;
	while(i<(n-2)){

        if (s[i]=='1') {start=i; break; }

		i++;
	}

	start++;

	while(start<n){

        s[start]='0';

		start++;
	}


	return s;
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