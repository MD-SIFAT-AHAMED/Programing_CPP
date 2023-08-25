#include<iostream>
#include<algorithm>
using namespace std;
// int my_fun(int a,int b)
// {
//     if(a>b) return a;
//     else return b;
// }
// int my_funta(int a,int b)
// {
//     if(a<b) return a;
//     else return b;
// }

int main()
{
    int a,b;
    cin>>a>>b;
    // int mx=my_fun(a,b);
    // int mn=my_funta(a,b);
    // cout<<"Maximun Value ->"<<mx<<endl<<"Minimum Value ->"<<mn<<endl;
    
    int mx=max(a,b);
    int mn=min(a,b);
    cout<<"Maximun Value -> "<<mx<<endl<<"Minimum Value -> "<<mn<<endl;
    return 0;
}