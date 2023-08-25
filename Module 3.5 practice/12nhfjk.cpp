#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        char name[100];
        float height;
        int age;
    //constructor
    Person(float h,int a,char*n)
    {
        height=h;
        age=a;
        strcpy(name,n);
    }
    void printperson()
    {
        cout<<age<<endl;
        cout<<height<<endl;
        cout<<name<<endl;
    }

};
int main()
{ 
    char name[100]="MD SIFAT AHAMED";
    Person *sifat=new Person(189.34,24,name);
    sifat->printperson();
    delete[]sifat;
 
    return 0;
}