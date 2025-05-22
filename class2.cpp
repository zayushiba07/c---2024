#include<iostream>
using namespace std;

class product
{
    private:
         int number,qty;
         float price;
    public:
        void putdata();
        void display();
        void sum(product a1,product a2);
};
void product::putdata()
{
    cout<<"Enter product number :";
    cin>>number;
    cout<<"Enter product Qty :";
    cin>>qty;
    cout<<"Enter product price :";
    cin>>price;
}
void product::display()
{
    cout<<"==========================="<<endl;
    cout<<"product Qty :"<<qty<<endl;
    cout<<"product price :"<<price<<endl;
}
void product::sum(product a1,product a2)
{
    qty = a1.qty+a2.qty;
    price = a1.price+a2.price;
}
int main()
{
    product p1,p2,ans;
    p1.putdata();
    p1.display();
    p2.putdata();
    p2.display();
    ans.sum(p1,p2);
    ans.display();
    return 0;
}