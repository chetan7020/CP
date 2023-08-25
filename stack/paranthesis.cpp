/*

Build | ..... | Peace

*/

#include<bits/stdc++.h>

using namespace std;

bool valid(string str){
	stack<char> stk;

	for(char i: str){
		if((i=='{') || (i=='(') || (i=='[')) stk.push(i);
		else{
			if(stk.empty()) return false;
			char para = stk.top();
			stk.pop();
			if( (i=='}') && (para!='{')) return false;
			if( (i==')') && (para!='(')) return false;
			if( (i==']') && (para!='[')) return false;
		}
	}

	if(stk.empty()) return true;
	return false; 
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin>>n;

	while(n--){
		string str;
		cin>>str;
		if(valid(str)){
			cout<<"VALID"<<endl;
		}else{
			cout<<"INVALID"<<endl;
		}
	}

	return 0;

}