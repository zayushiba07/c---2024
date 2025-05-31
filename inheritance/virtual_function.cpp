#include<iostream>
#include<string>
using namespace std;

class detail
{
    private:
        string name,dis;
        int age;
        double weight;
    public:
        void getdetail()
        {
            cout<<"Enter your name :";
            cin>>name;
            cout<<"Enter your age :";
            cin>>age;
            cout<<"Enter your weight :";
            cin>>weight;
            cout<<"Enter your destination :";
            cin>>dis;
        }
        void showdetail()
        {
            cout<<"name is :"<<name<<endl;
            cout<<"age is :"<<age<<endl;
            cout<<"weight is :"<<weight<<endl;
            cout<<"destination is :"<<dis<<endl;
        }
};
class basicsalary : virtual public detail
{
    protected:
        double bs;
    public:
        void getbasicsalary()
        {
            cout<<"Enter your basic salary :";
            cin>>bs;
        }
        void showbasicsalary()
        {
            cout<<"basic salary is :"<<bs<<endl;
        }
        double getsalary()
        {
            return bs;
        }
};
class tada : virtual public detail
{
    protected:
        float ta,da;
    public:
        void getTaDa(int bs)
        {
            ta = bs * 0.12;
            da = bs * 0.10;    
        }  
       void showTada()
       {
            cout<<"TA is :"<<ta<<endl;
            cout<<"DA is :"<<da<<endl;
       }
       float getTa()
       {
            return ta;
       }
       float getDa()
       {
            return da;
       }
};
class salary:public basicsalary,public tada
{
    protected:
        float bouns,totalsalary;
    public:
        void bounssalary()
        {
            getTaDa(getsalary());
            bouns = getsalary() * 0.10;
            totalsalary = getsalary()+bouns+getTa()+getDa();
        }
        void showdata()
        {
            showdetail();
            showbasicsalary();
            showTada();
            cout<<"total salary is :"<<totalsalary<<endl;
        }
};
int main()
{
    salary s1;
    s1.getdetail();
    s1.getbasicsalary();
    s1.bounssalary();
    s1.showdata();
}
