/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int i,j,n,k;

	i=0;j=0;
	n=5;k=3;

	int a[] = {-2, -2, -2, -2, -2};

	vector<int> maxis;
	queue<int> seq;

	while(j<n){
		while(!seq.empty() && seq.front()<a[j]) seq.pop();

		seq.push(a[j]);

		if((j-i+1)==k){
			maxis.push_back(seq.front());
			if(seq.front()==a[i]) seq.pop();
			i++;
		}
		j++;
	}

	for(auto i: maxis) cout<<i<<" ";

	return 0;

}