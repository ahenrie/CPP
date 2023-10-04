#include <iostream>
#include <string>
#include <sstream>
using namespace std;

char get_choice() {
   char choice;
   cout << endl << endl << "Choose an option:" << endl;
   cin >> choice;
   
   return choice;
   cin.ignore();
   }

int GetNumOfNonWSCharacters(const string &story) {
   int count = 0;
   
   for (char c : story) {
      if (!isspace(c)) {
         count++;
         }
      }
   return count;
   }
   
int GetNumOfWords(const string &story) {
   stringstream ss(story);
   string word;
   
   int count = 0;
   
   while (ss >> word) {
      count++;
      }
   
   return count;
   }
   
int FindText(const string phrase, const string &story) {
    int count = 0;
    size_t pos = 0;

    pos = story.find(phrase, pos);

    while (pos != string::npos) {
        count++;
        pos = story.find(phrase, pos + 1);
    }
   
    return count;
}

void ReplaceExclamation(string &story) {
   for (int i = 0; i < story.length(); i++) {
      if (story[i] == '!') {
         story[i] = '.';
      }   
   }
}

void ShortenSpace(string &story) {
   for (int i = 0; i < story.length() - 1; i++) {
      if (story[i] == ' ' && story[i + 1] == ' ') {
         story.erase(i, 1);
         i--;
      }   
   }   
}

void return_story(const string &story) {
   cout << endl <<  "You entered:" << " " << story << endl << endl;
   }
   
string take_story() {
   string s;
   cout << "Enter a sample text:" << endl;
   getline(cin, s);
   
   return_story(s);
   
   return s;
   }
   
void PrintMenu() {
    cout << "MENU" << endl 
         << "c - Number of non-whitespace characters" << endl
         << "w - Number of words" << endl
         << "f - Find text" << endl
         << "r - Replace all !'s" << endl
         << "s - Shorten spaces" << endl
         << "q - Quit";
}

   
void ExecuteMenu(char c, string story) {
   string key;
   
   switch(c) {
      case 'c':
         cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(story) << endl << endl;
         //PrintMenu();
         break;
      case 'w':
         cout << "Number of words: " << GetNumOfWords(story) << endl << endl;
         break;
      case 'f':
         cout << endl << "Enter a word or phrase to be found:" << endl;
         cin.ignore();
         getline(cin, key);
         cout << "\"" << key << "\"" << " instances: " << FindText(key, story) << endl << endl;
         //PrintMenu();
         break;
      case 'r':
         ReplaceExclamation(story);
         cout << "Edited text: " << story << endl << endl;
         //PrintMenu();
         break;
      case 's':
         ShortenSpace(story);
         cout << "Edited text: " << story << endl << endl ;
         //PrintMenu();
         break;
      case 'q':
         break;
      default:
         break;
      }
   }
   
   
int main() {
   string story = take_story();
   PrintMenu();
   char choice = get_choice();
   if (choice != 'q') {
      ExecuteMenu(choice, story);
      PrintMenu();
      choice = get_choice();
   }
   else { return 0;}
   

   return 0;
}
