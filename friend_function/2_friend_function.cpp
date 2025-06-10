#include<iostream>
#include<string>
using namespace std;
class emp;
class iteam
{
    private:
        int price,qty,id;
        string name;
    public:
        void getdata();
        void putdata();
        friend void fsum(iteam,emp);

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
    cout << "\n----- Product Details -----\n";
    cout<<"product id is :"<<id<<endl;
    cout<<"product name is :"<<name<<endl;
    cout<<"product price is :"<<price<<endl;
    cout<<"product qty is :"<<qty<<endl;
}
class emp
{
    private:
        int eid,basicsalary;
        string ename;
    public:
        void getdata();
        void putdata();
        friend void fsum(iteam,emp);
}; 
void emp :: getdata()
{
    cout<<"***********************************"<<endl;
    cout<<"Enter Employee id :";
    cin>>eid;
    cout<<"Enter Employee name :";
    cin>>ename;
    cout<<"Enter Employee basic salary :";
    cin>>basicsalary;
}
void emp::putdata()
{
     cout << "\n----- Employee Details -----\n";
    cout<<"Employee id is :"<<eid<<endl;
    cout<<"Employee name is :"<<ename<<endl;
    cout<<"Employee basic salary is :"<<basicsalary<<endl;
}
void fsum(iteam t1,emp e1)
{
     cout<<"***********************************"<<endl;
     int tprice = e1.basicsalary +(t1.price*t1.qty*0.10);
     cout << "\n----- Total Calculation -----\n";
     cout<<"Total price of this is :"<<tprice<<endl;
}
int main()
{
    emp e;
    iteam i;
    e.getdata();
    i.getdata();
    e.putdata();
    i.putdata();
    fsum(i,e);
    return 0;
}