#include<iostream>
using namespace std;

class Heap
{
    public:
    int arr[100];
    int size;

    void Insetion(int val)
    {
        size= size+1;
        int index=size;
        arr[index]=val;

        //Kab tak'
        while(index>1)
        {
            int parent= index/2;

            if(arr[parent]<arr[index])
            {
                swap(arr[parent], arr[index]);
                index= parent;
            }
            else
            return;
        }
    }

    void printin_Data()
    {
        for(int i=0; i<=size; i++)
        {
            cout<<arr[i]<<"  ";
        }
    }
};

int main()
{
    Heap h;
    h.Insetion(53);
    h.Insetion(33);
    h.printin_Data();
}