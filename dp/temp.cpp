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

void solve(){
    int n; cin>>n;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    int sm=a[0], ans=0;

    // for(int i=0; i<n;i++){
    int i=1, j=1;
    while(i<n){
        while(j<n && sm>=a[j]) j++;
        if(j>=n) break;
        swap(a[i], a[j]);
        sm+=a[i++];
    }

    sm=0;

    for(int i=0; i<n;i++){
        if(a[i]<=sm) ans++;
        sm+=a[i];
    }

    cout<<ans<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


    int t;
    cin>>t;

    // while(t--){
    //     cout<<solve()<<endl;
    // }
    while(t--) solve();

    return 0;

}