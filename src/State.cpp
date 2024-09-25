#include "../headers/State.h"



void State::setRightside(std::string right) {
    this->rightside = right;
}

void State::setLeftside(std::string left) {
    this->leftside = left;
}

std::string State::getRightside()  {
    return this->rightside;
}

std::string State::getLeftside() {
    return this->leftside;
}


std::bitset<32> State::getright_bitset() {
    
    return std::bitset<32>(this->rightside);
}

std::bitset<32> State::getleft_bitset() {
    
    return std::bitset<32>(this->leftside);
}


void State::splitstate(std::string str) {
    this->rightside = str.substr(32,64);
    this->leftside = str.substr(0,32);
}

void State::setState(std::string state) {
    splitstate(state);
}


std::string State::getState(){
    return this->getLeftside().append(this->getRightside());
}

std::bitset<64> State::getState_bits(){
    return std::bitset<64> (this->getState());
}





