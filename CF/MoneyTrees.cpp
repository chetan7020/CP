/*

Build | ..... | Peace


*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

int solve(){
	int n, k, ans=0; cin>>n>>k;
	vector<int> a(n), h(n), v(n);
	fore(i, 0, n) cin>>a[i];
	fore(i, 0, n) cin>>h[i];

	fore(i, 1, n) a[i]+=a[i-1];

	for(int i=(n-1); i>=0; i--){ //calculate valid subarray range this is the new trick which I have learned today
		if(i==(n-1)) v[i]=1; //which is create new array iterate from last and check if condition is satisfied or not
		else{               // and store values to new array accordingly
			if(h[i]%h[i+1]==0) v[i]= v[i+1]+1;
			else v[i]=1;
		}
	}

	for(int i=0; i<n; i++){
		int lo=i;
		int hi=i+v[i]-1;
		int currAns=0;
		
		while(lo<=hi){
			int mid=lo+(hi-lo)/2;
		
			if((i-1)==-1){
				if(a[mid]<=k){
					currAns=mid-i+1;
					lo=mid+1;
				}else hi=mid-1;
			}else{
				if(a[mid]-a[i-1]<=k){
					currAns=mid-i+1;
					lo=mid+1;
				}else hi=mid-1;
			}
			ans = max(ans, currAns);
		}
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