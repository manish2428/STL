#include<bits/stdc++.h>
using namespace std;
int main()
{

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    cout<<"accessing the top element of a stack"<<endl;
    cout<<st.top()<<endl;
    cout<<"poppint the element from a stack"<<endl;
    st.pop();

    cout<<st.top()<<endl;
    cout<<"****************************************************************"<<endl;
    cout<<"size of a stack"<<endl;
    cout<<st.size()<<endl;
    cout<<"****************************************************************"<<endl;
  //  cout<<"clearing data from the stack"<<endl;
//    cout<<st.clear()<<endl;
    cout<<"****************************************************************"<<endl;
    cout<<"cheacking weather the stack is empty or not"<<endl;
    cout<<st.empty()<<endl;
    cout<<"****************************************************************"<<endl;
    cout<<"swapping two stack"<<endl;
stack<int>st1;
st1.push(11);
    st1.push(22);
    st1.push(13);
    st1.push(14);
    st1.emplace(15);
st.swap(st1);
cout<<st.top();
}
