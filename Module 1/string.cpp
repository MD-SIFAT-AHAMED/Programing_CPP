#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    // cin>>s; // space porjnto
    cin.getline(s,100);
    cout<<s<<endl;
    cout<<strlen(s);
    return 0;
}