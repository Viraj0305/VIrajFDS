#include<iostream>
using namespace std;

int main()
{
    cout<<"Square Pattern"<<endl;

    for (int i=0;i<5;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}