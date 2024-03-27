#include<bits/stdc++.h>

using namespace std;

class node{
public:
	char data;
	map<char, node*>ch;
	int terminal;
	int cnt;
	string s;

	node(){
		terminal=0;
		cnt=0;
	}

	node(char d){
		cnt=0;
		data= d;
		terminal=0;
		s="";
	}
};

class trie{
public:
	node* root;

	trie(){
		root= new node();
	}

	void insert(string w){
		node* temp=root;
		for(int i=0; i<w.size(); i++){// traversing into word
			char curr= w[i];

			if(temp->ch.find(curr)!=temp->ch.end()){ //while traversing a word we 
				//are at particular character and here 
				//checking that there already exists node 
				
				temp= temp->ch[curr]; //go to its childeren
			
			}else{ // node with char c do not exists in trie 
				//so create new one add it as chilren and go there

				node* new_node= new node(curr);
				temp->ch[curr]= new_node;
				temp=new_node;
			}
			temp->cnt++;
		}
		temp->s=w;
		temp->terminal=1; // this is leaf node of word
	}


	string find(string w){
		node* temp= root;

		for(int i=0;i<w.size();i++){
			char curr= w[i];

			if(temp->cnt==1)break;

			if(temp->ch.find(curr)!=temp->ch.end()){
				temp= temp->ch[curr];
			}else{
				return 0;
			}
		}

		if(temp->cnt==1)

		// return (temp->terminal==1);
	}


};


void solve(){
	int n; cin>>n;
	vector<string>s(n);

	for(auto &i:s)cin>>i;

	string to_find; cin>>to_find;

	trie t;

	for(auto i:s){
		t.insert(i);
	}


	cout<<t.find(to_find);

	// for(auto i:s){
	// 	cout<<t.find(i);
	// }

	cout<<endl;
}

signed main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif

	solve();

	return 0;

}