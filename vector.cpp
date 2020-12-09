#include<iostream>
//#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
   vector <int> v;
    v.push_back(1);//we can use emplace_back() in place of push_back()
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

vector <int> v1;
    v1.push_back(7);//we can use emplace_back() in place of push_back()
    v1.push_back(8);
    v1.push_back(9);
    v1.push_back(10);
    v1.push_back(11);
    v.swap(v1);



    vector <int>::iterator i=v.begin();//i will store he value ie; address of the first position.
    for(i; i!=v.end() ; ++i)
    cout<<*(i)<<endl;
    v.insert(v.begin(),300);//it will add 300 in begining of an array
    v.insert(v.begin()+1,400);//it will add 400 in 1th position of an array
    v.insert(v.begin()+2,2,10);//ti will ass two 10 in 2nd and 3rd position ie;v.insert(initial position,no of size,sata to be inserted)

    cout<<"Output for insert funtion"<<endl;
    for(auto a=v.begin() ; a!=v.end() ; a++)
    cout<<*(a)<<endl;
    cout<<"*************************************************\n"<<endl;
    //erase function
    /*v.erase(v.begin());//we can erase second element by adding  2 in a begin function(ie;v.begin()+2)
    for(auto j=v.begin();j!=v.end();j++)//use of auto instead of vector<int>::iterator.
    {
        cout<<*(j)<<endl;
    }*/
    cout<<"****************************************************\n"<<endl;
    //suppose we want to erase a range in an array
   /* v.erase(v.begin()+1,v.begin()+4);//it will erase data peresent in 1th position but it will not erase the data present in 4th position
    for(i=v.begin(); i!=v.end() ; i++ )
    {

        cout<<*(i)<<endl;
    }*/

    cout<<"****************************************************"<<endl;
    //vector using pairs
    /* vector <pair<int,string>> r;

    int arr[]={5,10,15,20,25,30};
    string arr1[]={"m","a","n","i","s","h"};
    int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{

    r.push_back(make_pair(arr[i],arr1[i]));//{{5,"m"},{10,"a"},{15,"n"},{20,"i"},{25,"s"},{30,"h"}}

}
for( int j=0 ; j<n ; j++){
cout<<r[j].first<<"  "<<r[j].second<<endl;
}*/
cout<<"****************************************************"<<endl;
//erase

    return 0;
}
