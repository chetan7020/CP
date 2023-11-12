/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long


using namespace std;

int solve(){
	int n, m; cin>>n>>m;

	vector<int> arr(n), arr2(m);

	for(int i=0; i<n; i++) cin>>arr[i];
	for(int i=0; i<m; i++) cin>>arr2[i];

	int i=0, j=0, cnt=0;

	while(i<n && j<m){
		if(arr[i]>arr2[j]) j++;
		else if(arr[i]<arr2[j]) i++;
		else{
			int c=arr[i];

			int cnt1=0, cnt2=0;

			while(i<n && arr[i]==c){
				cnt1++;
				i++;
			}

			while(j<m && arr2[j]==c){
				cnt2++;
				j++;
			}

			cnt+=(cnt1*cnt2);
		}
	}

	return cnt;
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout<<solve();

	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}