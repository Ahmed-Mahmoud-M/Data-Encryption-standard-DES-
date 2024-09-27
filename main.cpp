#include<iostream>
#include "src/State.cpp"
#include "headers/Helper.h"
#include "src/DES.cpp"
#include "src/ScheduleKey.cpp"



int main(int argc, char const *argv[]) 
{
    
   State state;
   Helper h;
   DES des;
   ScheduleKey key;
   
   
    key.setkey(h.hexToBinary("133457799BBCDFF1"));
    
    key.permuted_chioce_1();


    
    key.printsubkeys(key.roundsubkeys());
   
  

    
    return 0;
}
