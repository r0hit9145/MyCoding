//wap to binary search 
//mistake hai
#include<bits/stdc++.h>
using namespace std;

void Binary_searching(int arr[], int element)
{
    int i=0;
    int start=0;
    int end= 5-1;
    int mid= (start+end)/2;
    int index=0;
    while(start<=end)
    {
        if(element==arr[mid])
        {
            cout<<"element is found :"<<element<<index<<endl;
            break;
        }

        else if(arr[mid]<=element)
        {
           end= mid-1;
        }

        else {
            start= mid+1;
        }
        mid= (start+end)/2;
        
    }
    
}
int main(){
    int arr[5]={ 10, 8, 7, 5, 2};
    int element;
    cout<<"Which element searching ?"<<endl;
    cin>>element;

    Binary_searching(arr, element);

}





























// //wap to print an array of a duplicate number of counting- 
// #include<bits/stdc++.h>
// using namespace std;

// void Duplicat_count(int arr[], int element)
// {
//     int i=0;
//     int count=0;
//     for(int i=0; i<5; i++)
//     {
//         if(arr[i]==element)
//         {
//             count++;
//         }
//     }
//     cout<<endl<<"My searching element is :"<<element<< "Total count" <<count;
// }

// int main()
// {
//     int arr[5]= {1, 1, 3, 3, 4};
//     int element;
//     int n=5;
//     cout<<endl<<"Which element do you want search :  1, 3, 4 ?"<<endl;
//     cin>>element;

//     Duplicat_count(arr, element);
// }