#include<iostream>
using namespace std;

template<class t1,class t2>

void display(t1 a,t2 b)
{
    cout<<"using tamplate in function..."<<endl;
    cout<<"a :"<<a<<endl<<"b :"<<b<<endl;
}

void display(string str1,string str2)
{
    cout<<"without using template in this function.."<<endl;
    cout<<"str1 :"<<str1<<endl<<"str 2:"<<str2<<endl;
}

template<class t1,class t2>

float cal(t1 x,t2 y)
{
    cout<<"X :"<<x<<endl<<"Y :"<<y<<endl;
    return (x+y);
}

int main()
{
    display(12,10);//call templete fuction
    display(string("ram"),string("sita"));//call non-templete function
    display(12.5,string("manish"));//call templete fuction
    cout<<"************************"<<endl;
    cout<<"sum is :"<<cal(10,20)<<endl;
    cout<<"sum is :"<<cal(10.20,90.23)<<endl;
    cout<<"sum is :"<<cal(20,80.30)<<endl;

    return 0;
}



