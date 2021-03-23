//using continue statement in a conditional statement
#include<iostream>
using namespace std;

int main()
{
    int i=0;
    while(i<10){
        if(i==5){
            continue;     //Here if the if condition get satisfies then 5 wil not be printed and then stop printing further numbers
        }
        cout<<i<<endl;
        i++;
    }
    return 0;
}