/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int getLength(char arr[]){
	int cnt=0;
	while(arr[cnt]!='\0'){
		cnt++;
	}

	return cnt;
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	char arr[10];

	cin>>arr;

	cout<<getLength(arr);

	return 0;

}