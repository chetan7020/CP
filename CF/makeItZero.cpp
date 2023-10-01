/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

void solve(){
	int n;
	cin>>n;

	vector<int> arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	if(n%2){
		cout<<4<<endl;
		cout<<1<<" "<<n-1<<endl;
		cout<<1<<" "<<n-1<<endl;
		cout<<n-1<<" "<<n<<endl;
		cout<<n-1<<" "<<n<<endl;
	}else{
		cout<<2<<endl;
		cout<<1<<" "<<n<<endl;
		cout<<1<<" "<<n<<endl;
	}
}

int main(){

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