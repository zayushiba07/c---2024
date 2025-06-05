#include<iostream>
using namespace std;

class shape
{
    private:
        int h,w;
    public:
        void getdata(int a,int b);
        void display();
        int operator *(shape c);
};
void shape :: getdata(int a, int b)
{
    h=a;
    w=b;
}
void shape:: display()
{
    cout<<"shape height and width is"<<h*w<<endl;
}
int shape::operator *(shape c)
{
    int temp;
    temp =  (h*w) + (c.h*c.w);
    return temp;
}
int main()
{
    int height,width;
    shape s1,s2;
    cout<<"Enter the height:";
    cin>>height;
    cout<<"Enter the width:";
    cin>>width;
    s1.getdata(height,width);
    s1.display();
    cout<<"Enter the height:";
    cin>>height;
    cout<<"Enter the width:";
    cin>>width;
    s2.getdata(height,width);
    s2.display();
    int total = s1 * s2;
    cout<<"total of 2 shape is :"<<total<<endl;
    return 0;
}