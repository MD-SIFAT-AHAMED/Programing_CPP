// #include<bits/stdc++.h>
// using namespace std;
// class Student
// { 
//     public:
//         char name[100];
//         int roll;
//         int cls;
//         char section;
// };

// int main()
// {
//     Student sifat;
//     sifat.cls=10;
//     sifat.roll=5685236;
//     sifat.section='B';
//     char nm[100]="MD SIFAT AHAMED";
//     strcpy(sifat.name,nm);

//     Student sakib;
//     sakib.roll=379405;
//     char nm1[100]="KAZI SHAKIB AHAMED";
//     strcpy(sakib.name,nm1);
//     sakib.cls=10;

//     cout<<sakib.name;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
class bike
{
    public:
        char name[100];
        int speed;
        char model;
};


int main()
{
    bike r15;
    r15.speed=150;
    r15.model='c';
    char nm[100]="palser";
    strcpy(r15.name,nm);
    cout<<r15.speed;
    return 0;
}