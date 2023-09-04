#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   string direction;
   string highwayType;
   string service;
   int serviceTo;
   
   cin >> highwayNumber;

   // highwayType
   if (highwayNumber > 0 && highwayNumber < 100) {
      highwayType = "primary";
   }
   else if (highwayNumber > 100 && highwayNumber <= 999) {
      if (highwayNumber % 100 != 1 || highwayNumber % 100 != 2 || highwayNumber % 100 != 3 ) {
         highwayType = "auxiliary";
         }
      }
   
   // direction
   if (highwayNumber % 2 == 0) {
      direction = "east/west";
      }
   else {
      direction = "north/south";
      }
      
   // service
   if (highwayType == "auxiliary") {
      serviceTo = highwayNumber % 100;
      if (serviceTo == 0) {
         highwayType = "";
         }
      }
   else {
      //nothing
      }
   
   // cout final result
   if (highwayType == "primary") {
      cout << "I-" << highwayNumber << " is " << highwayType << ", going " << direction << "." << endl;
      }
   else if (highwayType == "auxiliary") {
      cout << "I-" << highwayNumber << " is " << highwayType << ", serving I-" << serviceTo << ", going " << direction << "." << endl;
      }
   else {
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
      }

      
   return 0;
}
