// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string a;
//     //string :: iterator it;// ar jonno auto use kora jay verion 11 ar por theke
//     cin>>a;
//     for(auto it=a.begin();it<a.end();it++)
//     {
//         cout<<*it<<endl;
//     }
//     // for(int i=0;i<a.size();i++)
//     // {
//     //     cout<<a[i]<<endl;
//     // }
//     // cout<<*a.begin()<<endl;
//     // cout<<*(a.end()-1)<<endl;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        float height;
        int age;
    //constructor
    Person (float h,int a,char*n)
    {
        height=h;
        age=a;
        strcpy(name,n);
    }
 

};
int main()
{ 
    char name[100]="MD SIFAT AHAMED";
    Person *sifat=new Person(189.34,24,name);
    
    cout<<sifat->age<<endl;
    cout<<sifat->height<<endl;
    cout<<sifat->name<<endl;
    delete[]sifat;
 
    return 0;
}
