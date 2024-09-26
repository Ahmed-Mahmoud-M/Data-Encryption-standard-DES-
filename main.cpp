#include<iostream>
#include "src/State.cpp"
#include "headers/Helper.h"
#include "src/DES.cpp"



int main(int argc, char const *argv[]) 
{
    
   State state;
   Helper h;
   DES des;
   std::string str = "COMPUTER";
   //std::cout << h.string_to_binary(str) << std::endl;
    state.setState(h.string_to_binary(str));
    std::cout << state.getRightside() << std::endl;
    //std::cout << state.getLeftside() << std::endl;
    std::cout << des.expansionPermutations(state.getright_bitset()) << std::endl;
   
  

    
    return 0;
}
