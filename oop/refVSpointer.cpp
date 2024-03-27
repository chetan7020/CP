/*

Note : Symbol Table

| ----------------------- |
| var name | memo address |
| ----------------------- |
| a        |     x        |
| b        |     x        |
| c        |     y        |
| ----------------------- |

1. Memory Address
2. Re-assignment is not possible in references
3. cannt assign NULL value to referances
4. arithmetic operation indirection

--------------------------------------------

references are alias to existing objects (nav nahi change karu shakat)

*/

#include<bits/stdc++.h>

using namespace std;

int main(){

#ifndef ONLINE_JUDGE
    freopen("D://CP//Codes//input.txt", "r", stdin);
    freopen("D://CP//Codes//output.txt", "w", stdout);
#endif

    int a=10;
    int &b=a;
    int *c=&a;

    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<c<<endl;


	return 0;
}