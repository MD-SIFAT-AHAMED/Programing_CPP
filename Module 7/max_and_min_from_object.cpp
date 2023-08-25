#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int age;
        int marks;
};
int main()
{
    Student ar[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].age>>ar[i].marks;
        cin.ignore();
    }
    Student mx;
    mx.marks=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(ar[i].marks>mx.marks)
        {
            mx=ar[i];
        }
    }
    cout<<mx.name<<" "<<mx.age<<" "<<mx.marks<<endl;
    Student mn;
    mn.marks=INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(ar[i].marks<mn.marks)
        {
            mn=ar[i];
        }
    }
    cout<<mn.name<<" "<<mn.age<<" "<<mn.marks<<endl;
    return 0;
}