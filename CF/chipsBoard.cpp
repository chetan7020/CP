/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long


using namespace std;

int solve(){
	int n, sumA=0 ,sumB=0, minA=INT_MAX, minB=INT_MAX; cin>>n;


	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		minA=min(minA, temp);
		sumA+=temp;
	}

	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		minB=min(minB, temp);
		sumB+=temp;
	}

	return min((sumA+(n*minB)), (sumB+(n*minA)));

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