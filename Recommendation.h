#ifndef _RECOMMENDATION_H_
#define _RECOMMENDATION_H_

#include "ListNode.h"
#include <string>

class Recommendation {
private:
  ListNode *root;

public:
  Recommendation(string input);
  string toString();
};

#endif