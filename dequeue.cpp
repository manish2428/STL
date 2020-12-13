#include<bits/stdc++.h>
using namespace std;
int main()
{

    deque<int>s;
int n;
cout<<"enter the size of a deque"<<endl;
cin>>n;
cout<<"Enter the element"<<endl;
for(int i=0;i<n;i++)
{
    int a;
    cin>>a;
    s.push_back(a);
}
    deque<int>r;

    sort(s.begin(),s.end());

    while(s.begin()!=s.end())
    {
        cout<<"pushing "<<s.back()<<endl;
        r.push_back(s.back());
        s.pop_back();
        cout<<"pushing "<<s.back()<<endl;
        r.push_front(s.back());

        s.pop_back();
    }
   for(auto i=r.begin(); i!=r.end() ;i++){
    cout<<*i<<endl;
    }

}

