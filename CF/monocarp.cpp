
/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int cntLayer(){

	int b,c,h;
	cin>>b>>c>>h;

	if((c+h)<b){
		return (((c+h)*2)+1);
	}

	return (b+b-1);
}

int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	int t;
	cin>>t;

	while(t--){
		cout<<cntLayer()<<"\n";
	}

	return 0;

}