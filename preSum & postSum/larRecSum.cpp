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

void f(int n, int m, vector<vector<int>> &a){

	vector<vector<int>> pre(n, vector<int>(m, 0));

	int mxArea=-1;
	int r, c, re, ce;

	for(int i=0; i<m; i++){ //fix col start
		for(int j=i; j<m; j++){ //fix col end

			map<int, int> mp;
			mp[0]=-1;

			int sm=0;

			for(int k=0; k<n; k++){
				if(i){
					sm+=pre[k][j]-pre[k][i-1];
				}else{
					sm+=pre[k][j];
				}

				if(mp.find(sm)!=mp.end()){
					// cout<<i<<" "<<j<<" "<<k<<endl;
					int area= (k-mp[sm])*(j-i+1);
					if(area>mxArea){ //update mxArea and co-ordinates
						mxArea=area;

						r=mp[sm]+1; //row start
						re=k; //row end

						c=i; //col start
						ce=j; //col end
					}
				}else mp[sm]=k;
				
			}

		}
	}

	cout<<"row start : "<<r<<", row end : "<<re<<", col start : "<<c<<", col end : "<<ce<<endl;

	vector<vector<int>> ans;

	for(int i=r; i<=re; i++){
		vector<int> temp;

	for(int i=0;i<n; i++){ //cal inplace prefix sum of matrix
		for(int j=0;j<m; j++){
			// cin>>a[i][j];
			if(j){
				pre[i][j]=(pre[i][j-1]+a[i][j]);
			}else pre[i][j]= a[i][j];
		}
	}
		for(int j=c; j<=ce; j++){
			temp.push_back(a[i][j]);
		}
		ans.push_back(temp);
	}

	for(auto i: ans){
		for(int j: i) cout<<j<<" ";
		cout<<endl;
	}
}

void solve(){
	int n, m; cin>>n>>m;

	vector<vector<int>> a(n, vector<int>(m, 0));

	for(int i=0;i<n; i++){
		for(int j=0;j<m; j++){
			cin>>a[i][j];
		}
	}

	f(n, m, a);
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}