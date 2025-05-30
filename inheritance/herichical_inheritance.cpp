#include<iostream>
#include<string>
using namespace std;

class account
{
    protected:
        string accoutholder;
        double balance,accoutno;
    public:
        account(string acc,double b,double no)
        {
            accoutholder = acc;
            balance = b;
            accoutno = no;
        }
        void display()
        {
            cout<<"Account holder name :"<<accoutholder<<endl;
            cout<<"Account Balance :"<<balance<<endl;
            cout<<"Account No :"<<accoutno<<endl;
        }
};
class savingaccount:public account
{
    public:
        savingaccount(string acc,double b,double no):account(acc,b,no){}
        void charge()
        {
            double saving = balance * 0.04;
            cout<<"Saving balance is :"<<saving<<endl;
        }
};
class currentaccount:public account
{
    public:
        currentaccount(string acc,double b,double no):account(acc,b,no){}
        void check()
        {
            if(balance < 5000)
            {
                cout<<"Warning : your balance is less then 5000 please check it..."<<endl;
            }
            else
            {
                cout<<"your balance is greater then 5000 in balance"<<endl;
            }
        }
};
int main()
{
    savingaccount s1("janvi",8000,8956231485);
    currentaccount c1("manav",4000,8956653314);
    s1.display();
    s1.charge();
    c1.display();
    c1.check();
    return 0;
}