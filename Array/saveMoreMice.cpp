/*

Build | ..... | Peace

*/


#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back

using namespace std;


int unaffectedChar(string dataStream){
	
	int answer=0;

	int i=0, j=dataStream.size()-1;

	while(i<=j){
		if(dataStream[i]==dataStream[j]) answer++;
		i++;
		j--;
	}

	return (answer*2);
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout<<unaffectedChar("alphxxdida");

	return 0;

}