#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int *b=new int[7];
    for(int i=0;i<7;i++)
    {
        b[i]=a[i];
    }
    b[5]=70;
    b[6]=80;
    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    //Delete a Array
    delete[]a;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}