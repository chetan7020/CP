/*

Build | ..... | Peace

cpy mat kar bc


find freq by mod k



there are 3 cases of freq cnt
1. freq == k-freq then pairs are possible
2. i%k=0 freq is even then pairs are possible
3. k/2 freq is even then pairs are possible


*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
	int n, k; cin>>n>>k;

	vector<int> a(n);
	map<int, int> freq;

	for(int i=0; i<n; i++){
		cin>>a[i];
		a[i]= abs(a[i]);
		freq[a[i]%k]++;
	}	

	for(auto i: freq) cout<<i.first<<" "<<i.second<<endl;

	bool flag= true;

	for(auto i: freq){
		if((i.first==0) || ((i.first==k/2) && k%2==0)){
			if(i.second%2!=0) {
				flag= false;
				// cout<<"Hello A";
			}
			
		}else{
			if(i.second!= freq[k-i.first]) {
				flag= false;
				// cout<<"Hello B";
			}
			
		}
	}

	if(flag) cout<<"true";
	else cout<<"false";

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}