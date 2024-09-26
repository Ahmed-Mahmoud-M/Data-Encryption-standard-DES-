#include "../headers/DES.h"




void DES::set_plaintext(std::string plaintext){
    Helper h ;
   this->plaintext_state = h.string_to_binary(plaintext);
}


std::string DES::get_plaintext() {
    return this->plaintext_state;
}


std::string DES::init_Permutation(){
    std::string permuted_bits(64,'0');

    for(int i=0; i<64; i++) {
        permuted_bits[i] = this->plaintext_state[INITIAL_PERMUTATION[i]-1];
    }

    return permuted_bits;

}

std::string DES::init_Permutation_inverse(std::string str){
    std::string bits(64,'0');

    for(int i=0; i<64; i++) {
        bits[i] = str[INITIAL_PERMUTATION_INVERSE[i]-1];
    }

    return bits;

}


std::bitset<48> DES::expansionPermutations(std::bitset<32>rightside) {
    std::bitset<48> result;
    for(int i=0; i<48; i++) {
        result[i] = rightside[EXPANSION_TABLE[i]-1];
    }

    return result;
}


std::bitset<32> DES::permutationPostSBOX(std::bitset<32>rightside) {
    std::bitset<32> result;
    for(int i=0; i<32; i++) {
        result[i] = rightside[PERMUTATION[i]-1];
    }

    return result;
}



