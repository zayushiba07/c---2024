#include<iostream>
using namespace std;

class max1
{
    private:
        int no1,no2;
    public:
        void putdata();
        void large();
        void display();
};
void max1::putdata()
{
    cout<<"Enter the no 1:";
    cin>>no1;
    cout<<"Enter the no 2:";
    cin>>no2;
}
inline void max1::display()
{
    cout<<"================"<<endl;
    cout<<"No1 :"<<no1<<endl;
    cout<<"No2 :"<<no2<<endl;
    large();//that also call the large fuction using 2nd method
}
void max1::large()
{
    if(no1>no2)
    {
        cout<<"no1 is greater than no2";
    }
    else
    {
        cout<<"no2 is greater than no1";
    }
}
int main()
{
    max1 m1;
    m1.putdata();
    m1.display();
    //m1.large(); //call the large fuction 
    return 0;
}