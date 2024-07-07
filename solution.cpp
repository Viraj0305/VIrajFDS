#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number=";
    cin>>num;
    string word[9]={"one","two","three","four","five","six","seven","eight","nine"};
    
    if(num>0 && num<=9)
    {
        cout<<"the number is "<<word[num-1]<<endl;
    }

    else{
        cout<<"Invalid input"<<endl;
    }


}