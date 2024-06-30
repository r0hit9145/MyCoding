#include<iostream>
#include<vector>
using namespace std;

int unique_path(int i, int j, int n, int m){
    // int &k=i;
    // int &l=j;
    // base case
    if((i==(n-1)) && (j==(m-1)) )return 1; // true 1 returning
    
    if(i>=n || j>=m)
    return 0;
    else
    return unique_path(i+1,j, n, m) + unique_path(i, j+1, n, m);

}

int main(){
    int unique= unique_path(0, 0, 3, 7);
    cout<<unique<<endl;
}

























// #include<iostream>
// #include<vector>
// using namespace std;

// class Check{
//     public:
//     void mergerArray(vector<int> &arr, vector<int> &brr, int an, int bn);
// };

// // outside the declaration
// void Check:: mergerArray(vector<int> &arr, vector<int> &brr, int an, int bn){
//     int cnt=0;
//     int size=an+bn;
//     for(int i=an; i<size; i++)
//     {
//         arr[i]=brr[cnt];
//         cnt+=1;
//     }
    
//     for(int i=0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
    
// }

// int main()
// {
//     Check c;
//     // first array
//     vector<int> arr={1, 3, 5, 7};
//     int an=arr.size();
//     // second array
//     vector<int> brr={0, 2, 6, 8, 9};
//     int bn=brr.size();
//     c.mergerArray(arr, brr, an, bn);
// }