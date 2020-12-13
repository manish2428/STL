#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>p;
    p.push(1);
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);
    queue<int>q;
    q.push(6);
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(8);
    cout<<"size of queue"<<endl;
    cout<<q.size()<<endl;
    cout<<""<<endl;

    int i;
int a=q.size();
    cout<<"elements int the queue"<<endl;
    for(i=0;i<a;i++)
    {

        cout<<q.front()<<endl;
        q.pop();

    }
    cout<<"*************************"<<endl;
    p.swap(q);
    cout<<"elements int the queue"<<endl;
    for(i=0;i<a;i++)
    {

        cout<<q.front()<<endl;
        q.pop();

    }
    return 0;
}
