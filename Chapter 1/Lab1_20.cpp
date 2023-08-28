#include <iostream>
using namespace std;

int main() {
   int userNum;

   cout << "Enter integer:" << endl;
   cin  >> userNum;
   
   cout << "You entered: " << userNum << endl;
   cout << userNum << " squared is " << userNum * userNum << endl;
   cout << "And " << userNum << " cubed is " << userNum * userNum * userNum << "!!" << endl;
   
   int otherNum;
   
   cout << "Enter another integer:" << endl;
   cin >> otherNum;
   
   cout << userNum << " + " << otherNum << " is " << userNum + otherNum << endl;
   cout << userNum << " * " << otherNum << " is " << userNum * otherNum << endl;

   return 0;
}
