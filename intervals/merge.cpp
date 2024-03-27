/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>


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

int n;
vector<pair<int,int>>arr,ans;

void solve(){
	cin>>n;

	for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		arr.push_back({a,b});
	}

	sort(arr.begin(), arr.end());

	int st=arr[0].ff, ed=arr[0].ss;

	int i=1;

	for(;i<n;i++){
		if(arr[i].ff<=ed){
			st=min(st, arr[i].ff);
			ed=max(ed, arr[i].ss);
		}else{
			ans.push_back({st,ed});
			cout<<ed-st+1<<" ";
			st=arr[i].ff;
			ed=arr[i].ss;
		}
	}

	cout<<ed-st+1<<" "<<endl;

	ans.push_back({st,ed});

	for(auto i:ans) cout<<i.ff<<" "<<i.ss<<endl;

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	int t=1;
	// cin>>t;

	while(t--) solve();

	return 0;

}