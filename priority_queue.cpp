#include<bits/stdc++.h>
using namespace std;
int main()
{
priority_queue<int>pq;
pq.push(1);
pq.push(2);
pq.push(6);
pq.push(9);
pq.push(3);
pq.push(4);
cout<<pq.top()<<endl;
priority_queue<int,vector<int>,greater<int>>q;
q.push(9);
q.push(8);
q.push(7);
q.push(6);
q.push(1);
q.push(0);
q.push(4);
cout<<q.top()<<endl;
cout<<"popping element"<<endl;
q.pop();
cout<<q.top();
return 0;
}
