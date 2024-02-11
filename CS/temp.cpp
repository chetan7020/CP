/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>


//----------------------- MACRO START ---------------------------

#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long

#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

#define sum(a) accumulate(a.begin(), a.end(), 0LL)
#define srt(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define maxi(a) *max_element(a.begin(), a.end())
#define mini(a) *min_element(a.begin(), a.end())

#define direc_4 vector<vector<int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}
#define direc_8 vector<vector<int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}}

//----------------------- MACRO END ---------------------------

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> p(n);
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    int mini=a[0];
    p[0]=mini;
    int cnt=0, temp=0;
    int index=0;
    for(int i=0; i<n; i++){
      if(a[i]<=mini){
          mini=a[i];
          index=i;
      }
      if(a[i]>0){
          cnt++;
      }
      if(i>0){
          p[i]=min(p[i-1], a[i]);
      }
    }

    int ans=cnt;
    for(int i=index; i>=0; i--){
      if(a[i]==p[i] && a[i]>0){
          temp++;
          ans=min(ans, cnt-temp+a[i]);
      }
    }
    cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


    int t;
    cin>>t;

    while(t--) solve();

    return 0;

}