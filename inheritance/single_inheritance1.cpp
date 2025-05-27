#include<iostream>
using namespace std;

class kilo
{
    public:
    int gram(int number)
    {
        int ans = number/1000;
        return ans;
    }
};
class ton:public kilo
{
    public:
    int kilo(int number)
    {
        int ans = gram(number)/1000;
        return ans;
    }
};
int main()
{
    int number;
    cout<<"Enter the gram :";
    cin>>number;
    ton t1;
    cout<<"gram covert into kilogram :"<<t1.gram(number)<<endl;
    cout<<"gram conveert into ton :"<<t1.kilo(number)<<endl;
    return 0;
}