#include<bits/stdc++.h>
using namespace std;
void sifat(stringstream & ss)
{
    string word;
    if(ss>>word)
    {
        sifat(ss);
        cout<<word<<endl;
    }

}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    sifat(ss);
    return 0;
}