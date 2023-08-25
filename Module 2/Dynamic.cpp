#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *b=new int; //syntax 
    *b=100;
    cout<<b<<endl;//Address dekha jay
    cout<<*b<<endl;//Value dekha jay

    float *c=new float;
    *c=2.40;
    cout<<c<<endl;
    cout<<*c<<endl;
    return 0;
}