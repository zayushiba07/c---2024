#include<iostream>
using namespace std;

class shape
{
    private:
        int length;
        int width;
    public:
        shape()//defalut constructor
        {
            cout<<"default constructor is called....";
            cout<<"Enter length :";
            cin>>length;
            cout<<"Enter width :";
            cin>>width;
        }
        shape(int l,int w)
        {
            cout<<"prameteriazied constructor called....";
            length = l;
            width = w;
        }
        ~shape()//defult distructor
        {
            cout<<"Defult constrctor is called...";
        }
        void display()
        {
            cout<<"=================================="<<endl;
            cout<<"length is :"<<length<<endl;
            cout<<"width is :"<<width<<endl;
            cout<<"total is :"<<length*width<<endl;
        }
};
int main()
{
    shape s1;//defult constructor object
    s1.display();
    shape s2(100,200);//prameteriazied constructor object
    s2.display();
    return 0;

}