#include<bits/stdc++.h>
using namespace std;
int main()
{
set<int>s;//set 1
s.insert(5);
s.insert(5);
s.insert(6);
s.insert(7);
s.insert(8);
s.insert(5);//repeted element is not stored in a set.
cout<<"Printing the element of the set1"<<endl;
for(auto i=s.begin();i!=s.end();i++)
{
    cout<<*i<<endl;
}
cout<<"*******************************"<<endl;
cout<<"printing the size of a set"<<endl;
cout<<s.size()<<endl;
//other all function is similar to vector ie(begin(),end(),rbegin(),rend(),size(),swap())
//erase()
set<int>st;//set 2
st.insert(9);
st.insert(8);
st.insert(5);
st.insert(1);
st.insert(2);
st.insert(2);
for(auto j=st.begin();j!=st.end();j++)
{
    cout<<*j<<endl;
}
cout<<"*********************************"<<endl;
s.swap(st);
cout<<"After swapping"<<endl;
for(auto j=st.begin();j!=st.end();j++)
{
    cout<<*j<<endl;
}
cout<<"***********************************"<<endl;
cout<<"finding the value present in a set"<<endl;
auto t=s.find(111);                                        //i have doubt in this line
cout<<*t;
cout<<"\n**************************************"<<endl;
//count function finds the element from a set.if the element is present in a set it returns 1 else 0.
cout<<"if the given element is present it will print 1 else 0"<<endl;
cout<<"=>";
int cnt=st.count(6);
cout<<cnt<<endl;
cout<<"*******************************************"<<endl;
//working of erase function.
st.erase(6);
cnt=st.count(6);
cout<<cnt<<endl;
cout<<st.size()<<endl;
//st.erase(st.begin(),st.begin()+2);
//cout<<st.size()<<endl;
cout<<"********************************************"<<endl;
cout<<s.size()<<endl;
auto it1=s.find(9);//{9 , 8, 5, 1, 2}
auto it2=s.find(5);
s.erase(it1,it2);//includes first element but excludes last element.
cout<<s.size()<<endl;
return 0;
}
