#include<iostream>
using namespace std;

class check
{
    public:
    void pair_max(char arr[], int n);

    //declaration of 
};

void check:: pair_max(char arr[], int n)
{
    int i=0; int max1=0; char charr;
    while(i<n)
    {
        for(int j=i+1; j<(n-1); j++)
        {
            if(arr[i]== arr[j])
            {
            max1= max1+2;
            char charr= arr[i];
            //return;
            }
        }
        i++;
    }
    cout<<charr<<" At maximum-> "<<max1;


}

int main()
{
    system("cls");
    check ch;
    char arr[4]={'T', 'E', 'S', 'T'};
    int size=4;
    ch.pair_max(arr, size);
}

