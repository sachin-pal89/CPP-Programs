//Here we are going to make a 2d-array 
#include<iostream>
using namespace std;

int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            a[i][j]=i+j;
        }
    }

    for(int m=0;m<5;m++)
    {
        for(int n=0;n<5;n++)
        {
           cout<<a[m][n]<<"\t";
           int f=m+n;
           if((f)%5==0)
           {
               cout<<"\n";
               
           }

        }
    }
    return 0;
}