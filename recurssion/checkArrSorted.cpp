/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

bool checkSorted(vector<int> &arr, int n, int i){
	if(i==n) return true;
	return ((arr[i]>=arr[i-1]) && (checkSorted(arr, n, i+1)));
}

void solve(){
	int n;
	cin>>n;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr[i]=ele;
	}

	if(n==1) cout<<"YES";
	else{	
		if(checkSorted(arr, n, 1)) cout<<"YES";
		else cout<<"NO";
	}
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	// cin>>t;
	t=1;
	while(t--){
		solve();

		cout<<endl;
	}

	return 0;

}