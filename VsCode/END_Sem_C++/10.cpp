//for each loop
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> c={2, 3, 4, 6, 7};

    for_each(c.begin(), c.end(), [](int a)
    {
        a++;
    });

    for_each(c.begin(), c.end(), [] (int f)
    {
        cout<<f<<endl;
    });
}