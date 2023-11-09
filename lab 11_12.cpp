#include <iostream>
#include <string>

using namespace std;

int GetMonthAsInt(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

bool isCorrect(string &monthString) {
    if (monthString.find(",") != string::npos && monthString.find(" ") != string::npos) {
        return false;
    } else {
        return true;
    }
}

int main () {
	
	// TODO: Read dates from input, parse the dates to find the ones
	//       in the correct format, and output in m-d-yyyy format
	
	string stringLine;
	getline(cin, stringLine);
	
	while (stringLine != "-1") {
	   //cout << isCorrect(stringLine) << endl;
	   
	   if (isCorrect(stringLine) == 0) {
	      
	      // Get month substring
	      size_t firstSpace = stringLine.find(" ");
	      string month = stringLine.substr(0, firstSpace);
	      
	      //Get day substring
	      size_t comma = stringLine.find(",");
	      string day = stringLine.substr(firstSpace + 1, comma - firstSpace - 1);
	      
	      //Get year substring
	      string year = stringLine.substr(comma + 2, 4);
	      
	      int Num = GetMonthAsInt(month);
	      
	      cout << Num << "-" << day << "-" << year << endl;
	      
	      //cout << month << "|" << day <<"|" << year << endl;
	      }
	   getline(cin, stringLine);
	   }
}
