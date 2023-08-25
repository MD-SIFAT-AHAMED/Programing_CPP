#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    while(s.find("hello")!=-1)
    {
        s.replace(s.find("hello"),5," ");
    }
    cout<<s<<endl;
    return 0;
}