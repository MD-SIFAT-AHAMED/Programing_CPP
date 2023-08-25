// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i];
//     }
//     int flag=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n-1;j>i;j--)
//         {
//             if(ar[i] != ar[j])
//             {
//                 flag=1;
//                 break;
//             }
            
//         }
//     }
//     (flag==0)?cout<<"YES":cout<<"NO";
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i];
//     }
//     int flag=0;
//     int i=0,j=n-1;
//     while(i<j)
//     {
//         if(ar[i]!=ar[j])
//         {
//             flag=1;
//             break;
//         }
//         i++;
//         j--;
//     }
//     (flag==0)?cout<<"YES":cout<<"NO";
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
     // dynamically allocating an integer memory block
    int* ptr = new int;

    // storing a value at the memory pointed by ptr
    *ptr = 12;

    cout << "Value at memory pointed by ptr= " << *ptr;

    return 0;
}