/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

bool check(vector<int> &arr, int pos, int k){
	return arr[pos]<=k;
}

void solve(){
	int n, m, x; cin>>n>>m>>x;

	vector<int> arr(n), arr2(m);

	for(int i=0; i<n; i++) cin>>arr[i];
	for(int i=0; i<m; i++) cin>>arr2[i];


	int i=0, j=m-1;

	if(((arr[n-1]+arr2[m-1])>x) && (arr[0]+arr2[0])>x){
		cout<<-1;
		return;
	}

	while(i<=(n-1) && j>=0){

		if((arr[i]+arr2[j]) <= x) i++;
		else j--;

		if((arr[i]+arr2[j] ==x)) {
			cout<<i<<" "<<j; 
			return;
		}
	}

	cout<<-1;


/*

x=2

i
1 2 3 4
1 2 3 4
	j
*/

/* map appraoch
	map<int, int> mp;

	for(int i=0; i<m; i++) mp[arr2[i]]++;

	for(auto i: mp){
		cout<<i.first<<" "<<i.second<<endl;
	}	

	for(int i=0; i<n; i++){
		if(mp[x -arr[i]]){
			cout<<arr[i]<<" "<<mp[x -arr[i]];
			return;
		}
	}
*/


/*	bs approach
	int lo=0;
	int hi=m-1;
	int ans=-1;

	for(int i=0; i<n; i++){
		int rem= x -arr[i];
		
		while(lo<=hi){
			int mid=lo+(hi-lo)/2;
		
			if(check(arr, mid, rem)){
				ans=mid;
				lo=mid+1;
			}else hi=mid-1;
		}

		if(ans!=-1 && (arr[i]+arr2[ans] ==x)) {
			cout<<i<<" "<<ans; 
			return;
		}

	}
*/

}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin>>t;

	while(t--){
		solve();
		cout<<endl;
	}

	return 0;

}