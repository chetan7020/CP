/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

map<string, int> ptrn;

string solve(){
	vector<string> given;
	string temp;
	for(int i=0; i<3; i++){
		temp="";
		for(int i=0; i<3; i++){
			char ele;
			cin>>ele;
			// cout<<ele<<" ";
			temp+=ele;
		}
		// cout<<temp<<endl;
		given.push_back(temp);
	}

	// for(auto i:given) cout<<i<<endl;

	for(int i=0; i<3; i++){
		temp="";
		temp+=given[0][i];
		temp+=given[1][i];
		temp+=given[2][i];
		given.push_back(temp);
	}

	// for(auto i:given) cout<<i<<endl;

	temp="";
	temp+=given[0][0];
	temp+=given[1][1];
	temp+=given[2][2];
	given.push_back(temp);

	temp="";
	temp+=given[0][2];
	temp+=given[1][1];
	temp+=given[2][0];
	given.push_back(temp);

	for(auto i:given){
		if(ptrn.find(i)!=ptrn.end()) return i;
	}

	return "DRAW";

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ptrn["OOO"]=1;
	ptrn["XXX"]=1;
	ptrn["+++"]=1;

	int t;
	cin>>t;

	while(t--){
		string ans = solve();

		if(ans!="DRAW") cout<<ans[0];
		else cout<<ans;

		cout<<endl;
		// solve();
	}

	return 0;

}