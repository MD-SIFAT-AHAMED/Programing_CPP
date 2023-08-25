#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int clss;
        char s;
        int math_marks;
        int eng_marks; 
};

int main()
{   
    int n;
    cin>>n;
    Student ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].name>>ar[i].clss>>ar[i].s>>ar[i].math_marks>>ar[i].eng_marks;    
    }
    
    for(int i=n-1;i>=0;i--)
    {
        cout<<ar[i].name<<" "<<ar[i].clss<<" "<<ar[i].s<<" "<<ar[i].math_marks<<" "<<ar[i].eng_marks<<endl;
   }
    return 0;
}

