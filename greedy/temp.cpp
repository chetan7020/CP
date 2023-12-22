/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define int long long
#define srt(a) sort(a.begin(), a.end())
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
	int n, m; cin>>n>>m;

	vector<int>a(n);

	fore(i,0,n) cin>>a[i];

	srt(a);

	int k=a[n-1];

	vector<int> req(n);

	int ttl=0;

	for(int i=0; i<n; i++) req[i]= k-a[i], ttl+=req[i];

	cout<<max(req[0], ((ttl+m-1)/m))<<endl;
	
}



// void solve(){
// 	int n; cin>>n;

// 	vector<int>a(n);

// 	bool flag=false;

// 	fore(i,0,n){
// 		cin>>a[i];
// 	}

// 	if(n==4){
// 		if(a[0]+a[1]==a[2]+a[3]) cout<<"NO";
// 		else cout<<"YES";
// 	}else{

// 		int k=a[0];
// 		fore(i,1,n){
// 			if(a[i]!=k){
// 				flag=true;
// 				break;
// 			}
// 		}

// 		if(flag) cout<<"YES";
// 		else cout<<"NO";

// 	}

// 	cout<<endl;
// }


signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    int t; cin>>t;
    while(t--)
    solve();

	return 0;

}