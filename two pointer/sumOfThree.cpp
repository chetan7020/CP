/*

Build | ..... | Peace

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
	vector<pair<int, int>> a(n);

	fore(i, 0, n){
		a[i].first=i;
		cin>>a[i].second;
	}

	sort(a.begin(), a.end(), [](auto &left, auto &right) {
    	return left.second < right.second;
	});

	bool flag=true;

	for(int i=0; i<n-2; i++){
		int j=i+1, k=n-1;

		while(j<k){
			if(a[i].second+a[j].second+a[k].second==x){
				cout<<a[i].first+1<<" "<<a[j].first+1<<" "<<a[k].first+1;
				flag=false;
				break;
			}
			else if(a[i].second+a[j].second+a[k].second>x) k--;
			else j++;
		}

		if(!flag){
			break;
		}
	}

	if(flag) cout<<"IMPOSSIBLE";
}

signed main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	return 0;

}