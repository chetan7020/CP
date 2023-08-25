/*

Build | ..... | Peace


Stores all values in sorted order

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	map<int, int> freq;

	int n;
	cin>>n;

	for(int i=0; i<n; i++){
		int ele;
		cin>>ele;
		freq[ele]++;
	}

	for(auto i : freq){
		cout<<i.first<<" "<<i.second<<endl;
	}

	return 0;

}