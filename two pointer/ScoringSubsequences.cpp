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

#define direc_4 vector<pair<int,int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}
#define direc_8 vector<pair<int,int>> {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}}

#define SEIVE(n, sv) \
    sv[0] = sv[1] = 0; \
    for (int i = 2; i <= n; i++) { \
        if (sv[i] == 0) continue; \
        for (int j = i * i; j <= n; j += i) { \
            sv[j] = 0; \
        } \
    }

//----------------------- MACRO END ---------------------------

using namespace std;

void solve()
{
      int n,k;
      cin>>n>>k;
      vector<int> v(2*n);
      map<int,int> f1;
      map<int,int> f2;

      for(int i=0;i<2*n;i++){
        cin>>v[i];
        if(i<n){
            f1[v[i]]++;
        }
        else{
            f2[v[i]]++;
        }

      }

      vector<int> l;
      vector<int> r;

      for(auto x:f1){
        if(f2.find(x.first)!=f2.end() and l.size()<2*k){
            l.pb(x.first);
            r.pb(x.first);
        }
      }
      

      for(auto x:f1){
        if(l.size()<2*k and x.second==2){
            l.pb(x.first);
            l.pb(x.first);
        }
      }

      for(auto x:f2){
        if(r.size()<2*k and x.second==2){
            r.pb(x.first);
            r.pb(x.first);
        }
      }

      for(int i=0;i<l.size();i++){
        cout<<l[i]<<" ";
      }
      cout<<endl;
       for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
      }
      cout<<endl;
        
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