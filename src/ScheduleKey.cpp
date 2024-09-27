#include "../headers/ScheduleKey.h"



void ScheduleKey::setkey(std::bitset<64> key) {
    this->originalkey = key;
}

std::bitset<56> ScheduleKey::getkey() {
    return this->key;
}


std::bitset<64> ScheduleKey::getoriginalkey() {
    return this->originalkey;
}


void ScheduleKey::permuted_chioce_1() {
    std::bitset<56> result;
    std::cout << this->originalkey << std::endl;

    for (int i = 0; i <56; i++) {
        result[i] = this->originalkey[PERMUTED_CHIOCE_1[i]-1];
    }

    this->key = result;
    std::cout  << this->key <<std::endl << std::endl;
    for (size_t i = 0; i < 28; i++) {
        this->rightkey_D[i] = result[i];
    }

   
    for (size_t i = 0; i < 28; i++) {
        this->leftkey_C[i] = result[i + 28];
    }


    // std::cout << this->key << std::endl;
    // std::cout << this->leftkey_C << std::endl;
    // std::cout << this->rightkey_D << std::endl;
}

std::bitset<56> ScheduleKey::combineTwohalves(std::bitset<28> leftkey, std::bitset<28>rightkey){
   
     std::bitset<56> result;

    
    for (int i = 0; i < 28; i++) {
        result[i] = rightkey[i];
    }

    
    for (int i = 0; i < 28; i++) {
        result[i + 28] = leftkey[i]; 
    }

    return result;
}


std::bitset<48> ScheduleKey::permuted_chioce_2(std::bitset<56>keyround){
      std::bitset<48> result;

    for (int i = 0; i <48; i++) {
        result[i] = keyround[PERMUTED_CHIOCE_2[i]-1];
    }
    return result;
}



std::vector<std::bitset<48>> ScheduleKey::roundsubkeys() {
    std::vector<std::bitset<48>> subkeys;

    // Shift schedule for DES
    std::vector<int> shift_schedule = {1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1};

    for (int i = 0; i < 16; i++) {
        // Perform circular left shifts based on the round number
        this->rightkey_D = circular_left_shift(this->rightkey_D, shift_schedule[i], 28);
        this->leftkey_C = circular_left_shift(this->leftkey_C, shift_schedule[i], 28);
        

        // // Debug prints to check the shifting
        // std::cout << "Round " << i + 1 << ": \n";
        // std::cout << "Left Half (C): " << this->leftkey_C << "\n";
        // std::cout << "Right Half (D): " << this->rightkey_D << "\n";

        std::bitset<56> key = this->combineTwohalves(this->rightkey_D, this->leftkey_C);
        //std::cout << "whole key : "<< key << std::endl;
        // Combine the two halves and apply PC-2 permutation to generate the subkey
        std::bitset<48> subkey = this->permuted_chioce_2(key);
        subkeys.push_back(subkey);

        // Debug print for the subkey
        //std::cout << "Subkey " << i + 1 << ": " << subkey << "\n";
    }

    return subkeys;
}




std::bitset<28> ScheduleKey::circular_left_shift(std::bitset<28> key, int shift, int size) {
    std::bitset<28> shifted_key;

    // Perform circular shift
    for (int i = 0; i < size; i++) {
        shifted_key[i] = key[(i + shift) % size];
    }

    return shifted_key;
}


void ScheduleKey::printsubkeys(std::vector<std::bitset<48>> subkeys) {

    for(auto x: subkeys) {
        std::cout << x << std::endl;
    }
}
  

