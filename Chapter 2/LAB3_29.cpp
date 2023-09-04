#include <iostream>
#include <string>
using namespace std;

int main() {

   string firstName;
   string middleName;
   string lastName;
   
   cin >> firstName;
   cin >> middleName;
   cin >> lastName;
   
   if (lastName.empty()) {
      // if no middle name 
      cout << middleName << ", " << firstName[0] << "." << endl;
      }
   
   else {
      // if there is a middleName
      cout << lastName << ", " << firstName[0] << "." << middleName[0] << "." << endl; 
      }

   return 0;
}
