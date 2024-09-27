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



std::bitset<64> hexToBinary(const std::string& hex) {
    // Remove any potential prefix (e.g., "0x")
    std::string cleanedHex = hex;
    if (cleanedHex.find("0x") == 0 || cleanedHex.find("0X") == 0) {
        cleanedHex.erase(0, 2);
    }

    // Validate the hex string
    for (char c : cleanedHex) {
        if (!std::isxdigit(c)) {
            throw std::invalid_argument("Invalid hexadecimal input.");
        }
    }

    // Convert hex to binary string
    std::string binaryStr;
    for (char c : cleanedHex) {
        int value = (c >= '0' && c <= '9') ? (c - '0') : (std::tolower(c) - 'a' + 10);
        std::bitset<4> bits(value);
        binaryStr += bits.to_string();
    }

    // Convert to 64 bits (pad with leading zeros if necessary)
    if (binaryStr.size() > 64) {
        throw std::overflow_error("Hexadecimal value exceeds 64 bits.");
    } else if (binaryStr.size() < 64) {
        binaryStr = std::string(64 - binaryStr.size(), '0') + binaryStr; // Pad with zeros
    }

    // Return as a bitset
    return std::bitset<64>(binaryStr);
}
    
   
};











#endif /* A8A50B3C_6789_46A9_880F_64FAF279E18B */
