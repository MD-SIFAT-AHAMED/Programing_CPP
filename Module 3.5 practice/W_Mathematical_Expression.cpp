#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    long long int sum=0;
   if(s=='+')
   {
        if(a+b==c)
        {
            cout<<"Yes";
        }
        else 
        {
            sum=a+b;
            cout<<sum;
        }
   }
   
   else if(s=='-')
   {
        if (a-b==c)
        {
            cout<<"Yes";
        }
        else 
        {
            sum=a-b;
            cout<<sum;
        }
   }
   else if(s=='*')
   {
        if(a*b==c)
        {
            cout<<"Yes";
        }
        else 
        {
            sum=a*b;
            cout<<sum;
        }
   }
 
    return 0;
}