#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

string FirstReverse(string str) {

	// create a new string of equal length
	string newString = str;	
	int strlength = newString.length();

	// copy the chars in reverse order
	for (int i = 0; i < strlength; i++)
		newString[i] = str[strlength - 1 - i];

	// code goes here   
	return newString;

}

int main() {

	// get the user string
	string usrStr;
	cout << "Please enter a string to reverse: ";
	cin >> usrStr;
	
	// keep this function call here
	cout << FirstReverse(usrStr);
	return 0;

}