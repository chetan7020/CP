/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int cnt(){

	int n,m;
	cin>>n>>m;

	string s;
	cin>>s;

	set<string> ans;

	while(m--){

		string temp=s;

		int i,j;
		cin>>i>>j;

		i--;
		j--;

		while(i<j){

			while(temp[i]!='1' && (i<j)) i++;
			while(temp[j]!='0' && (i<j)) j--;

			if(i>=j) break;

			if(temp[j]=='0'){
				swap(temp[j], temp[i]);
				i++;
				j--;
			}
		}

		ans.insert(temp);

	}

	return ans.size();
}

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	int t;
	cin>>t;

	while(t--){
		cout<<cnt()<<"\n";
	}

	return 0;

}