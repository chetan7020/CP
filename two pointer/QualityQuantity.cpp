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

string solve(){
	int n; cin>>n;

	vector<int> a(n); 
	fore(i, 0, n) cin>>a[i];

	sort(a.begin(), a.end());

	for(int i: a) cout<<i<<" ";

	cout<<endl;

	int mid= ceil((1+n)/2);

	if(n%2==0) mid++;

	int i=0;

	int s1=0, s2=0;

	while(i<mid) s1+=a[i++];

	i=mid;

	while(i<n) s2+=a[i++];

	// cout<<s1<<" "<<s2<<endl;

	if(s1>=s2) return "NO";
	return "YES";
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve()<<endl;
	}

	return 0;

}