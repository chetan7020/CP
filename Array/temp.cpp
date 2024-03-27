#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;

    string p="";
    string w="";
    int i=0;
    for(;i<n-3;i++)
    {
        if((s[i]=='b'||s[i]=='c'||s[i]=='d')&&(s[i+1]=='a'||s[i+1]=='e')&&(s[i+2]=='b'||s[i+2]=='c'||s[i+2]=='d')&&(s[i+3]=='b'||s[i+3]=='c'||s[i+3]=='d'))
        {
            w=w+s[i]+s[i+1]+s[i+2]+'.';
            i=i+2;
        }
        else
        {
            w=w+s[i]+s[i+1]+'.';
            i=i+1;
        }
    }
    while(i!=n)
    {
        w=w+s[i];
        i++;
    }
    cout<<w<<endl;
    return 0ll;
}
signed main()
{

    ll t;
    cin >> t;
    while (t--)
    solve();
    return 0;
}