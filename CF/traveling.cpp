/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int solve(){
	int n, k, a, b;
	cin>>n>>k>>a>>b;

	vector<pair<int, int>> arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i].first;
		cin>>arr[i].second;
	}

	int directDis = llabs(arr[a-1].first - arr[b-1].first) + llabs(arr[a-1].second - arr[b-1].second);

	int aTokDis=LLONG_MAX / 2, bTokDis=LLONG_MAX / 2;

	for(int i=0; i<k; i++){
		aTokDis = min(aTokDis, (llabs(arr[a-1].first - arr[i].first) + llabs(arr[a-1].second - arr[i].second)));
		bTokDis = min(bTokDis, (llabs(arr[b-1].first - arr[i].first) + llabs(arr[b-1].second - arr[i].second)));
	}

	return min(directDis, (aTokDis+bTokDis));
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