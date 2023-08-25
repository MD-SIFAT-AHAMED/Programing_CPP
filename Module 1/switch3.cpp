#include<iostream>
using namespace std;
int main()
{
    int b;
    cin>>b;
    switch(b%2)
    {
        case 0:
            cout<<"Even"<<endl;
            break;
        case 1:
            cout<<"odd"<<endl;
            break;
        // default:
        //     cout<<"Odd"<<endl;

    }
    return 0;
}
