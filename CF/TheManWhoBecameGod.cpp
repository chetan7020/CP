/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int solve(){
	int n,k;
	cin>>n>>k;

	vector<int> vill, diff;
	int i=0;
	while(i<n){
		int ele;
		cin>>ele;
		vill.push_back(ele);
		i++;
	}

	i=1;
	while(i<n){
		diff.push_back(abs(vill[i]-vill[i-1]));
		i++;
	}

	sort(diff.begin(), diff.end());
	

	i=0;
	int ans=0;
	while(i<diff.size()-(k-1)){
		ans+=diff[i];
		i++;
	}

	return ans;



}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve();
		cout<<endl;
	}

	return 0;

}