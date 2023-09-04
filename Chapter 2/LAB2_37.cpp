#include <iostream>
#include <iomanip>              // needed for setprecision() and fixed
#include <cmath>                // needed for ceil()
using namespace std;

int main() {
   /* Type your code here. */
   cout << fixed << setprecision(1);
   
   double wall_height;
   double wall_width;
   double can_cost;
   
   cin >> wall_height;
   cin >> wall_width;
   cin >> can_cost;
   
   double wall_area = wall_height * wall_width;
   double paint_req = wall_area / 350.0;
   
   cout << "Wall area: " << wall_area << " sq ft" << endl;
   cout << "Paint needed: " << fixed << setprecision(3) << paint_req << " gallons" << endl;
   cout << "Cans needed: " << int(ceil(paint_req)) << " can(s)" << endl;
   
   cout << fixed << setprecision(2);
   
   cout << "Paint cost: " << "$" << int(ceil(paint_req)) * can_cost << endl;
   cout << "Sales tax: " << "$" << (int(ceil(paint_req)) * can_cost) * 0.07 << endl;
   cout << "Total cost: " << "$" << (int(ceil(paint_req)) * can_cost) * 1.07 << endl;

   return 0;
}
