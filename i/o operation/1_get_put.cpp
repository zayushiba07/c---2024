#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    char a[100];
    
    cout << "Enter the string: ";
    cin.get(a[0]);  // read first character

    while (a[count] != '\n')  // keep reading until newline
    {
        count++;
        cin.get(a[count]);  // read next character
    }

    a[count] = '\0';  // terminate string correctly

    cout << "String is: " << a << endl;
    cout << "String length is: " << count << endl;

    count = 0;
    while (a[count] != '\0')
    {
        cout.put(a[count]);
        count++;
    }

    return 0;
}
