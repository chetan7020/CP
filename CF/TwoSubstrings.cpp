/*

Build | ..... | Peace

cpy mat kar bc

https://codeforces.com/problemset/problem/550/A

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

void solve(){
	string s; cin>>s;

	int n=s.size();

	vector<int>vis(n+1, 0), vis2(n+1, 0);

	int flag=0, flag2=0;

	int i;

	for(i=1;i<n;i++){
		if(s[i-1]=='A' && s[i]=='B'){
			vis[i]=1;
			vis[i-1]=1;
			flag++;
			break;
		}
	}

	for(i=1;i<n;i++){
		if(vis[i-1]==1 || vis[i]==1)continue;
		if(s[i-1]=='B' && s[i]=='A'){
			flag++;
			break;
		}
	}

	for(i=n-1;i>0;i--){
		if(s[i-1]=='A' && s[i]=='B'){
			vis2[i]=1;
			vis2[i-1]=1;
			flag2++;
			break;
		}
	}

	for(i=1;i<n;i++){
		if(vis2[i-1]==1 || vis2[i]==1)continue;
		if(s[i-1]=='B' && s[i]=='A'){
			flag2++;
			break;
		}
	}

	string ans="NO";

	if(flag==2 || flag2==2){
		ans="YES";
	}

	cout<<ans<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	solve();

	return 0;

}