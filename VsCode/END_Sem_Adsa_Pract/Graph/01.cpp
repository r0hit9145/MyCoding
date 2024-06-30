//Using a graph--- adjecent list

#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

template< class T>
class Graph 
{
    public:
    //to use unordered map
    unordered_map < T , list< T > > adj;

    //if , direction--> 0-- undirected
    //if, direction--> 1--- directed
    void adjlist(T u, T v, bool dicrection)
    {
        adj[u].push_back(v);

        if(dicrection==0)
        {
            //if is also possibled
            adj[v].push_back(u);
        }
    }   

    void print_adjlist()
    {
        for(auto i: adj)
        {
            cout<<i.first <<"--->";
            for(auto j : i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
    }

};

int main()
{
    Graph<int> gp;
    int node, edge;
    cout<<"Enter the nodes ? "<<endl;
    cin>>node;

    cout<<"Enter the edge ? "<<endl;
    cin>>edge;

    for(int i=0; i<edge; i++)
    {
        int u,v;
        //cout<<"enter the nodes, edges : "<<endl;
        cin>>u>>v;
        cout<<endl;
        gp.adjlist(u, v, 0);
    }

    gp.print_adjlist();
}