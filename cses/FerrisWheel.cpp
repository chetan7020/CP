/*

Build | ..... | Peace


4 10
7 2 3 9

2 3 7 9

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
	int n, x; cin>>n>>x;
	vector<int>a(n);

	fore(i, 0, n) cin>>a[i];

	sort(a.begin(), a.end());

	int ans=0;

	int i=0, j=n-1;

	while(i<=j){
		if(a[i]+a[j]<=x){
			i++;
			j--;
		}else{
			j--;
		}

		ans++;
	}

	cout<<ans;

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}