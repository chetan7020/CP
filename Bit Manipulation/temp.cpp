
/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

char next(char a){

    if(a=='z') return 'a';

    return (int) a+1;
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	cout<<next('x')<<endl;

	return 0;

}