#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
//list is a data structure which stores the element in a dynamic fashion
list<int> ls;
ls.push_back(5);
ls.emplace_back(2);

//following two function are not provided by vector
ls.push_front(6);
ls.emplace_front(9);
//except these two function , all other function are similar to vector.
cout<<"Printing the list"<<endl;
for(auto i=ls.begin();i!=ls.end();i++)
{
    cout<<*(i)<<endl;
}
cout<<"**************************************************************"<<endl;
cout<<"printing the first element and back element"<<endl;

cout<< *(ls).begin()<<"   "<< ls.back()<<endl;
cout<<"************************************************************"<<endl;
cout<<"initializing the size with same value."<<endl;
list<int> a(5,100);
for(auto i=a.begin();i!=a.end();i++)
{
    cout<<*(i)<<endl;
}
cout<<"**************************************************************"<<endl;
cout<<"copying or inherating the data fro m one list to another list."<<endl;
list<int> b(a);
for(auto i=b.begin();i!=b.end();i++)
{
    cout<<*(i)<<endl;
}
//a.begin=it will point the first element of the list.
//a.end=it will point the element or address after the last node.
//rend=It will point to the address location before first element.(reverse end)
cout<<"****************************************************************"<<endl;
cout<<"erasing the data from the list."<<endl;

a.erase(a.begin());
for(auto i=a.begin();i!=a.end();i++)
{
    cout<<*(i)<<endl;
}
cout<<"********************************************************************"<<endl;
cout<<"Erasing the range from an array"<<endl;
//b.erase(b.begin(),b.begin()+2);
for(auto i=b.begin();i!=b.end();i++)
{
    cout<<*(i)<<endl;
}
cout<<"********************************************************************"<<endl;
cout<<"insert function"<<endl;
a.insert(a.begin(),300);
//a.insert(a.begin()+2,3,1000);
for(auto i=a.begin();i!=a.end();i++)
{
    cout<<*(i)<<endl;
}
cout<<"*********************************************************************"<<endl;
cout<<"pop operation"<<endl;
a.pop_back();
for(auto i=a.begin();i!=a.end();i++)
{
    cout<<*(i)<<endl;
}
cout<<"***********************************************************************"<<endl;
cout<<"swapping the list"<<endl;
a.swap(b);
for(auto i=a.begin();i!=a.end();i++)
{
    cout<<*(i)<<endl;
}
cout<<"--------------"<<endl;
for(auto i=b.begin();i!=b.end();i++)
{
    cout<<*(i)<<endl;
}

cout<<"*************************************************************************"<<endl;
cout<<"clearing the list"<<endl;
a.clear();
cout<<a.empty()<<endl;;


return 0;
}
