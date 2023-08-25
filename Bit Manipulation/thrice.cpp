/*

Build | ..... | Peace

1 0 1 0
0 0 0 1
-------
1 0 1 1

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int arr[] = {1, 10, 1, 1};

	int ans = 0;

	for(auto i : arr){
		ans^=i;
	}

	cout<<ans;


	return 0;

}