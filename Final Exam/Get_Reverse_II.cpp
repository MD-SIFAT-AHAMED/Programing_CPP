// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//         string name;
//         int clss;
//         char s;
//         int id; 
// };
// bool cmp(Student a,Student b)
// {
//     return a.id < b.id;
// } 

// int main()
// {   
//     int n;
//     cin>>n;
//     Student ar[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i].name>>ar[i].clss>>ar[i].s>>ar[i].id;
          
//     }
//     sort(ar,ar+n,cmp);
//     for(int i=0;i<n;i++)
//     {
//         cout<<ar[i].name<<" "<<ar[i].clss<<" "<<ar[i].s<<" "<<ar[i].id<<endl;
//    }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
        string name;
        int clss;
        char s;
        int id; 
};

int main()
{
    int n;
    cin>>n;
    Student ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].name>>ar[i].clss>>ar[i].s>>ar[i].id;
        
    }
    for(int i=0,j=n-1;i<n,j>=0;j--,i++)
        {
            cout<<ar[i].name<<" "<<ar[i].clss<<" "<<ar[i].s<<" "<<ar[j].id<<endl;
        }
    return 0;
}

