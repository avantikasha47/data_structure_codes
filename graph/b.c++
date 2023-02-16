#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(10,5);
    for(auto i:v)
    cout<<i<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(11);
     for(auto i:v)
    cout<<i<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    


}