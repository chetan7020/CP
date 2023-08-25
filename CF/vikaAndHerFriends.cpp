/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

bool solve(){

	int n,m,k;

	cin>>n>>m>>k;
	int x,y;
	cin>>x>>y;
	bool flag;
	while(k--){
		int x1,y1;
		cin>>x1>>y1;
		flag=true;
		if((abs(x1-x)+abs(y1-y))%2==0) flag = false;
	}

	return flag;

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		if(solve()) cout<<"YES";
		else cout<<"NO";

		cout<<endl;
	}

	return 0;

}