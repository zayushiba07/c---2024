#include<iostream>
using namespace std;

class shape
{
    public:
        virtual float area()=0;
};
class tringle:public shape
{
    private:
        float height,base;
    public:
        tringle(float h,float b)
        {
            height=h;
            base=b;
        }
        float area()
        {
            return 0.5*height*base;
        }
};
class rectangle:public shape
{
    private:
        float height,width;
    public: 
        rectangle(float h,float w)
        {
            height = h;
            width = w;
        }
        float area()
        {
            return height*width;
        }
};
class circle:public shape
{
    private:
        float radius;
    public:
        circle(float r)
        {
            radius = r;
        }
        float area()
        {
            return 3.14*radius*radius;
        }
};
int main()
{
    float h,w,r,b;
    cout<<"Enter height :";
    cin>>h;
    cout<<"Enter width :";
    cin>>w;
    cout<<"Enter radius :";
    cin>>r;
    cout<<"Enter base :";
    cin>>b;
    shape* s1;
    circle c(r);
    rectangle rect(h,w);
    tringle t(h,b);

    s1 = &c;
    cout<<"circle Area is : "<<s1->area()<<endl;

    s1 = &rect;
    cout<<"rectangle Area is : "<<s1->area()<<endl;

    s1 = &t;
    cout<<"tringle area is : "<<s1->area()<<endl;

    return 0;

}