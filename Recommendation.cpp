#include "Recommendation.h"
#include <map>


Recommendation::Recommendation(map<string, set<string>> map) {
  //unable to bring in the descriptions bc they are lost in the mapping class

  //loop through map and fill/create linkedlist

  //initializes the first element
  root = new ListNode();
  //delete this node after initializing list bc it will still be empty
  //i am only usign it to make the loop work;
  
  ListNode* cur;
  cur = root;

  for (const auto& pair: map) {
    //pair.first =  title
    //pair.second =  genres
    ListNode* n;
    n = new ListNode();
    n->title = pair.first;
    n->genre = pair.second;
    cur->next = n;
    cur= cur->next;
  }

  root = root->next;
  
}


string Recommendation::toString(string input) {
  string toReturn = "";

  // traverse linkedlist to find movies that have the specified genre (input) in their genre set
  ListNode* cur;
  cur = root;

  while(cur!=nullptr){
    
    set<string> genres = cur->genre;

    //if desired genre is found in genre set of this movie, add this movie's info to string to return
    if(genres.find(input) != genres.end()){
      
      toReturn += cur->title + " : ";
      //now loop through set to add each genre to toReturn
      for(string g : genres){
        toReturn += g + ", ";
      }
      toReturn += "\n";

      //this would be where to add description to the string toReturn, but that is currently impossible
      
    }
    cur = cur->next;
    
  }
  
  
  return toReturn;
}
