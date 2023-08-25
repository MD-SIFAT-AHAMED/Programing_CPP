// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int count[26]={0};
//     for(int i=0;i<n;i++)
//     {
//         char ch;
//         cin>>ch;
//         count[ch-'a']++;
//     }
//     for(char i='a';i<='z';i++)
//     {
//         if(count[i-'a']>0)
//         {
//             for(int j=0;j<count[i-'a'];j++)
//             {
//                 cout<<i;
//             }
//         }
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count[26]={0};
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        count[ch-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        if(count[i-'a']>0)
        {
            for(int j=0;j<count[i-'a'];j++)
            {
                cout<<i;
            }
        }
    }
    return 0;
}