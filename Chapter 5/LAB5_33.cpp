#include <iostream>
#include <vector>
using namespace std;

int getjersey() {
   int jnumber;
   cin >> jnumber;
   return jnumber;
   }
   
int getrating() {
   int rating;
   cin >> rating;
   return rating;
   }
   
char returnmenu () {
   char decision;
   cout << "MENU" << endl;
   cout << "a - Add player" << endl;
   cout << "d - Remove player" << endl;
   cout << "u - Update player rating" << endl;
   cout << "r - Output players above a rating" << endl;
   cout << "o - Output roster" << endl;
   cout << "q - Quit" << endl;
   cout << endl;
   
   //Take decision
   cout << "Choose an option:" << endl;
   cin >> decision;
   
   return decision;
   }
   
void outputroster(const vector<int>& jerseys, const vector<int>& ratings) {
   cout << "ROSTER" << endl;
   for (int i=0; i < jerseys.size(); i++) {
      cout << "Player " <<  i + 1 << " -- Jersey number: " << jerseys[i] << ", Rating: " << ratings[i] << endl; 
      //Player 1 -- Jersey number: 84, Rating: 7
      }
   cout << endl;
   }
   
void addplayer(vector<int>& jerseys, vector<int>& ratings) {
   cout << "Enter a new player's jersey number:" << endl;
   int newj = getjersey();
   cout << "Enter the player's rating:" << endl;
   int newr = getrating();
   
   jerseys.push_back(newj);
   ratings.push_back(newr);
   cout << endl;
   }
   
void deleteplayer(vector<int>& jerseys, vector<int>& ratings) {
   cout << "Enter a jersey number:" << endl;
   int jnumber = getjersey();
   
   for (int i = 0; i < jerseys.size(); i++) {
      if (jerseys[i] == jnumber) {
         jerseys.erase(jerseys.begin() + i);
         ratings.erase(ratings.begin() + i);
         return;
         }
      }
   }

void updateplayer(vector<int>& jerseys, vector<int>& ratings) {
   cout << "Enter a jersey number:" << endl;
   int jnumber = getjersey();
   
   for (int i = 0; i < jerseys.size(); i++) {
      if (jerseys[i] == jnumber) {
         cout << "Enter the player's rating:" << endl;
         int rating = getrating();
         ratings[i] = rating;
         return;
         }
      }
   }

void outputabove(const vector<int>& jerseys, const vector<int>& ratings) {
   cout << "Enter a rating:" << endl;
   int rating;
   cin >> rating;
   cout << endl;
   
   cout << "ABOVE " << rating << endl;
   for (int i = 0; i < jerseys.size(); i++) {
      if (ratings[i] > rating) {
         cout << "Player " << i + 1 << " -- Jersey number: " << jerseys[i] << ", Rating: " << ratings[i] << endl;
         }
      }
      cout << endl;
   }

int main() {
   string decision;
   vector<int> jerseys;
   vector<int> ratings;
   
   for (int i=0; i<5; i++) {
      cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
      jerseys.push_back(getjersey());
      
      cout << "Enter player " << i + 1 << "'s rating:" << endl << endl;
      ratings.push_back(getrating());
   }
   
   outputroster(jerseys, ratings);
   
   char choice;
   do {
      choice = returnmenu();
      
      switch(choice) {
         case 'a':
            addplayer(jerseys, ratings);
            break;
         case 'd':
            deleteplayer(jerseys, ratings);
            break;
         case 'r':
            outputabove(jerseys, ratings);
            break;
         case 'o':
            outputroster(jerseys, ratings);
            break;
         case 'u':
            updateplayer(jerseys, ratings);
         case 'q':
            break;
         }
      } while (choice != 'q');
   
   
   return 0;
}
