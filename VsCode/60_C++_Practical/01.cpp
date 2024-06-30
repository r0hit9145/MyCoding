//Write to overload the increament and decreament operator on the array class.
#include<iostream>
using namespace std;


//Class name- array
class Array
{
    int *data;
    int size;

    public:
    //Constructor called
    Array(int size): size(size) 
    {
        data= new int[size];

        //Intialize the array elements
        for(int i=0; i<size; i++)
        {
            data[i]=i+1;
        }
    }

//Don't forget to reliase the memory 

        //called destructor
        // ~ Array()
        // {
        //     delete []data;
        // }


        //printing the data
        
        void operator ++()
        {
            for(int i=0; i<size; i++)
                {
                    cout<<data[i]<<endl;
                }
        }   

         void operator --()
        {
            for(int i=0; i<size; i++)
                {
                    cout<<data[i]<<endl;
                }
        }    
};

int main()
{
    //Constructor is calling.........
    Array Myarray(5);
    ++Myarray;
    --Myarray;
}