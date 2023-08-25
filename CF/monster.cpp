/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

void monster(){
	int n,k;
	cin>>n>>k;

	vector<int> ans;
	map<int, vector<int>, greater<int>> mp;


	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		

		if(ele%k==0) ans.push_back(i+1);
		else mp[ele%k].push_back(i+1);
	}

	for(auto i: mp){

		for(auto j:i.second) ans.push_back(j);

	}

	for(auto i: ans){
		cout<<i<<" ";
	}

	cout<<"\n";

	
}

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	int t;
	cin>>t;

	while(t--){
		monster();
	}

	return 0;

}