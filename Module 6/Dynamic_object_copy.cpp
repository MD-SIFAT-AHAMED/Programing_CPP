#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        
};
int main()
{
    Person* sifat=new Person("MD SIFAT AHAMED",34);
    Person* sakin=new Person("SI SAKIN IMTIYAS",46);
    // sifat=sakin; // Avabe kora jay nah
    ////1st way
    // sifat->name=sakin->name;
    // sifat->age=sakin->age;
    ////2nd way
    *sifat=*sakin;
    delete sakin;
    cout<<sifat->name<<" "<<sifat->age<<endl;
    return 0;
}