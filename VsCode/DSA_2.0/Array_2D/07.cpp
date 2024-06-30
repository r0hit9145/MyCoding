//multiplication of two matrix using class or object.
#include<iostream>
using namespace std;

class mul
{
    private:
    int a[2][2]={1,2,  1,2};
    int b[2][2]={1,2,  1,4};
    public:
    void mul_cal()
    {
        int c[2][2];
        //outer loop- a's inputing.
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                int sum=0;
                for(int k=0; k<2; k++)
                {
                    sum= sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                //cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }

        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }


};
int main()
{
    mul m1;
    m1.mul_cal();
}