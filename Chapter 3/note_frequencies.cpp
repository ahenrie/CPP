#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
   
   cout << fixed << setprecision(2);
   
   float initial_key;
   float calc = pow(2, 1.0/12.0);
   float key1;
   float key2;
   float key3;
   
   //cout << "Enter the initial key: ";
   cin >> initial_key;
   
   cout << initial_key << " Hz" << endl;
   
   key1 = initial_key * calc;
   cout << key1 << " Hz" << endl;
   
   key2 = initial_key * pow(calc, 2);
   cout << key2 << " Hz" << endl;
   
   key3 = initial_key * pow(calc, 3);
   cout << key3 << " Hz" << endl;
   

   return 0;
}
