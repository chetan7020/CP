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

/*
7 2
11 11 12 13 13 14 14

11 11 - 0

13 13 - 0

14 14 - 0

13 14 - 1

11 13 14

(r-l)

*/

void solve(){
	int n, k; cin>>n>>k;

	vector<int>a(n);

	map<int,int>mp;

	vector<int>freqGreaterThanK;

	for(int &i:a){
		cin>>i;
		mp[i]++;
	}

	for(auto i:mp){
		if(i.ss>=k){
			freqGreaterThanK.pb(i.ff);
		}
	}

	if(freqGreaterThanK.size()==0){
		cout<<-1<<endl;
		return;
	}
	
	srt(freqGreaterThanK);

	int al=0, ar=0;

	int diff=-1;

	int l=0;

	for(int r=1;r<freqGreaterThanK.size();r++){
		if(freqGreaterThanK[r]-1==freqGreaterThanK[r-1]){
			if(freqGreaterThanK[r]-freqGreaterThanK[l]>diff){
				diff=(freqGreaterThanK[r]-freqGreaterThanK[l]);
				al=l;
				ar=r;
			}
		}else{
			l=r;
		}
	}


	cout<<freqGreaterThanK[al]<<" "<<freqGreaterThanK[ar]<<endl;
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