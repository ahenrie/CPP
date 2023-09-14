#include <iostream>
#include <vector>
using namespace std;

int getjersey() {
   int jnumber;
   cout << "Enter a jersey number:" << endl;
   cin >> jnumber;
   return jnumber;
   }
   
int getrating() {
   int rating;
   cout << "Enter a rating:" << endl;
   cin >> rating;
   return rating;
   }

int main() {

   vector<int> jerseys;
   vector<int> ratings;
   
   for (int i=0; i<5; i++) {
      jerseys.push_back(getjersey());
      ratings.push_back(getrating());
      }

   cout << "ROSTER" << endl;
   for (int i=0; i < jerseys.size(); i++) {
      cout << "Player " <<  i + 1 << " -- Jersey number: " << jerseys[i] << ", Rating: " << ratings[i] << endl; 
      //Player 1 -- Jersey number: 84, Rating: 7
      }
  
   return 0;
}
