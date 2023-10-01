/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long


using namespace std;

char calDiff(char a, char b){
	int d = abs(a-b);

	return min(d, 10-d);
}

int solve(){
	int curr=0, ans=INT_MAX, n, m;

	cin>>n>>m;

	string s, k;
	cin>>s>>k;

	for(int i=0; i<=n-m; i++){
		int d = 0;

		for(int j=0; j<m; j++){
			d += calDiff(s[i+j], k[j]);
		}

		ans = min(ans, d);
	}

	return ans;

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