#include<bits/stdc++.h>

using namespace std;

struct node{
	node* child[26];
	int cnt;
	node(){
		cnt=0;
		for(int i=0;i<26;i++){
			child[i]=nullptr;
		}
	}
};

struct trie{
	node *root;

	trie(){
		root= new node();
	}

	void insert(string s){
		node *curr= root;

		for(int i=0;i<s.size();i++){
			char curr_char= s[i]-'a';

			if(curr->child[curr_char]==nullptr){
				curr->child[curr_char]= new node();
			}

			curr= curr->child[curr_char];

		}
	}
};


int main(){


	return 0;
}