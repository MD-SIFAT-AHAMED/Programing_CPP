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

    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(ar[i].marks < ar[j].marks)
            {
                //swap(ar[i],ar[j]);
                Student tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].age<<" "<<ar[i].marks<<endl;
    }
    return 0;
}