#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v[5];
    v[0].push_back(1);
    v[0].push_back(5);
    v[0].push_back(4);
    v[1].push_back(2);
    v[1].push_back(1);
    v[2].push_back(4);
    v[3].push_back(10);
    v[3].push_back(0);
    v[4].push_back(7);
    v[4].push_back(5);
    for(int i=0;i<5;i++)
    {
        cout<<i<<":";
        for(int j=0;j<v[i].size();j++)
        {
        cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}