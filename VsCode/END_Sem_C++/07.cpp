// Storage class ------
#include <iostream>  
using namespace std;

static int g=34;//outside the class............................. 

void func() {    
   static int i=0; //static variable inside the class...........   
   int j=0; //local variable    
   i++;    
   j++;    
   cout<<"i=" << i<<" and j=" <<j<<endl;    
}    
int main()  
{  
 func();    
 func();    
 func();    
}  
