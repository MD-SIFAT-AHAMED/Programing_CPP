#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int age;
        int mark;
};
int main()
{
    Student ar[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].age>>ar[i].mark;
        cin.ignore();
    }
    for(int i=0;i<3;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].age<<" "<<ar[i].mark<<endl;
    }
    return 0;
}