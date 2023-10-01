/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

bool solve(){

	int n, x;

	cin>>n>>x;

	vector<int> arr(n);

	for(int i=0; i<n; i++) cin>>arr[i];

	sort(arr.begin(), arr.end());

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
		    int lo=j+1, hi=n-1, rem=x-(arr[i]+arr[j]), ans=-1;
		    
		    while(lo<=hi){  
		        int mid = lo+(hi-lo)/2;
		        
		        if(arr[mid]<=rem){
		            ans=mid;
		            lo=mid+1;
		        }else hi=mid-1;
		    }
		    
	        if(ans!=-1 && (arr[i]+arr[j]+arr[ans])==x) return true;
		}

	}

	return false;
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