// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//         char name[100];
//         int cls;
//         int roll;
//         char section;

//     Student(int c,char s,int r,char *n) //constructor
//     {
//         roll=r;
//         section=s;
//         cls=c;
//         strcpy(name,n);
//     }    
// };

// int main()
// {
//     Student karim(10,'C',37989,"MD KARIM AHAMED");
//     Student sifat(20,'B',459,"MD SIFAT AHAMED");

//     cout<<karim.roll<<endl;
//     cout<<karim.cls<<endl;
//     cout<<karim.section<<endl;
//     cout<<karim.name<<endl;
//     cout<<endl;
//     cout<<sifat.roll<<endl;
//     cout<<sifat.cls<<endl;
//     cout<<sifat.section<<endl;
//     cout<<sifat.name<<endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int roll;
        char name[100];
        char section;
        int cls;
    //constructor
    Student(int c,char s,int r,char*n)
    {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,n);

    }

};
int main()
{
    Student sifat(10,'C',568535,"MD SIFAT AHAMED");
    cout<<sifat.cls;
    return 0;
}