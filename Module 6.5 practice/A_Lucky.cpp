#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        string a;
        cin>>a;
    int sum1=0,sum2=0;
    for(int i=0;i<3;i++)
    {
        sum1+=a[i]-48;
    }
    for(int i=3;i<6;i++)
    {
        sum2+=a[i]-48;
    }
    if(sum1==sum2)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}