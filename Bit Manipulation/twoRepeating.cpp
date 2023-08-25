/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	// int n;
	// cin>>n;

	// cout<<n;

	int a[] = {1,2,3,4,5,1,2,3};


	int xori=0;

	for(auto i: a){
		xori=xori^i;
	}

	int cnt=0;

	while(xori){
		if(xori&1) break;
		cnt++;
		xori=xori>>1;
	}

	int xori1=0, xori2=0;

	for(auto i:a){
		if(i&(1<<cnt)) xori1^=i;
		else xori2^=i;
	}

	cout<<xori1<<" "<<xori2;

	// map<int, int> freq;

	// for(auto i: a){
	// 	freq[i]++;
	// }

	// for(auto i: freq){
	// 	cout<<i.second<<endl;
	// }

	return 0;

}