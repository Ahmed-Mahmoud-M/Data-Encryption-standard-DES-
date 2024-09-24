#include "../headers/State.h"
#include <iostream>


State State::splite_string_32bit(const std::string& str) {
    State result; // No need for 'new', just declare a State object

    // Set left part to the first 4 characters
    result.setLeft(str.substr(0, 4));

    // Set right part to the next 4 characters (or 8 if available)
    result.setRight(str.substr(4, 4)); // This extracts the next 4 characters

    return result; // Return by value
}

  void State::setRight(std::string str){
        this->right = str;
  }
   void State::setLeft(std::string str){
        this->left = str;
   }
   void State::setstate(std::string str ){
        splite_string_32bit(str);
   }

std::string State::getright() {
    return this->right;
}

std::string State::getleft() {
    return this->left;
}
std::string State::getstate(){
    return getleft() + getright();
}
