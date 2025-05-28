#include<iostream>
#include<string>
using namespace std;

class details
{
    private:
        string name;
        int age;
        float weight;
    public:
        void getdetail()
        {
            cout<<"Enter your name :";
            cin>>name;
            cout<<"Enter your age :";
            cin>>age;
            cout<<"Enter your weight";
            cin>>weight;
        }
        void showdetails()
        {
            cout<<"Your name is :"<<name<<endl;
            cout<<"Your age is :"<<age<<endl;
            cout<<"Your weight is :"<<weight<<endl;
        }
};
class marks
{
    private:
        int sub1,sub2;
    public:
        void getmarks()
        {
            cout<<"Enter your subj1 mark :";
            cin>>sub1;
            cout<<"Enter your subj2 mark :";
            cin>>sub2;
        }
        void showmarks()
        {
            cout<<"Your subject 1 mark is"<<sub1<<endl;
            cout<<"Your subject 2 mark is"<<sub2<<endl;
        }

};
class report:public details,public marks
{
    private:
        float ans;
    public:
        void showreport()
        {
            showdetails();
            showmarks();
        }
};
int main()
{
    report r1;
    r1.getdetail();
    r1.getmarks();
    r1.showreport();
    return 0;
}