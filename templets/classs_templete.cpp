#include<iostream>
using namespace std;

template<class t1,class t2,class t3>

class calint
{
    private:
        t1 a;
        t2 b;
        t3 c;
    public:
        calint(t1 x,t2 y,t3 z)
        {
            a=x;
            b=y;
            c=z;
        }  
        void show()
        {
            float result;
            cout<<"A :"<<a<<endl<<"B :"<<b<<endl<<"C :"<<c<<endl;
            result=(a*b*c)/100;
            cout<<"Result is :"<<result<<endl;
        }
};
int main()
{
    calint<int,int,int> obj1(100,10,2);
    calint<int,float,int> obj2(200,20.10,2);
    calint<float,int,float> obj3(300.30,50,10.20);
    calint<float,float,float> obj4(500.50,20.30,10.20);
    
    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();

    return 0;
}