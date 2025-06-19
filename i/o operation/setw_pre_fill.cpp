#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    const int SIZE = 2;
    int pid[SIZE], qty[SIZE], price[SIZE];
    string name[SIZE];

    cout << "Enter the product list" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << "\nProduct " << i + 1 << " details:\n";
        cout << "Enter product id: ";
        cin >> pid[i];
        cout << "Enter product name: ";
        cin>>name[i];
        cout << "Enter product price: ";
        cin >> price[i];
        cout << "Enter product quantity: ";
        cin >> qty[i];
    }

    // Table Header with '*' fill
    cout << "\n\n";
    cout.fill('*');
    cout << setw(60) << "" << endl; // Line of *****

    // Reset fill to space for header content
    cout.fill(' ');
    cout << setw(10) << left << "Prod ID"
         << setw(20) << "Name"
         << setw(10) << "Price"
         << setw(10) << "Qty"
         << setw(10) << "Total" << endl;

    cout.fill('*');
    cout << setw(60) << "" << endl; // Line of *****

    for(int i = 0; i < SIZE; i++)
    {
        int total = price[i] * qty[i];
        cout.fill(' ');
        cout << setw(10) << left << pid[i]
             << setw(20) << name[i]
             << setw(10) << price[i]
             << setw(10) << qty[i]
             << setw(10) << total << endl;
    }

    cout.fill('*');
    cout << setw(60) << "" << endl; // Closing line of *****

    return 0;
}
