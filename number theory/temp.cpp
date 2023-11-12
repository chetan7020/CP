/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long

using namespace std;

int rev(int x) {
  int reversedNumber = 0;
  while (x > 0) {
    int digit = x % 10;
    reversedNumber = reversedNumber * 10 + digit;
    x /= 10;
  }
  return reversedNumber;
}

int solve(){
    int n; cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    map<int, vector<int>> mp;
    
    for(int i=0; i<n; i++){
        mp[arr[i]-rev(arr[i])].push_back(i);
    }


    for(auto i: mp) cout<<i.first<<" ";

	cout<<endl;

    
    int cnt=0;
                                         
    for(int i=0; i<n; i++){
        int diff = arr[i] - rev(arr[i]);
        
        // if(mp[diff].size()>2) cnt++;

        cout<<diff<<" ";
    }
                                         
    return 0;
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout<<solve();


	// int t;
	// cin>>t;

	// while(t--){
	// 	cout<<solve()<<endl;
	// }

	return 0;

}