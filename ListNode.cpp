#include "ListNode.h"

// creates a listnode storing empty string as title and next as nullptr
ListNode::ListNode(){ 
  title = "";
  next = nullptr;
}

// creates a listnode containing the passed in title with its next
// pointer set to nullptr
ListNode::ListNode(int title){
  this->title = title;
  next = nullptr;
}

// creates a listnode with the passed in title and its next pointing
// to the passed in node
ListNode::ListNode(int title, ListNode* next){
  this->title = title;
  this->next = next;
}