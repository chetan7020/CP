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

//7 3

using namespace std;

int n, m;

int check(int x, vector<int>freq){
	int free=0, need=0;

	for(int i=1; i<=n;i++){
		if(x>=freq[i]){
			free+=((x-freq[i])/2);
		}else{
			need+=(freq[i]-x);
		}
	}

	return need<=free;
}

void solve(){
	cin>>n>>m;

	vector<int>freq(n+1, 0);

	for(int i=0;i<m;i++){
		int task; cin>>task;
		freq[task]++;
	}

	// for(auto i:freq) cout<<i.ff<<" "<<i.ss<<endl;

	// for(int i=1;i<=n;i++){
	// 	cout<<i<<" "<<freq[i]<<endl;
	// }

	int lo=1;
	int hi=2*m;
	int ans=-1;
	
	while(lo<=hi){
		int mid=lo+(hi-lo)/2;
	
		// cout<<mid<<endl;

		if(check(mid, freq)==1){
			ans=mid;
			hi=mid-1;
		}else lo=mid+1; 
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