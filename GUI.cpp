#include "GUI.h"
#include "Mapping.h"
#include "Recommendation.h"
#include <map>


GUI::GUI()
{
    // empty
}


// Function to print the given string slowly with a specified delay
void GUI::printSlowly(const std::string& str, int delay) {
    for (char c : str) {
        if (c == '\n') {
            // If a newline character is encountered, calculate the appropriate number of newlines based on console width
            int screenWidth = 80;  // Assuming a console width of 80 characters
            int charsPerLine = screenWidth - 1;  // Including the newline character

            // Calculate the number of newlines needed
            int newlineCount = charsPerLine - 1;

            // Output a newline character
            std::cout << '\n';

            // Pause for a while to create a slow printing effect
            std::this_thread::sleep_for(std::chrono::milliseconds(delay));
        }
        else {
            // If the character is not a newline, print it directly
            std::cout << c;
        }
    }
}

void GUI::start()
{
    // NETFLIX String data
    string netflix =
        "    _   __    ______   ______    ______    ____    __      _  __\n"
        "   / | / /   / ____/  /_  __/   / ____/   /  _/   / /     | |/ /\n"
        "  /  |/ /   / __/      / /     / /_       / /    / /      |   / \n"
        " / /|  /   / /___     / /     / __/     _/ /    / /___   /   |  \n"
        "/_/ |_/   /_____/    /_/     /_/       /___/   /_____/  /_/|_|  \n";

    // Print the string vertically with a specified delay
    printSlowly(netflix, 100);  // Print with a 100-millisecond interval

    // Display a message after the printing is complete, and wait for any key press from the user
    cout << "\n\nPrinting complete. Press any key to continue...";
    cin.get();  // Wait for user input
}

void GUI::restult()
{
  // print out the result for the user from Recommendation.toString() 
  string input;
  cout << "Which genre do you want to watch? ";
  cin >> input;
  
  Mapping mapp;
  map<string, set<string>> movieMap;
  movieMap = mapp.getMap();
  Recommendation rec(movieMap);

  cout << rec.toString(input);

}