/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	queue<int> que;

	que.push(10);
	que.push(20);
	que.push(30);
	que.push(40);
	que.push(50);

	while(!que.empty()){
		cout<<que.front()<<" ";
		que.pop();
	}
	
	return 0;

}