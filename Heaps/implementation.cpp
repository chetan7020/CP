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

	//higher the value higher the priority
	priority_queue<int> pq;

	//lower the value lower the priority
	priority_queue<int, vector<int>, greater<int>> pq1;

	for(int i=0; i<n; i++){
		int ele; cin>>ele;
		pq.push(ele);
		pq1.push(ele);
	}

	while(pq.size()>0){
		cout<<pq.top()<<" ";
		pq.pop();
	}

	cout<<endl;

	while(pq1.size()>0){
		cout<<pq1.top()<<" ";
		pq1.pop();
	}
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}