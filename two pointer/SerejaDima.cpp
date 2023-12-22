/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

void solve(){
	int n; cin>>n;

	vector<int> a(n);
	fore(i, 0, n) cin>>a[i];

	int i=0, j=n-1, cnt=1, s1=0, s2=0;

	while(i<=j){
		if(cnt%2){
			if(a[i]>=a[j]){
				s1+=a[i++];
			}else s1+=a[j--];
		}else{
			if(a[i]>=a[j]){
				s2+=a[i++];
			}else s2+=a[j--];
		}

		cnt++;
	}

	cout<<s1<<" "<<s2;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}