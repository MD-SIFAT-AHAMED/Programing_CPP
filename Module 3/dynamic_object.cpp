#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int roll;
        char section;
        char name[100];
        int cls;

     Student(int r,int c,char s,char*n)
     {
        roll=r;
        section=s;
        cls=c;
        strcpy(name,n);
     }
};
int main()
{
    char name[100]="MD SIFAT AHAMED";
    Student* sifat=new Student(495,8,'B',name);

    //cout<<sifat.roll; /Error output

    // cout<<(*sifat).cls<<endl;
    // cout<<(*sifat).roll<<endl;
    // cout<<(*sifat).name<<endl;
    // cout<<(*sifat).section<<endl;

    cout<<sifat->cls<<endl;
    cout<<sifat->name<<endl;
    cout<<sifat->section<<endl;
    cout<<sifat->roll<<endl;

    return 0;
}