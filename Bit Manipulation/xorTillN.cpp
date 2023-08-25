/*

Build | ..... | Peace


Brute Force - XOR of (1-n)

given n return xor till n in O(1)



solution - 

1 2 3 4
1 2 3 4 5


1 1 ---- if(n%4==1) return 1
2 3 ---- if(n%4==2) return (n+1)
3 0 ---- if(n%4==3) return 0
4 4 ---- if(n%4==0) return n
5 1
6 7
7 0
8 8

*/

#include<bits/stdc++.h>

using namespace std;

int xorTillN(int n){
	if(n%4==1) return 1;
	if(n%4==2) return (n+1);
	if(n%4==3) return 0;
	if(n%4==0) return n;
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int n;
	n=8;
	// cin>>n;

	int xorr=0;

	for(int i=1; i<=n; i++){
		cout<<i<<" "<<xorTillN(i)<<"\n";
	}

	return 0;

}