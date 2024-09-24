#include "../headers/DES.h"


void DES::set_plaintext(std::string plaintext){
    this->plaintext_state.setstate(plaintext);
}


State DES::init_Permutation(std::string plaintext_64_bit) {
       

}