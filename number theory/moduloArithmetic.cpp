
/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>
#define int long long int

using namespace std;

const int MOD=5;

int addm(int a, int b){

	return (a+b)%MOD;

}

int subm(int a, int b){

	return ((a-b)%MOD+MOD)%MOD;

}

int mulm(int a, int b){

	return (a*b)%MOD;

}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	cout<<addm(5,8)<<endl;
	cout<<subm(5,8)<<endl;
	cout<<mulm(10e7,10e6)<<endl;


	int a=0;

	return a;
}