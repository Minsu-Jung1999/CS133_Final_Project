#include "InputValidator.h"

InputValidator::InputValidator()
{
	// empty constructor.
}

bool InputValidator::genreCheck(string input)
{
	// If it is nullptr, return false
	if (input.empty()) {
		cout << "Input is null or empty." << endl;
		return false;
	}

	// default return value @@@ Should change it @@@
	return false;
}
