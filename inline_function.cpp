#include<iostream>
using namespace std;

class tax
{
    private:
        int income,rate;
    public:
        int tax;
        void putdata();
        void display();
};
void tax::putdata()
{
    cout<<"Enter your income:";
    cin>>income;
    cout<<"Enter the rate:";
    cin>>rate;
}
inline void tax::display()
{
    cout<<"your Income :"<<income;
    cout<<"rate :"<<rate;
    tax=(income*rate)/100;
    //cout<<tax; // that have to access tax 1st method
}
int main()
{
    tax t1;
    t1.putdata();
    t1.display();
    cout<<"tax is "<<t1.tax;// that have to access tax 2nd method
    return 0;
}