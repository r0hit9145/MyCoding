// addition of two matrix
#include <iostream>
using namespace std;

// usig a function

void two_add_matrix(int a[][3], int b[][3], int row, int col)
{
    int c[2][3];
    // printing a addition of matrix c= ?
    cout << "Matrix c :\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int a[2][3];
    int b[2][3];
    int row, col;
    cout<<"Enter your rows and columns :\n"<<endl;
    cin>>row>>col;
    // reading a matrix =?
    cout << "Matrix A :\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    // reading b matrix =?
    cout << "Matrix B :\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> b[i][j];
        }
    }

    // a function
    two_add_matrix(a, b, row, col);
}