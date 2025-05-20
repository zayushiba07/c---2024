#include<iostream>
#include<iomanip>  // For setw
#include<string>
using namespace std;

int main()
{
    int size = 3;

    int id[size] = {101, 102, 103};
    string name[size] = {"apple", "banana", "orange"};
    int price[size] = {200, 300, 400};
    int qty[size] = {20, 30, 40};

    cout << "Product List:\n";
    cout << "==============================================\n";
    cout << setw(10) << "ID"
         << setw(15) << "Name"
         << setw(10) << "Price"
         << setw(10) << "Qty" << endl;
    cout << "----------------------------------------------\n";

    for (int i = 0; i < size; i++)
    {
        cout << setw(10) << id[i]
             << setw(15) << name[i]
             << setw(10) << price[i]
             << setw(10) << qty[i] << endl;
    }

    return 0;
}
