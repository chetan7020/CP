
/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	int t;
	cin>>t;

	while(t--){

		int n,m,k,h;
		int cnt=0;
		cin>>n>>m>>k>>h;
		for(int i=0; i<n; i++){
			int ele;
			cin>>ele;
			int diff=abs(ele-h);
			if( (diff%k==0)  && (diff<=((m*k)-k)) && diff!=0) cnt++;
		}

		cout<<cnt<<endl;

	}

	return 0;

}