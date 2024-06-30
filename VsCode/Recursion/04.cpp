//Simple recursion approach
#include<iostream>
using namespace std;

class Hero
{
    public:
    int check(int n)
    {
        if(n==0)
        {
        cout<<endl;
        return true;
        }

        else
        cout<<n<<" ";
        //return n*check(n-1);
    }
    
    
};

int main()
{
    Hero h1;
    int n;
    cin>>n;
    int ans=h1.check(n);
    cout<<ans<<"   ";
    
}