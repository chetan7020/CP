/*

swap without using third variable

*/



/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int a,b;

	cin>>a>>b;

	a=a^b;
	b=a^b;
	a=a^b;

	cout<<a<<" "<<b;

	return 0;

}