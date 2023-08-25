#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a>='0' && a<='9')
    {
        cout<<"IS DIGIT"<<endl;
    }
    else 
    {
        (a>='a' && a<='z') ? cout<<"ALPHA"<<endl<<"IS SMALL":cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    return 0;
}