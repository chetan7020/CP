/*

Build | ..... | Peace

cpy mat kar bc

*/

#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define int long long
#define fore(i, a, b) for(int i = (a); i < (b); i++)
#define fori(i, a, b) for(int i = (a); i <= (b); i++)

using namespace std;

struct Node{

	int data;
	struct Node* left;
	struct Node* right;

	Node(int val){
		data= val;
		left= right= NULL;
	}

};

void solve(){
	struct Node* root= new Node(1);

	root->left= new Node(2);
	root->right= new Node(3);

}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D:\\CP\\Codes\\input.txt", "r", stdin);
    freopen("D:\\CP\\Codes\\output.txt", "w", stdout);
#endif

    solve();

	return 0;

}