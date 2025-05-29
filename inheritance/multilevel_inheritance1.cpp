#include<iostream>
using namespace std;

class marks
{
    protected:
        int sub1,sub2,sub3,total;
    public:
        marks(int s1,int s2,int s3)
        {
            sub1 = s1;
            sub2 = s2;
            sub3 = s3;
            total = sub1+sub2+sub3;
        }
        void display()
        {
            cout<<"subject 1:"<<sub1<<endl;
            cout<<"subject 2:"<<sub2<<endl;
            cout<<"subject 3:"<<sub3<<endl;
        }
};
class totalmark:public marks
{
    protected:
        int totalm,pratical;
    public:
        totalmark(int s1,int s2,int s3, int p):marks(s1,s2,s3)
        {
            pratical = p;
            totalm = total + pratical;
        }
        void display()
        {
            cout<<"total marks is"<<totalm<<endl;
        }
};
class result:public totalmark
{
    private:
        float avg;
    public:
        result(int s1,int s2,int s3,int p):totalmark(s1,s2,s3,p)
        {
            avg = totalm/4;
        }
        void showresult()
        {
            marks::display();
            totalmark::display();
            cout<<"result is :"<<avg<<endl;
        }
};
int main()
{
    result r1(50,50,50,50);
    r1.showresult();
    return 0;
}