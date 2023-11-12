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

void solve(){
	int n; cin>>n;
	vector<int> arr(n);
	fore(i, 0, n) cin>>arr[i];

    vector<int> arr2(n);
    vector<long long> ans(n), sum(n, 0);
    
    for(int i=0; i<n; i++) arr2[i]= arr[i];
    
    sort(arr2.begin(), arr2.end());

	for(int i: arr) cout<<i<<" ";

	cout<<endl;

	for(int i: arr2) cout<<i<<" ";

	cout<<endl;
    
    // sum[0]= 0LL;
    
    for(int i=1; i<n; i++){
        sum[i]= sum[i-1]+ (long long) arr2[i];
    }

    for(auto i: sum) cout<<i<<" ";

    cout<<endl;
    
    for(int i=0; i<n; i++){
        int k= arr[i], idx= 0, lo= 0, hi=n-1;
        
        while(lo<=hi){
            
            int m = lo+ (hi-lo)/2;
            
            if(arr2[m]<k){
                idx= m;
                lo= m+1;
            }else hi= m-1;
            
        }
        cout<<k<<" : "<<idx<<" "<<endl;
        // if(idx==-1) ans[i]= 0;
        // else ans[i]= sum[i];
        ans[i]= sum[idx];
    }
    
    
    for(auto i: ans) cout<<i<<" ";
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();
	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}