
// checking pointer in both ways -- statically or dynamically.
#include<iostream>
using namespace std;
int main()
{
    char ch ='a';
    cout<<sizeof(ch)<<endl;
    char *ch_= &ch;
    cout<<sizeof(ch_);
    return 0;
}