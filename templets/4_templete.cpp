#include<iostream>
using namespace std;
template<class p1>
class array
{
    private:
         int length;
         p1 *arr;
    public:
        array(int size = 0)
        {
            cout<<"constructor is called..."<<endl;
            length=size;
            arr = new p1[length];

            for(int i=0;i<length;i++)
            {
                cout<<"Enter ["<<i+1<<"]";
                cin>>arr[i];
            }
        }
        p1 operator ++()
        {
            p1 sum=0;
            for(int i=0;i<length;i++)
            {
                sum+=arr[i];
            }
            return sum;
        }
        ~array()
        {
            delete[] arr;
            cout<<"destructor is called..."<<endl;;
        }
};
int main()
{   
    int s1=0;
    cout<<"Enter the index you want to use:";
    cin>>s1;
    array<int> a1(s1);
    int total = ++a1;
    cout<<"total is :"<<total<<endl;
    return 0;   
}