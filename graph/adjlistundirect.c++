#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int v,e,a,b;
    cout<<"how many vrtics are there in graph";
    cin>>v;
    cout<<"how many edges";
    cin>>e;
    vector<int>adjlist[v];
    for(int i=1;i<=e;i++)
    {
      cout<<"enter the end points of edge"<<i;
      cin>>a>>b;
      adjlist[a].push_back(b);
      adjlist[b].push_back(a);
    }
    for(int i=0;i<v;i++)
    {
      cout<<i<<":";
      for(int j=0;j<adjlist[i].size();j++)
      {
        cout<<adjlist[i][j]<<",";
      }
      cout<<endl;
    }

}