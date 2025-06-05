#include<iostream>
using namespace std;

class cal
{
    private:
        int x,y;
    public:
        void getdata(int a,int b);
        void display();
        int operator --();
        int operator *();
};
void cal :: getdata(int a,int b)
{
    x=a;
    y=b;
}
void cal :: display()
{
    cout<<"Decerement of x is :"<<x--<<endl;
    cout<<"decrement of y is :"<<y--<<endl;
    cout<<"square of x is :"<<x*x<<endl;
    cout<<"square of y is :"<<y*y<<endl;
}
int cal :: operator--()
{
    cal temp;
    temp.x=x--;
    temp.y=y--;
}
int cal :: operator*()
{
    cal temp;
    temp.x=x*x;
    temp.y=y*y;
}
int main()
{
    int x,y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    cal c1;
    c1.getdata(x,y);
    c1.display();
    --c1;
    c1.display();
    cal c2;
    c2.getdata(x,y);
    c2.display();
    *c2;
    c2.display();
    return 0;
}
