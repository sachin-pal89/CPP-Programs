//This program will tell us aboout structure in c++
#include <iostream>
using namespace std;

typedef struct student
{
  int id;
  int roll_no;
  char grade;
  float marks;
} st;
int main()
{
  st sachin;
  cout << "Enter student id " << endl;
  cin >> sachin.id;
  cout << "\nEnter student roll no " << endl;
  cin >> sachin.roll_no;
  cout << "\nEnter student grade " << endl;
  cin >> sachin.grade;
  cout << "\nEnter student marks " << endl;
  cin >> sachin.marks;

  cout << "\nSachin's id is " << sachin.id << endl;
  cout << "\nSachin's roll no is " << sachin.roll_no << endl;
  cout << "\nSachin's grade is " << sachin.grade << endl;
  cout << "\nSachin's marks is " << sachin.marks << endl;
  return 0;
}