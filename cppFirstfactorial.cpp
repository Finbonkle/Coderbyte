#include <iostream>
#include <sstream>

using std::cin;
using std::cout;
using std::string;
using std::getline;
using std::stringstream;


// verify user input
int validInt(int max, int min);

int main()
{
	// get an integer from the user
	cout << "Please enter an integer: ";
	int usrInt;
	usrInt = validInt(100, 0);
	
	// perform the factorial
	int product = 1, i = 1;
	for (i = 1; i <= usrInt; i++)
		product *= i;

	cout << product;

}


/**********************************************************************
**Description: this function validates the user input as an integer
**********************************************************************/
int validInt(int max, int min)
{
	//establish an integer variable
	int someInt;

	//is the desired input an integer? start with the assumption that it is not
	bool isInt = false;

	//accept user input
	string user_input;

	//prompt user to reenter data so long as it is invalid
	do
	{

		getline(cin, user_input);
		stringstream sStream(user_input);

		//if the string can be converted and contains no additional input, then good input
		if (sStream >> someInt && !(sStream >> user_input))
		{
			if (someInt < min || someInt > max)
				cout << "Please select a valid integer from " << min << " to " << max << ": ";
			else
				isInt = true;
		}
		else
			cout << "Please select a valid integer from " << min << " to " << max << ": ";
	} while (isInt == false);

	return someInt;

}