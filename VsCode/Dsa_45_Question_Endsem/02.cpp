//A calculating Ncr using recursion
#include<iostream>
using namespace std;

class Demo
{
    public:
    int num;
    int Ncr_numerator(int n)
    {
        if(n==1)
        {
            //cout<<"Finished at end position.";
            return 1;
        }

        //int sav1=0;
        return Ncr_numerator(n-1)*n;
        //cout<<n<<
    }

    int Ncr_Denominator(int remark)
    {
        if(remark==1)
        {
            return 1;
        }

        int result= Ncr_Denominator(remark-1)*remark;
        int sav=2;
        return result*sav;
    }
};

int main()
{
    Demo obj;
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    int r=2;
    int remark= num-r;
    int ans= obj.Ncr_numerator(num);
    int ans2= obj.Ncr_Denominator(remark);
    cout<<ans/ans2<<endl;
    
}