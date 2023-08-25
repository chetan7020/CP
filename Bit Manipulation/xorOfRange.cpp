/*

Build | ..... | Peace


Note - Refer xorTillN

return xor(3-6)

getxor(3) = 0 xor getxor(6) = 7

(1^2^3) ^ (1^2^3^4^5^6) = 7

ans -> (4^5^6)

*/

#include<bits/stdc++.h>

using namespace std;

int xorTillN(int n){
	if(n%4==1) return 1;
	if(n%4==2) return (n+1);
	if(n%4==3) return 0;
	if(n%4==0) return n;
}

int xorOfRange(int l, int r){

	int ans = 0;

	ans = xorTillN(l)^xorTillN(r);

	return ans;
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int l,r ;
	cin>>l>>r;

	cout<<xorOfRange(l,r);

	return 0;

}