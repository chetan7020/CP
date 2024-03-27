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

//----------------------- MACRO END ---------------------------

using namespace std;

int n, k;
vector<int>a;

int solve(){

	// cin>>n>>k;

	// a.resize(n);

	// for(int &i:a) cin>>i;

	sort(a.begin(), a.end());

	int cnt=0, mx=0;

	for(int i=0;i<n;i++){
		if(i){
			if(a[i]-a[i-1]>k) cnt=1;
			else cnt++;
		}else cnt++;

		mx=max(mx, cnt);
	}

	return (n-mx);
}

void s2(){
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    default_random_engine e(seed);

	cin>>n>>k;

	for(int i=1;i<=n;i+=9) a.push_back(i);

	n+=400;

	for(int i=1;i<=n;i+=11) a.push_back(i);

	n= a.size();

	shuffle(a.begin(), a.end(), e);

	cout<<n<<" "<<k<<endl;

	for(int i:a)cout<<i<<" ";

	cout<<endl;

	cout<<solve()<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif


	int t=1;
	// cin>>t;

	// while(t--) cout<<solve()<<endl;
	while(t--) s2();

	return 0;

}