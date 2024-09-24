#include<iostream>
#include "headers/State.h"
#include "src/State.cpp"



int main(int argc, char const *argv[]) 
{
    
    
    State state;
   state.splite_string_32bit("computer");
    std::cout << state.getstate() <<std::endl;
    std::cout << state.getright() <<std::endl;
    std::cout << state.getleft() <<std::endl;
    
    return 0;
}
