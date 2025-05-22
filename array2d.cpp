#include<iostream>
using namespace  std;
int main()
{

    int rows = 2;
    int cols = 2;

    int a[rows][cols];

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"i["<<i<<"]"<<"j["<<j<<"]";
            cin>>a[i][j];
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}  
