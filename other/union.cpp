//This program would make us aware of union
#include <iostream>
using namespace std;

union student
{ //union will only consume 4 bytes since it will only wok for one member and thus should have minimum bytes reqiure to shoe bigger one
  int id;
  int roll_no;
  char grade;
  float marks;
};
int main()
{
  union student sachin;
  cout << "Enter student id " << endl;
  cin >> sachin.id;
  cout << "\nEnter student roll no " << endl;
  cin >> sachin.roll_no;
  cout << "\nEnter student grade " << endl;
  cin >> sachin.grade;
  cout << "\nEnter student marks " << endl;
  cin >> sachin.marks;

  cout << "\nSachin's id is " << sachin.id << endl;           //will give a garbage value since .roll_no overwrite it
  cout << "\nSachin's roll no is " << sachin.roll_no << endl; //will give a garbage value since .grade overwrite it
  cout << "\nSachin's grade is " << sachin.grade << endl;     //will give a garbage value since .marks overwrite it
  cout << "\nSachin's marks is " << sachin.marks << endl;     //This will give the perfect value since it's the last value and thus union give it

  return 0;
}