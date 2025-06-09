#include<iostream>

using namespace std;

class counter
{
    private:
        int accountnumber;
        static int accountcout;
    public:
        counter(int a)
        {
            accountnumber = a;
            accountcout++;
        }
        void display()
        {
            cout<<"Account number is :"<<accountnumber<<endl;
            cout<<"Account couter number is :"<<accountcout<<endl;
        }
        ~counter()
        {
            cout<<"counter is complete of account"<<endl;
        }

};
int counter::accountcout=0;
int main()
{
    int account;
    cout<<"Enter your account number :";
    cin>>account;
    counter c1(account),c2(account),c3(account);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}