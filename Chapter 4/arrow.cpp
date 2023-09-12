#include <iostream>
using namespace std;

int main() {
   int width;
   int height;
   int ahw;
   
   int randomNum;
   int anotherNum = 0;
   char star = '*';
   
   int i;
   int j;
   
   cin >> height;
   cin >> width;
   cin >> ahw;
   cin >> randomNum;
   cin >> anotherNum;
   
   for (i = 0; i < height; i++) {
      for (j = 0; j < width; j++) {
            cout << star;
      }
         cout << endl;
   }
   
   if (anotherNum > 0) {
      for (i = anotherNum; i >= 1; i--) {
         for (j = 1; j <= i; j++) {
            cout << star;
         }
         cout << endl;
      }
   } else {
      for (i = ahw; i >= 1; i--) {
         for (j = 1; j <= i; j++) {
            cout << star;   
         }
      
      cout << endl;
      }   
   }
   
   
   return 0;
}
