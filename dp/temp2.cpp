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
  // for(int i=0; i<n; i++){
  //   cout<<i<<" ";
  // }

  fori(i, 1, n) cout<<i<<" ";

  cout<<endl;

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
  //   cout<<solve()<<endl;
  // }

  return 0;

}