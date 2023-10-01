/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int int long long


using namespace std;

int solve(){
	int n, mini=INT_MAX, ans=1;
	cin>>n;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
		mini=min(mini, arr[i]);
	}

	for(int i=0; i<n; i++){
		if(mini==arr[i]){
			arr[i]+=1;
			break;
		}
	}

	for(int i=0; i<n; i++){
		ans*=arr[i];
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