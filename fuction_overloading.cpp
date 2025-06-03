#include<iostream>
using namespace std;

class fuctionoverload
{
public:
    int sum(int a, int b)
    {
        cout << "two parameters with integer"<<endl;
        return (a + b);
    }

    double sum(int a, double b)
    {
        cout << "two parameters with integer and double"<<endl;
        return (a + b);
    }

    double sum(int a, int b, double c)
    {
        cout << "three parameters are passed like int, int, and double"<<endl;
        return (a + b + c);
    }

    float sum(float a, float b)
    {
        cout << "two parameters using float"<<endl;
        return (a + b);
    }
};

int main()
{
    int a, b, c, d;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    cout << "Enter the fourth number: ";
    cin >> d;

    fuctionoverload f1;

    cout<< f1.sum(a, b)<<endl;
    cout<< f1.sum(b, c)<<endl;
    cout<< f1.sum(a, c, d)<<endl;
    cout<< f1.sum(c, d)<<endl;

    return 0;
}
