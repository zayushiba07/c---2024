#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 8; 

    cout<<"AND :"<<(a&b)<<endl;
    cout<<"OR :"<<(a|b)<<endl;
    cout<<"XOR :"<<(a^b)<<endl;
    cout<<"NOT :"<<(~b)<<endl;
    cout<<"left :"<<(a<<b)<<endl;
    cout<<"right :"<<(a>>b)<<endl;
    return 0;
}