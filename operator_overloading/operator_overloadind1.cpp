#include <iostream>
using namespace std;

class minPlus
{
private:
    int x[5];
public:
    minPlus();             // Default constructor - input values
    minPlus(int a);    // Parameterized constructor - initialize zeros
    void display();
    minPlus operator-();
    minPlus operator+();
};

// Default constructor to take input from user
minPlus::minPlus()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the data " << i + 1 << ": ";
        cin >> x[i];
    }
}

// Constructor to initialize array to zeros
minPlus::minPlus(int a)
{
   
}
void minPlus::display()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "value " << i + 1 << ": " << x[i] << endl;
    }
}

minPlus minPlus::operator+()
{
    minPlus temp(1);  // Create temp object initialized with zeros
    for (int i = 0; i < 5; i++)
    {
        temp.x[i] = x[i] + 2;  // Add 2 to each element
    }
    return temp;
}

minPlus minPlus::operator-()
{
    minPlus temp(1);  // Create temp object initialized with zeros
    for (int i = 0; i < 5; i++)
    {
        temp.x[i] = x[i] - 2;  // Subtract 2 from each element
    }
    return temp;
}

int main()
{
    cout << "Enter values for m1:" << endl;
    minPlus m1;
    cout << "\nm1 values:\n";
    m1.display();

    cout << "\nUsing operator + overload on m1:" << endl;
    minPlus m3 = +m1;
    m3.display();

    cout << "\nUsing operator - overload on m1:" << endl;
    minPlus m4 = -m1;
    m4.display();

    return 0;
}
