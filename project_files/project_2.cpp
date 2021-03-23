//Here we will create a odd-even checker using array and pionters
#include<iostream>
using namespace std;

int main()
{   int n;
    int ele[n+1];
    int *pio;
    cout<<"How many number you want to check"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" numbers"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ele[i];
    }
     
    pio=ele;
    for(int j=0;j<n;j++)
    {
        if(((*(pio+j))%2==0) || ((*(pio+j))<1))
        {
            cout<<*(pio+j)<<" is even "<<endl;
        }
        else
        {
            cout<<*(pio+j)<<" is odd "<<endl;
        }

    }
    return 0;
}