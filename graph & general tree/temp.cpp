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

void solve(){

	int n; cin>>n;

	vector<int>a(n);

	for(int i=0;i<n;i++) cin>>a[i];

	int sm=0;

    while (n) {
        int m = (n/2);
        // cout<<n<<endl;

        if (n % 2 != 0) {
            sm+=a[m];
            // cout<<a[m]<<endl;
            a.erase(a.begin() + m);
        }
        else {

        	if(n==2){
        		cout<<a[m]<<" "<<a[m-1]<<endl;
        		cout<<((a[m] + a[m - 1]) / 2)<<endl;
        	}

        	// cout<<a[m]<<" "<<a[m-1]<<endl;

        	// cout<<((a[m] + a[m - 1]) / 2)<<endl;
		    sm += ((a[m] + a[m - 1]) / 2);
		    if (a[m] <= a[m - 1])a.erase(a.begin() + m);
		    else a.erase(a.begin() + (m - 1));
		}

        n--;

    }

	cout<<sm<<endl;
}

vector<int> adj[100100];

void bfs(int ver, int n){
	queue<pair<int,int>>q;
	
	vector<int>vis(n+1, 0), par(n+1, -1), dis(n+1, 1e9);

	q.push({ver, 0});
	vis[ver]=1;

	while(q.size()){
		auto curr = q.front();
		int node=curr.first;
		int lvl=curr.second;

		q.pop();

		for(int ch: adj[node]){
			if(vis[ch]==1) continue;

			dis[ch]=lvl+1;
			par[ch]=node;
			vis[ch]=1;
			q.push({ch, lvl+1});
		}
	}
}


void solve2(){
	int n; cin>>n;

	vector<int>freq(150, 0);

	for(int i=0;i<n;i++){
		char c; cin>>c;
		freq[c]++;
	}

	int m=-1, d=-1;

	for(int i='a';i<('a'+n);i++){
		if(freq[i]==0) m=i;
		if(freq[i]==2) d=i;
	}

	cout<<"["<<char(d)<<" "<<char(m)<<"]"<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


    // cout<<(-8)/2;

	int t=1;
	// cin>>t;

	while(t--) solve();

	return 0;

}