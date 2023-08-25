/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

bool solve(){
	long long int n;
	cin>>n;

	long long int cnt=0;
	// long long int sum=0;

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;

		if(ele==1) cnt++;
		// sum+=ele;
	}

	if(n==1) return false;

	if((n-cnt)>=cnt) return true;
	return false;
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