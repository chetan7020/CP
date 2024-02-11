/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

#define srt(a) sort(a.begin(), a.end())

using namespace std;

int check(vector<int>&a, int n, int k, int to_make){
	
	int moves=0;

	for(int i=n/2;i<n;i++){
		if(to_make-a[i]>0) moves +=to_make-a[i];
		if(moves>k) return false;
	}

	return moves<=k;
}

void solve(){
	int n,k; cin>>n>>k;
	vector<int>a(n);

	for(int &i:a)cin>>i;

	srt(a);

	int lo=1;
	int hi=2e9;
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		int f= check(a, n, k, mid);

		if(f){
			ans=mid;
			lo=mid+1;
		}else hi=mid-1;
	}

	cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif

    solve();

	return 0;

}