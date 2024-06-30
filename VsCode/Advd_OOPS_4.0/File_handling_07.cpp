// only write into a file something.
#include<iostream>
using namespace std;

int main()
{
    system("cls");
    FILE *fp= NULL;
    int a=10;
    char ch='a';
    char str[50];
    cout<<"Enter your movies name one by one : ";
    gets(str); 
    // for(int i=0; i<10; i++)
    // {
    //     cin>>str[i];
    // }

    // file open
    fp= fopen("abc.txt", "w");

    //checking the file is exist or not
    if(fp== NULL)
    {
        cout<<"Not exit file !"<<endl;
        exit(1);
    }

    // for checking character mode
    //fputs(str, fp);
    fprintf(fp, "%d %c %s", a, ch, str);

    //close is mandatory
    fclose(fp);
}