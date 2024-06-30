//factorial calculating- o(1), recursive approach
#include<iostream>
using namespace std;

int factorial(int n)
{
    //base case
    if (n==0)
    return 1;

    int chotti_pro= factorial(n-1);
    int badi_pro= n* chotti_pro;
    return badi_pro;
}

int main()
{
    system("cls");
    int n;
    cin>>n;

    int ans= factorial(n);
    cout<<ans<<" ";
}