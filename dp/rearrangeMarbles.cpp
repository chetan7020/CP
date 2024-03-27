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

int n1, n2, k1, k2;

int f(int taken_g, int taken_r, int con_g, int con_r){
    if(con_g>k1 || con_r>k2){
        return 0;
    }

    if(taken_g>n1 || taken_r>n2){
        return 0;
    }
    
    if(taken_g==n1 && taken_r==n2){
        return 1;
    }

    int ans=0;

    for(int i=1;i<=min(n1-taken_g, k1);i++){//take green
        ans+=f(taken_g+1, taken_r, con_g+1, con_r);
    }

    for(int i=1;i<=min(n2, k2);i++){//take red
        ans+=f(taken_g, taken_r+1, con_g, con_r+1);
    }

    return ans;

}


void solve(){

	cin>>n1>>n2>>k1>>k2;

    cout<<f(0, 0, 0, 0);

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