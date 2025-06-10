#include<iostream>
#include<string>
using namespace std;

class iteam
{
    private:
        int price,qty,id;
        string name;
    public:
        void getdata();
        void putdata();
        friend void fsum(iteam);

};
void iteam :: getdata()
{
    cout<<"Enter product id :";
    cin>>id;
    cout<<"Enter product name :";
    cin>>name;
    cout<<"Enter price of product :";
    cin>>price;
    cout<<"Enter qty of product :";
    cin>>qty;
}
void iteam::putdata()
{
     cout<<"*********************************"<<endl;
    cout<<"product id is :"<<id<<endl;
    cout<<"product name is :"<<name<<endl;
    cout<<"product price is :"<<price<<endl;
    cout<<"product qty is :"<<qty<<endl;
}
void fsum(iteam t)
{
    cout<<"*********************************"<<endl;
    int total = t.price * t.qty;
    cout<<"Total price is :"<<total<<endl;
}
int main()
{
    iteam i1;
    i1.getdata();
    i1.putdata();
    fsum(i1);
    return 0;
}