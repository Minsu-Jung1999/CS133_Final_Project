#pragma once
#include <iostream>
#include <set>
using namespace std;

class ListNode
{
public:
  ListNode();
  ListNode* next;
  string title;
  set<string> genre;
  string description;
private:

};
