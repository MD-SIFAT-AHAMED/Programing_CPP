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
        void hello()
        {
            cout<<"Hello";
        }
};
int main()
{
    Person sifat("MD SIFAT AHAMED",23);
    cout<<sifat.age<<" "<<sifat.name<<endl;
    sifat.hello();
    return 0;
}