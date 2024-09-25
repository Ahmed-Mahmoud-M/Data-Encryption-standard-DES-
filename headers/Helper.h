#ifndef A8A50B3C_6789_46A9_880F_64FAF279E18B
#define A8A50B3C_6789_46A9_880F_64FAF279E18B
#include <iostream>
#include <string>
#include<bitset>
class Helper
{

public:

   


    std::string  string_to_binary(std::string str) {
        std::string result = "";
        for (char c : str) {
            std::bitset<8> bin(c);
            result += bin.to_string();
        }

        return result;

    }

      std::string  string_to_hex(std::string str) {
        std::string result = "";
        for (char c : str) {
            std::bitset<16> hex(c);
            result += hex.to_string();
        }

        return result;

    }

     std::bitset<32> xory(std::bitset<32>x, std::bitset<32> y) {
        std::bitset<32> result;

        for(int i = 0; i <32; i++){
            result[i] = (x[i]+y[i]) % 2 ;
        }

        return result;
    }
    
   
};











#endif /* A8A50B3C_6789_46A9_880F_64FAF279E18B */
