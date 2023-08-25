#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int mark1;
        int mark2;

    //Constructor
    Person(string nm,int ag,int m1,int m2)
    {
        name=nm;
        age=ag;
        mark1=m1;
        mark2=m2;
    }
    //class 1
    void hello()
    {
        cout<<name<<" "<<age<<" "<<mark1<<endl;
    }
    //class 2
    int hel()
    {
        return mark1+mark2;
    }
};

int main()
{
    Person sifat("MD SIFAT AHAMED",23,100,99);
    // cout<<sifat.age<<" "<<sifat.name<<endl;
    sifat.hello();
    cout<<sifat.hel()<<endl;

    return 0;
}