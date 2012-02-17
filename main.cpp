// Name: Devan Beitel
// Date: 25.02.2010
// Assignment: program3
// Purpose: Calculate a number of seconds into either days, hours, or minutes
// Built with Xcode, Compiled and Debugged on Xcode and VC++

#include <iostream>
using namespace std;

int main()
{
	int input;
	
	//Get number of seconds to convert
	cout << "\nEnter any number of seconds: ";
	cin  >> input;
	
	//Convert entered number of seconds
	int days = input / 86400;
	input -= days * 86400;
	
	int hours = input / 3600;
	input -= hours * 3600;
	
	int minutes = input / 60;
	input -= minutes * 60;
	
	//Display converted amount of seconds
	cout << "\nOutput: ";
	
	if(days > 0) 
		{
			cout << days  << " days, " << hours << " hours, " << minutes << " minutes, and " << input << " seconds";
		}ykkgl
	else if (hours > 0)
		{
			cout << hours << " hours, " << minutes << " minutes, and " << input << " seconds";
		}
	else if (minutes > 0)
		{
			cout << minutes << " minutes, and " << input << " seconds";
		}
	else
		{
			cout << input << " seconds";
		}
	return 0;
}