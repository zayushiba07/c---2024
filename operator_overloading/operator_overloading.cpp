#include<iostream>
using namespace std;

class op
{
    private:
        int x,y;
    public:
        void getdata(int,int);
        void display();
        void operator -();
};
void op::getdata(int a,int b)
{
    x=a;
    y=b;
}
void op::display()
{
    cout<<"x value :"<<x<<endl;
    cout<<"y value :"<<y<<endl;
}
void op::operator-()
{
    x=x-2;
    y=y-2;
}
int main()
{
    int data1,data2;
    cout<<"Enter the data 1 :";
    cin>>data1;
    cout<<"Enter the data 2 :";
    cin>>data2;
    op o1;
    o1.getdata(data1,data2);
    o1.display();
    cout<<"first method to display..."<<endl;
    -o1;//1st method to display
    o1.display();
    cout<<"Second method to display..."<<endl;
    o1.operator-();//2nd method to display
    o1.display();
    return 0;
}