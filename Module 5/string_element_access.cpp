#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    cout<<a[0]<<endl;//use korbo aita
    cout<<a.at(0)<<endl;
    cout<<a.front()<<endl;

    cout<<a[a.size()-1]<<endl;
    cout<<a.back()<<endl;//use korbo aita
    return 0;
}