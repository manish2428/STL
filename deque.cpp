#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    cout<<"push operation "<<endl;

deque<int> dq;
   dq.push_back(1);
   dq.push_back(4);
   dq.push_back(2);
   dq.push_back(3);
   dq.push_back(5);

   for(auto i=dq.begin() ; i!=dq.end() ; i++)
   {
       cout<<*(i)<<endl;

   }
   cout<<"********************************************************"<<endl;
   cout<<"accessing front and back element"<<endl;
   cout<<dq.front()<<"    "<<dq.back()<<endl;
}

