// Longest Palindromic Substring
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Panlandromic {
    private:
    public:
    
    string Expand(string s, int l, int r)
        {
            while(l>=0 && r<s.length() && s[l]== s[r])
            {
                l-=1;
                r+=1;
            }
            return s.substr(l+1, r-l-1); //pending to understand.
        }
    
    string Longest_pal(string s)
    {
        // calling a expand
        string result="";
        for(int i=0; i<s.length(); i++)
        {
            string sub1= Expand(s, i, i);
            if(sub1.length()> result.length())
            {
                result = sub1;
            }
            string sub2 = Expand(s, i, i+1);
            if (sub2.length()> result.length())
                result = sub2;
        }
        return result;
    }
};

int main(){
    string s= "babad";
    Panlandromic dm;
    cout<<(dm.Longest_pal(s));
}












































// // Reverse a string (hint : stack used)
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr= {3, 2, 2, 3};
//     vector<int> brr;
//     int val=3;
//     int n= arr.size();
//     int store=0;
    
//     // Resize brr to have the same size as arr
//     // brr.resize(n);
    
//     for(int i=0; i<n; i++){
//         if(arr[i]!=val){
//             // Assign the value to brr at index store
//             brr[store]=arr[i];
//             store+=1;
//         }
//     }
    
//     // Print elements of brr
//     for(int i=0; i<store; i++){
//         cout<<brr[i]<<" ";
//     }
    
//     return 0;
// }







// 123 + 1 within an array

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> digits= {9};
//     int n= digits.size()-1;
//     int cnt=1;
//     int sum=0;
//     if(digits.size()<=1)
//         {
//             // firstly store it.
//             int st= digits[n];
//             digits[n+1]= digits[n];
//             digits[n]=  (digits[n]+cnt)%10;
//             digits[n-1]= (st+cnt)/10;
//         }
//     // else{
//     // for(int i=n; i>=0; i--){
//     //     int temp=arr[i];
//     //     arr[i] = (arr[i]+cnt)%10;
//     //     sum = (temp+cnt)/10;
//     //     cnt= sum;
//     // }
//     // print
//     for(int i=0; i<n+1; i++)
//     {
//         cout<<digits[i]<<" ";
//     }
    
// }