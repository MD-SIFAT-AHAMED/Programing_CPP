#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    int *a=new int[5];
    //int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{
    int * b=fun();
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    ///Array delete
    delete[]b;
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    //Code
    return 0;
}