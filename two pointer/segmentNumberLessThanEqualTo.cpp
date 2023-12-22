/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long


using namespace std;

int solve(){
	int n, s; cin>>n>>s;

	vector<int> arr(n);

	for(int i=0; i<n; i++) cin>>arr[i];

	int i=0, j=0, sum=0, cnt=0;

	while(j<n){
		sum+=arr[j];

		while(i<=j && sum>s){
			sum-=arr[i];
			i++;
		}

		cnt+=(j-i+1);

		j++;
	}

	return cnt;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

	cout<<solve();

	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}