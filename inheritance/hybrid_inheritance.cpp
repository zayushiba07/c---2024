#include<iostream>
#include<string>
using namespace std;

class info
{
    private:
        string fname,lname,mname;
    public:
        info(string f,string l,string m)
        {
            fname = f;
            lname = l;
            mname = m;
        }
        void display()
        {
            cout<<"********************************"<<endl;
            cout<<"your first name is :"<<fname<<endl;
            cout<<"your middel name is :"<<mname<<endl;
            cout<<"your last name is :"<<lname<<endl;
            cout<<"********************************"<<endl;
        }
};
class items
{
    protected:
        int item1,item2,item3,total;
    public:
        items(int i1,int i2,int i3)
        {
            item1 = i1;
            item2 = i2;
            item3 = i3;
            total = i1+i2+i3;
        }
        void displayiteam()
        {
            cout<<"********************************"<<endl;
            cout<<"your item 1:"<<item1<<endl;
            cout<<"your item 2:"<<item2<<endl;
            cout<<"your item 3:"<<item3<<endl;
            cout<<"total is :"<<total<<endl;
            cout<<"********************************"<<endl;
        }
};
/* mutiple inheritance */
class tax:public info,public items
{
    protected:
        float tax1;
    public:
        tax(string f,string l,string m,int i1,int i2,int i3):info(f,l,m),items(i1,i2,i3)
        {
            tax1 = total * 0.15;
        }
        void displaytax()
        {
             cout<<"********************************"<<endl;
             cout<<"total tax is :"<<tax1<<endl;
             cout<<"********************************"<<endl;
        }
};
/* hybrid inheritance */
class printbill:public tax
{
    private:
        double netbill;
    public:
        printbill(string f,string l,string m,int i1,int i2,int i3):tax(f,l,m,i1,i2,i3)
        {
             netbill = total + tax1;
        }
        void printbill1()
        {
            cout<<"********************************"<<endl;
            cout<<"net bill is :"<<netbill<<endl;
        }
};
int main()
{
    string l1,m1,f1;
    int i1,i2,i3;
    cout<<"Enter your first name :";
    cin>>f1;
    cout<<"Enter your middle name :";
    cin>>m1;
    cout<<"Enter your last name :";
    cin>>l1;
    cout<<"Enter 1st item price :";
    cin>>i1;
    cout<<"Enter 2nd item price :";
    cin>>i2;
    cout<<"Enter 3rd item price :";
    cin>>i3;
    printbill p1(f1,l1,m1,i1,i2,i3);
    p1.display();
    p1.displayiteam();
    p1.displaytax();
    p1.printbill1();
    return 0;
}