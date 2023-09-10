/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = INT_MAX;

    for(int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;

        ans = min(ans, (((2*a)+b-1)/2));
    }

    cout<<ans;
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