// we get to known about the different ways to intialize an data member in constructor
#include<iostream>
using namespace std;

class CallofDuty
{
    int kills;
    int rank;
    public:
       //CallofDuty(int i,int j) : kills(i),rank(j)
       //CallofDuty(int i,int j) : kills(2*i),rank(i+j)
       //CallofDuty(int i,int j) : kills(i),rank(kills+j)
        //CallofDuty(int i,int j) : rank(j),kills(rank+i) // this will give a garbage value of kills as we can't use rank because kill was 
                                                        // declared before rank in the class 
       CallofDuty(int i,int j):kills(i)
       {   
           rank=j;
           cout<<"\nYou killed "<<kills<<" people in Call of Duty "<<endl;
           cout<<"\nYour rank in the game is "<<rank<<endl;
       }
};

int main()
{   
    int a,b;

    cout<<"\nEnter the Total kills you have in COD "<<endl;
    cin>>a;
    cout<<"\nEnter your rank in COD "<<endl;
    cin>>b;
    
    CallofDuty COD(a,b);
    return 0;
}