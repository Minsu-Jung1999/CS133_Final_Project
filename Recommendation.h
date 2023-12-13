#ifndef _RECOMMENDATION_H_
#define _RECOMMENDATION_H_

#include "ListNode.h"
#include <string>
#include <map>

class Recommendation {
private:
  ListNode *root;

public:
  Recommendation(map<string, set<string>> map);
  string toString(string input);
};

#endif