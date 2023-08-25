#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int roll;
        char name[100];
        char section;
        int cls;
    Student(int r,char s,int c,char*n)
    {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,n);
    }
};
Student fun()
{
    char name[100]="MD SIFAT AHAMED";
    Student sifat(100,'C',7,name);
    return sifat;
    ///jei vabe akhane value return korche take (rvo)-> Return value optimaistion
}
int main()
{
    Student sifat=fun();
    cout<<sifat.name<<endl;
    cout<<sifat.roll<<endl;
    cout<<sifat.cls<<endl;
    cout<<sifat.section<<endl;
    return 0;
}