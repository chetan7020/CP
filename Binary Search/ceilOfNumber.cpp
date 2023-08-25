/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

int solve(){
	int n, k;
	cin>>n>>k;
	// cout<<n<<" "<<k<<endl;

	vector<int> arr;

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		arr.pb(ele);
	}

	int i=0;
	int j=n-1;


	int m=i+(j-i)/2;

	while(i<j){ //this can be also solved with maintaining ans variable and storing min on it
		// cout<<arr[m]<<" ";
		if(arr[m]==k) return arr[m];
		else if(arr[m]<k) i=m+1;
		else{
			// cout<<m<<endl;
			// ans=min(ans, arr[m]);
			j=m;
		}
		// cout<<i<<" "<<m<<" "<<j<<endl;
		m=i+(j-i)/2;
	}

	return arr[m]; 
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve();
		cout<<endl;
	}

	return 0;

}