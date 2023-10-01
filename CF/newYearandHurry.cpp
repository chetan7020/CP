/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

bool check(int n, int k){
	int timeReqSolveProblem = (((n*(n+1))/2)*5);

	return (240>=(timeReqSolveProblem+k));
}

int solve(){
	int lo=1, hi, k, ans=;0

	cin>>hi>>k;

		while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		if(check(mid, k)){
			ans=mid;
			lo=mid+1;
		}else hi=mid-1;
	}

	return ans;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout<<solve();

	return 0;

}