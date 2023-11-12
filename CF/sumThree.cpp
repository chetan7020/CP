/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

void solve(){
	int n; cin>>n;

	for(int i=1; i<=n; i++){
		
		if(i%3==0) continue;

		int j=i+1, k=n;

		while(j<k){
			if(j%3==0 || k%3==0){
				if(j%3==0) j++;
				if(k%3==0) k--;

				if(j>=k) break;
			}else{

				int sum=i;
				sum+=j;
				sum+=k;

				if(sum==n){
					cout<<"YES"<<endl;
					cout<<i<<" "<<j<<" "<<k;
					return;
				}else if(sum>n) k--;
				else j++;
			}
		}
	}

	cout<<"NO";
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