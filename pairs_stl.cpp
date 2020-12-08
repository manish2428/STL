#include<iostream>
//#include<stdio.h>
//#include<utility>
using namespace std;
class student{
private:
    string name;
    int age;
public:
    void getstudent(string no,int aa)
    {

        name=no;
        age=aa;
    }
    void showstudent()
    {
        cout<<"\nname:"<<name<<endl;
        cout<<"\nage:"<<age<<endl;

    }
    };
int main()
{

    pair<int,int> p={3,4};
    cout<<p.first<<" "<<p.second<<" "<<endl;
    cout<<"*******************************************************************\n";
    pair<int,pair<int,int>> q={1,{3,4}};
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<" "<<endl;
    cout<<"********************************************************************\n";
    pair<int,int> arr[]={{2,3},{4,5},{6,7}};
    cout<<arr[2].second<<endl;
    cout<<"********************************************************************\n";
    pair<int,student>p1;
    p1.first=1111;
    student s1;
    s1.getstudent("manish", 21);
    p1.second=s1;
    cout<<"\n vlaue:"<<p1.first;

    student s2;
    s2=p1.second;
    s2.showstudent();

return 0;
}
