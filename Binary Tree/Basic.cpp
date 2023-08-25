/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int val){
		data=val;
		left=right=NULL;
	}

};

void solve(){

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	struct Node* root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	return 0;

}