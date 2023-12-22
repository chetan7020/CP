/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

bool check(vector<int> &a, int n, int tankSize, int x){

	for(int i=0; i<n; i++){
		
		if(i){
			// cout<<tankSize<<" "<<i<<" "<<abs(a[i]-a[i-1])<<endl;
			
			// cout<<a[i]<<" "<<a[i-1]<<endl;

			if(abs(a[i]-a[i-1])>tankSize) return false;
		}else{
			if(a[i]>tankSize) return false;
		}
	}

	if((2*abs(x-a[n-1]))>tankSize) return false;

	return true;
}

int solve(){
	int n, x; cin>>n>>x;

	vector<int> a(n);

	for(int i=0; i<n; i++) cin>>a[i];

	int lo=0;
	int hi=x*2;
	int ans=-1;

	while(lo<=hi){
		int mid=lo+(hi-lo)/2;

		if(check(a, n, mid, x)){
			ans=mid;
			hi=mid-1;
		}else lo=mid+1;
	}

	return ans;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve()<<endl;
	}

	return 0;

}