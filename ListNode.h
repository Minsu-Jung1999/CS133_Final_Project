#include <string>
using namespace std;

struct ListNode{
  string title;
  ListNode* next;

  ListNode();
  ListNode(string title);
  ListNode(string title, ListNode*next);
};