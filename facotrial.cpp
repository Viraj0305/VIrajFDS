#include <iostream>
using namespace std;
int factorial(int value){
     int fact;

    for(int i=value-1;i>=1;i--)
    {
        fact=i*value;
        value=fact;
    }
    return fact;

}
int main()
{
    int num;
    printf("Enter number=");
    scanf("%d",&num);
    printf("num=%d \n", num);
    int result=factorial(num);
    cout<<"Factorial of a number is="<<result<<endl;

   
}