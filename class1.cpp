#include<iostream>
#include<string>
using namespace std;

class person//class created
{
    private:
        int age;
        string name;
        float weight;
    public:
        void putdata();
        void display();
        
};
void person::putdata()
{
    cout<<"person name is :";
    cin>>name;
    cout<<"person age is :";
    cin>>age;
    cout<<"person weight is :";
    cin>>weight;
}
void person::display()
{
    cout<<"============================="<<endl;
    cout<<"person name is :"<<name<<endl;
    cout<<"person age is :"<<age<<endl;
    cout<<"person weight is :"<<weight<<endl;
}
int main()
{
    person p1;//object created
    p1.putdata();//putdata call
    p1.display();//display call
    return 0;

}