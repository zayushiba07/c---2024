#include<iostream>
using namespace std;

template<class t1>
class array
{
private:
    int length;
    t1 *arr;
public:
    array(int size = 0)
    {
        cout << "Constructor called" << endl;
        length = size;
        arr = new t1[length];
    }

    t1& operator[](int index)
    {
        if (index >= length || index < 0) {
            cout << "Index out of bounds!" << endl;
            exit(1);
        }
        return arr[index];
    }

    ~array()
    {
        cout << "Destructor is called..." << endl;
        delete[] arr;
    }
};

int main()
{
    int i;
    const char* number[] = {
        "zero","one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    array<long int> integer(5);
    int digit;
    long int no;

    for(i = 0; i < 5; i++)
    {
        cout << "Enter number [" << i + 1 << "]: ";
        if (!(cin >> integer[i]))
        {
            cout << "Invalid value you entered." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            i--;
        }
    }

    for(i = 0; i < 5; i++)
    {
        no = integer[i];
        cout << "Original number is: " << no << endl;
      
            while(no > 0)
            {
                digit = no % 10;
                cout << "size: " << number[digit] << endl;
                no = no / 10;
            }
        }

        cout << "Confirm number: " << integer[i] << endl;
    return 0;
}
