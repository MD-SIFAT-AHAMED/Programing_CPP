#include<bits/stdc++.h>
using namespace std;
namespace sifat
{
    int v=14890;
    void hello()
    {
        cout<<"hi"<<endl;
    }
}
namespace lucky
{
    void p2()
    {
        int v1=1000;
    }
    void hello2()
    {
        cout<<"hey man"<<endl;
    }
}
using namespace sifat;
int main()
{
    cout<<v<<endl;
    hello();
    lucky::hello2();
    lucky::p2();
    return 0;
}