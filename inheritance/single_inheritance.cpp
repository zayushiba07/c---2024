#include<iostream>
using namespace std;

class square
{
    public:
        int getsquare(int number)
        {
            int answer = number * number;
            return answer;
        }
};
class cube:public square
{
    public:
        int getcube(int number)
        {
            int answer = getsquare(number)*number;
            return answer;
        }
};
int main()
{
    int number;
    cout<<"Enter the number";
    cin>>number;
   // square s1;
   // cout<<"square is :"<<s1.getsquare(number);
    cube c1;
    cout<<"square is :"<<c1.getsquare(number)<<endl;
    cout<<"cube is :"<<c1.getcube(number);
    return 0;
}