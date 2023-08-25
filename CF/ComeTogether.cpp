/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int solve(){
	int xa,xb,xc,ya,yb,yc;

	cin>>xa>>ya>>xb>>yb>>xc>>yc;

	if( ((ya<yb)&&(ya<yc)) || ((ya>yb)&&(ya>yc)) || ((xa<xb)&&(xa<xc)) || ((xa>xb)&&(xa>xc)) ){
		if( ((ya<yb)&&(ya<yc)) || ((ya>yb)&&(ya>yc)) ){
			cout<<"Y ";
			return (1+min(abs(ya-yb), abs(ya-yc)));
		}
		if( ((xa<xb)&&(xa<xc)) || ((xa>xb)&&(xa>xc)) ){
			cout<<"X ";
			return (1+min(abs(xa-xb), abs(xa-xc)));
		}
	}

	return 1;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin>>t;

	while(t--){
		cout<<solve(); 
		cout<<endl;
	}

	return 0;

}