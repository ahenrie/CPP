#include <iostream>
#include <vector> 
#include <string>
#include <cctype>
using namespace std;


string lowerString(const string& input) {
   string result = input;
   for (char& c : result) {
      c = tolower(c);
      }
   return result;
   }


int GetWordFrequency(const vector<string> wordsList, const string& currWord) {
   int count = 0;
   
   string lowerCurrentWord = lowerString(currWord);
   
   for (const string& word : wordsList) {
      string lowerWord = lowerString(word);
      if (lowerWord == lowerCurrentWord) {
         count++;
         }
      } 
   
   return count;
   
   }


int main() {
   int vecLength;
   string wordIn;
   
   cin >> vecLength;
   vector<string> listOfWords;
   
   for (int i = 0; i < vecLength; i++) {
      cin >> wordIn;
      listOfWords.push_back(wordIn);
      }

   for (const string& word : listOfWords) {
      int totalCount = GetWordFrequency(listOfWords, word);
      cout << word << " " << totalCount << endl;
      
      }
      
   return 0;
   
   
}
