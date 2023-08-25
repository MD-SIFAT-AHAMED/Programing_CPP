#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream as(s);
    string word;
    as>>word;
    reverse(word.begin(),word.end());
    cout<<word;
    while(as>>word)
    {
        reverse(word.begin(),word.end());
        cout<<" "<<word;
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// void fun(stringstream & hel)
// {
//     string word;
//     hel>>word;
//     reverse(word.begin(),word.end());
//     cout<<word;
//     while(hel>>word)
//     {
//         reverse(word.begin(),word.end());
//         cout<<" "<<word;
//     }
// }
// int main()
// {
//     string s;
//     getline(cin,s);
//     stringstream as(s);
//     fun(as);
//     return 0;
// }