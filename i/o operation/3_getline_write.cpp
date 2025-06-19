#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100];
    int i;
    int size = 100;
    cout<<"Enter your string :";
    cin.getline(a,size);

    cout<<"String is :"<<a<<"length is :"<<strlen(a)<<endl;

    int leng = strlen(a);

    cout<<"Increment of string"<<endl;

    for(i=0;i<=leng;i++)
    {
        cout.write(a,i);
        cout<<endl;
    }
    cout<<"decrement of string"<<endl;
    for(i=leng;i>0;i--)
    {
        cout.write(a,i);
        cout<<endl;
    }
    return 0;

}