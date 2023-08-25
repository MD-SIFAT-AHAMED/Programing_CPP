#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream as(s);
    // stringstream as;
    // as<<s;
    string word;
    int count=0;
    while(as >> word)
    {
        count++;
    }
    cout<<count<<endl;
    return 0;
}