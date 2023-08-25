#include<bits/stdc++.h>
using namespace std; 
void fun(string& a)
{
    a="hi";
}
int main()
{
    string s="hello";
    fun(s);
    cout<<s<<endl;
    return 0;
}