#include <string>
#include <iostream>

using namespace std;

int main() {
   string inputName;
   int age;
   // Set exception mask for cin stream
   cin.exceptions(ios::failbit);

   cin >> inputName;
   while(inputName != "-1") {
      // FIXME: The following line will throw an ios_base::failure.
      //        Insert a try/catch statement to catch the exception.
      //        Clear cin's failbit to put cin in a useable state.
      try {
         cin >> age;
      } catch (const ios_base::failure& e) {
         cin.clear();
         string garbage;
         getline(cin, garbage);
         age = -1;
      }
      
      cout << inputName << " " << (age + 1) << endl;

      cin >> inputName;
   }
   
   return 0;
}
