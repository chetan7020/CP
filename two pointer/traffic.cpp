/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int solve(){
	int n, m;
	cin>>n>>m;

	vector<int> arr(n);

	for(int i=0; i<n; i++) cin>>arr[i];

	int i=0, j=0, ans=INT_MIN, currZero=0;

	while(j<n){

		if(arr[j]==0) currZero++;

		while(currZero>m){
			if(arr[i]==0) currZero--;
			i++;
		}
		ans=max(ans, (j-i+1));
		j++;
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