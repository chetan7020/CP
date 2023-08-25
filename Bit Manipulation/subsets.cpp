/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int a[] = {1,2,3};

	int n=3;

	vector<vector<int>> ans;

	for(int i=0; i<(1<<n); i++){
		vector<int> temp;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                temp.push_back(a[j]);
            }
        }
		ans.push_back(temp);
	}

	for(auto i: ans){
		for(auto j:i){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	return 0;

}