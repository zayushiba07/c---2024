#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char* a;
    int size = 100;
    
    cout<<"Enter your string :";
    cin.getline(a,size);

    cout<<"String is :"<<a<<"length is :"<<strlen(a)<<endl;

    cout.write(a,strlen(a));
    return 0;
 
}