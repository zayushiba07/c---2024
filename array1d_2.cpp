#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    int size;
    cout<<"Enter product size";
    cin>>size;

    int* id = new int[size];
    string* name = new string[size];
    int* price = new int[size];
    int* qty = new int[size];

    cout<<"Enter your product data:\n";
    cout<<"===========================\n";
    for(int i=0;i<size;i++)
    {
        cout<<"product"<<(i+1)<<"\n";
        cout<<"ID :";
        cin>>id[i];
        cout<<"Name :";
        cin>>name[i];
        cout<<"price :";
        cin>>price[i];
        cout<<"qty :2";
        cin>>qty[i];
    }
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