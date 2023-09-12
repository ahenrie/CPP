#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//function to remove spaces
string removeSpaces (const string& input) {
   string result;
   
   for (char character : input) {
      if (character != ' ') {
         result += character;
         }
      }
      
      return result;
   }
   
bool isPalindrome(const string& phrase) {
   int start = 0;
   int end = phrase.length() - 1;
   
   while (start < end) {
      while (!isalnum(phrase[start])) {
         start++;
      }
      while (!isalnum(phrase[end])) {
         end--;
      }
       
      if (tolower(phrase[start]) != tolower(phrase[end])) {
         return false;
      }
         
      start++;
      end--;
      
   }
   
      return true;
}

int main() {

   string withspaces;
   
   getline(cin, withspaces);
   
   string nospaces = removeSpaces(withspaces);
   
   if(isPalindrome(nospaces)) {
      cout << "palindrome: " << withspaces << endl;
   } else {
      cout << "not a palindrome: " << withspaces << endl;
   }
   
   
   

   return 0;
}
