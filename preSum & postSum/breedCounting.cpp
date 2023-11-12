/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

/*

1 2
2 1
3 1
4 3
5 2
6 1

0 : 0 1 2 3 4 5 6
    0 0 0 0 0 0 0 

1 : 0 1 2 3 4 5 6
    0 0 1 2 2 2 3

2 : 0 1 2 3 4 5 6
    0 1 1 1 1 2 2

3 : 0 1 2 3 4 5 6
    0 0 0 0 1 1 1
*/

using namespace std;

void solve(){
	int n, q; cin>>n>>q;

	vector<vector<int>> arr(4, vector<int>(n+1, 0));

	fori(i, 1, n){
		int id; cin>>id;

		arr[1][i]+=arr[1][i-1]+(id==1);
		arr[2][i]+=arr[2][i-1]+(id==2);
		arr[3][i]+=arr[3][i-1]+(id==3);
	}

	while(q--){
		int l, r; cin>>l>>r;

		cout<<arr[1][r]-arr[1][l-1]<<" ";
		cout<<arr[2][r]-arr[2][l-1]<<" ";
		cout<<arr[3][r]-arr[3][l-1]<<endl;
	}
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	return 0;

}