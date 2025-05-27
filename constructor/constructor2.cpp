#include<iostream>
#include<string>
using namespace std;
class info
{
    private:
        int rno;
        string name;
        char gender;
    public:
        info();
        info(int r,string n,char g);
        info(info &x);
        ~info();
        void display();
};
info :: info()
{
    cout<<"defalut constructor is called"<<endl;
    cout<<"Enter your name :";
    cin>>name;
    cout<<"Enter your rollno :";
    cin>>rno;
    cout<<"Enter your Gender :";
    cin>>gender;
}
info :: info(int r,string n,char g) 
{
   cout<<"############################################"<<endl;
    cout<<"parameterized constructor is called"<<endl;
    rno = r;
    name = n;
    gender = g;
}
info :: info(info &x)
{
    cout<<"############################################"<<endl;
    cout<<"Copy constructor is called"<<endl;
    rno = x.rno;
    name = x.name;
    gender = x.gender;
}
info :: ~info()
{
    cout<<"############################################"<<endl;
    cout<<"Destructor is called"<<endl;
}
void info :: display()
{
    cout<<"############################################"<<endl;
    cout<<"name is :"<<name<<endl;
    cout<<"roll no is :"<<rno<<endl;
    cout<<"Gender is :"<<gender<<endl;
}
int main()
{
    info a;
    a.display();
    info b(102,"jeni",'f');
    b.display();
    info c(a);
    c.display();
    return 0;
}
