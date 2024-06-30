//Set matrix -- if 
/*Problem Statement: Given a matrix if an element in 
the matrix is 0 then you will have to set its entire 
column and row to 0 and then return the matrix.
                    Optimal approach
*/
#include<iostream>
using namespace std;

class A 
{
    public:
    void Set_Matrix_Zero(int row[], int col[], int arr[][3], int size)
    {
        for(int i=0; i<size; i++)
        {
            for (int j=0; j<size; j++)
            {
                if(arr[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(row[i] || col[j]==1)
                {
                    arr[i][j]=0;
                    arr[j][i]=0;
                }
                cout<<arr[i][j]<<"_";
            }
            cout<<endl;
        }
    }
};

int main()
{
    system("cls");
    A *obj= new A;
    //for the row's position
    int row[3]={0, 0, 0};
    //for the col's position
    int col[3]={0, 0, 0};

    int arr[3][3]={{1, 1, 1},
                   {1, 0, 0},
                   {1, 1, 1}
                   };
    int size=3;
    obj->Set_Matrix_Zero(row, col, arr, size);
    return 0;
}

















































// //Set matrix to zero value "0" mark if present in matrix.
// //        Brute force approach......
// #include<iostream>
// using namespace std;

// class Demo 
// {
//     public:
//     void Set_Matrix_Zero(int arr[][3], int size)
//     {
//         int i,j;
//         for( i=0; i<size; i++)
//         {
//             for( j=0; j<size; j++)
//             {
//                 Make_call_row(arr, i);
//                 Make_call_coloum(arr, j);

//                 //cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }

//         for( i=0; i<size; i++)
//         {
//             for( j=0; j<size; j++)
//             {
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }

//     void Make_call_row(int arr[][3], int i)
//     {
//         for(int j=0; j<3; j++)
//         {
//             if(arr[i][j]!=0)
//             {
//                 arr[i][j]=-1;
//             }
//             cout<<arr[i][j]<<" "<<i<<"<-->"<<j<<endl;
//         }
//     }

//     void Make_call_coloum(int arr[][3], int j)
//     {
//         for(int i=0; i<3; i++)
//         {
//             if(arr[i][j]!=0)
//             {
//                 arr[i][j]=-1;
//             }
//         }
//     }
// };


// int main()
// {
//     system("cls");
//     Demo *obj= new Demo;
//     int arr[3][3]={{1, 1, 1}, 
//                    {1, 0, 1}, 
//                    {1, 1, 1}};
//     int size= 3;
//     //cout<<size<<" ";

//     obj->Set_Matrix_Zero(arr, size);
//     return 0;
// }