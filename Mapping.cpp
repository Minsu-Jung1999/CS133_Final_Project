#include "Mapping.h"
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

Mapping::Mapping() {
  // initialize map to empty
}

//return the current map
map<string, set<string>> Mapping::getMap(){
  return movies;
}

void Mapping::readFromFile(string filename) {
  string line;
  ifstream file;
  file.open(filename);
  while (getline(file, line)) {

    string title;
    title = line.substr(7);

    getline(file, line); // gets genres line
    string g;
    g = line.substr(7);

    getline(file, line);
    string description; // unused?
    description = line.substr(13);

    // add each genre into genres set
    set<string> genres;
    string curGenre;

    for (int i = 0; i < g.length(); i++) {
      // adds each genre from the line to the genres set
      if (g[i] == ',') {
        curGenre = g.substr(0, i);
        genres.insert(curGenre);
        g = g.substr(i + 2);
        i = 0;
      } else if (i == g.length() - 1) {
        curGenre = g;
        genres.insert(curGenre);
      }
    }

    // sets the map pair at the key of the title to the value of the genres
    movies[title] = genres;
  }
}