/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;

string solve(){
	int n, m;
	cin>>n>>m;

	vector<vector<char>> arr(n, vector<char>(m));

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}

	string toCheck = "vika";
	int index=0;

	for(int j=0; j<m; j++){
		bool check =false;
		for(int i=0; i<n; i++){
			if(arr[i][j]==toCheck[index]){
				index++;
				break;
			}
		}
		if(index==4) return "YES";
	}

	return "No";
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin>>t;

	while(t--){
		cout<<solve()<<endl;
	}

	return 0;

}