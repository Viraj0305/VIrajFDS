
#include<iostream>
using namespace std;

int prime(int a)
{
    int count=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            count+=1;
        
        }
    }

    if(count>0){
        cout<<"Given number is not a prime"<<endl;
    }

    else{
        cout<<"Given number is  a prime"<<endl;
    }
}
int main()
{
int num;
cout<<"Enter Number=";
cin>>num;
prime(num);
}