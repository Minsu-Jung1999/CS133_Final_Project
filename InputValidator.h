#pragma once
#include <iostream>
using namespace std;

class InputValidator
{
private:

public:
	
	InputValidator();

	// Check if the genre entered by the user is present...
	//  in the Map data and return true/false.
    // Parameter: input - string data from the user's input
	bool genreCheck(std::string input);

};

