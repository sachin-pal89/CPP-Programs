//here we will create a function
#include <iostream>
#include <iomanip>
using namespace std;

float calci(float, float);
int main()
{

      float a, b;
      cout << "For addition: 1" << endl;
      cout << "For subtraction: 2" << endl;
      cout << "For multiplication: 3" << endl;
      cout << "For Division: 4" << endl;
      cout << "\nEnter the numbers whose operations is to be performed" << endl;
      cin >> a >> b;
      cout << fixed << setprecision(2) << calci(a, b) << endl;
      return 0;
}

float calci(float x, float y)
{
      int code;
      float f;
      cout << "\nEnter code for the operation you want to perform " << endl;
      cin >> code;
      switch (code)
      {
      case 1:
            f = x + y;
            break;
      case 2:
            f = x - y;
            break;
      case 3:
            f = (x * y);
            break;
      case 4:
            f = (x / y);
            break;
      default:
            f = 0;
            break;
      }
      cout << "The result is ";
      return f;
}
