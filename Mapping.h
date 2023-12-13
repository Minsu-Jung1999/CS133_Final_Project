#ifndef _MAPPING_H_
#define _MAPPING_H_

#include <string>
#include <map>
#include <set>
#include <iostream>
#include <fstream>
#include "ListNode.h"
using namespace std;

class Mapping{
private:
  map<string, set<string>> movies;

public:
  Mapping();
  map<string, set<string>> getMap();
  
  void readFromFile(string filename); 
};

#endif