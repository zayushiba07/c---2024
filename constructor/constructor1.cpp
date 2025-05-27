#include<iostream>
#include<string>
using namespace std;

class values
{
    private:
        int pid;
        string pname;
    public:
        values()
        {
            cout<<"defalut constructor is called..."<<endl;
            cout<<"Enter your product id :";
            cin>>pid;
            cout<<"Enter your product name :";
            cin>>pname;
        }
        values(int i,string n)
        {
            cout<<"******************************************"<<endl;
            cout<<"parameterized constructor is called...."<<endl;
            pid = i;
            pname = n;
            cout<<"product id is :"<<pid<<endl;
            cout<<"product name is :"<<pname<<endl;
        }
        values(values &x)
        {
            cout<<"******************************************"<<endl;
            cout<<"Copy constructor is called................"<<endl;
            pid = x.pid;
            pname = x.pname;
            cout<<"product id is :"<<pid<<endl;
            cout<<"product name is :"<<pname<<endl;
        }
        ~values()
        {
             cout<<"******************************************"<<endl;
            cout<<"destructor is called..."<<endl;
        }
        void display()
        {
           cout<<"******************************************"<<endl;   
           cout<<"product id is :"<<pid<<endl;
            cout<<"product name is :"<<pname<<endl;
        }
};
int main()
{
    values v1;
    v1.display();
    values v2(200,"computer");
    v2.display();
    values v3(v1);
    v3.display();
    return 0;
}