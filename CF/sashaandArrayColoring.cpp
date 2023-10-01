/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int solve(){
	int n, ans=0;
	cin>>n;

	vector<int> arr(n);

	for(int i=0; i<n; i++) cin>>arr[i];

	sort(arr.begin(), arr.end());

	int i=0;

	while(i<(n/2)){
		ans+=(arr[n-i-1]-arr[i]);

		i++;
	}

	return ans;
}

int main(){

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