#include<iostream>
using namespace std;
void printmatrix(int r,int c,int mat[][10])
{
      cout<<"Element of matrix="<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          cout<<mat[i][j]<<" ";

          
        }
        cout<<endl;
    }

}

int accept(int l,int m,int mat[][10])
{
    cout<<"Enter Values for Matrix"<<endl;
    for (int i=0;i<l;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    printmatrix(l,m,mat);
 
}



void Addition(int r1,int c1,int r2,int c2,int mat1[10][10],int mat2[10][10])
{
    int mat[10][10];
    for ( int i = 0; i<r1; i++)
    {
      for(int j=0;j<c1;j++)
      {
       mat[i][j]= mat1[i][j]+mat2[i][j];
      }
    }
    printmatrix(r1,c1,mat);
}

void Subtraction(int r1,int c1,int r2,int c2,int mat1[10][10],int mat2[10][10])
{
    int mat[10][10];
    for ( int i = 0; i<r1; i++)
    {
      for(int j=0;j<c1;j++)
      {
       mat[i][j]= mat1[i][j]-mat2[i][j];
      }
    }
    printmatrix(r1,c1,mat);
}

int main()
{

    int r1,r2,c1,c2,ch;
    cout<<"Enter number of rows and columns for matrix 1=";
    cin>>r1>>c1;

    cout<<"Enter number of rows and columns for matrix 2=";
    cin>>r2>>c2;



    int mat1[10][10];
    int mat2[10][10];
   int i;
   
   while(i=1)
   {
    
    cout<<"1.Enter values in matrix1"<<endl;
    cout<<"2.ADDITION"<<endl;
    cout<<"3.SUBTRACTION"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter your choice=";
    cin>>ch;
    
    
    if(ch==1){
        accept(r1,c1,mat1);
        accept(r2,c2,mat2);
    }
       

   if(ch==2){
       Addition(r1,c1,r2,c2,mat1,mat2);
   }
       
    if(ch==3){
        Subtraction(r1,c1,r2,c2,mat1,mat2);
    }
    
    if(ch==4)
    {
        cout<<"Exiting loop"<<endl;
        break;
    }
        
    }

}