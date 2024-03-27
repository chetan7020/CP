#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

#define ff first
#define ss second
// #define int long long
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define mpii map<int,int>

void sb(vector<int>& a) {
    int n=a.size();

    vector<pair<int,int>>arr;

    for(auto i:a)arr.push_back({__builtin_popcount(i), i});

    sort(arr.begin(), arr.end());

    for(int i=0;i<n;i++) a[i]= arr[i].second;
}

void prt(vector<int>&a){
	for(int i:a)cout<<i<<" ";
}

// void solve(){
// 	int n; cin>>n;
// 	vector<int>a;

// 	int cnt=0;

// 	for(int i=0;i<n;i++){
// 		int e; cin>>e;
// 		a.push_back(e);
// 	}

// 	sortByBits(a);

// 	for(int i:a)cout<<i<<" ";

// 	cout<<endl;

// }

// void generate(){

// }

void solve2(){
	// cout<<'[';
	for(int i=0;i<1000;i++) cout<<30<<' ';
	// for(int i=0;i<100;i++) cout<<20<<',';
	// for(int i=0;i<100;i++) cout<<30<<',';
	// int x=14;
	// for(int i=0;i<100;i++) cout<<x<<" ", x+=3;
}

void solve(){

	// cout<<"HW"<<endl;

	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    default_random_engine e(seed);

	int n; cin>>n;

	vector<int>a(n);

	for(int &i:a)cin>>i;

	shuffle(a.begin(), a.end(), e);

	cout<<a.size()<<endl;

	for(int i:a)cout<<i<<" ";

	cout<<endl;

	sb(a);

	for(int i:a)cout<<i<<" ";

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