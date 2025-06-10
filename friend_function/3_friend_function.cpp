#include<iostream>
#include<string>
using namespace std;
class practical;
class student
{
    private:
        int id , sub1 , sub2;
        string name;
    public:
        void getdata()
        {
            cout<<"Enter the student the id : ";
            cin>>id;
            cout<<"Enter the student name : ";
            cin>>name;
            cout<<"Enter the marks of subject 1 : ";
            cin>>sub1;
            cout<<"Enter the marks of subject 2 : ";
            cin>>sub2;
        } 
        void display()
        {
            cout<<"The student id is : "<<id<<endl;
            cout<<"The student name is : "<<name<<endl;
            cout<<"The marks of subject 1 are : "<<sub1<<endl;
            cout<<"The marks of subject 2 are : "<<sub2<<endl;
        }
        friend void sum(student,practical);
};
class practical
{
    private:
        int pt , drawing;
    public:
        void getdata()
        {
            cout<<"Enter the marks of pt : ";
            cin>>pt;
            cout<<"Enter the marks of drawing : ";
            cin>>drawing;
        }
        void display()
        {
            cout<<"The marks of pt are : "<<pt<<endl;
            cout<<"The marks of drawings are : "<<drawing<<endl;
        }
        friend void sum(student,practical);
};
void sum(student s,practical p)
{
    int total = s.sub1 + s.sub2 + p.pt + p.drawing;
    float pre = total/4;
    cout<<"The total is : "<<total<<endl;
    cout<<"precentage is :"<<pre<<endl;
}
int main()
{
    student s;
    practical p;
    s.getdata();
    p.getdata();
    s.display();
    p.display();
    sum(s,p);
    return 0;
}