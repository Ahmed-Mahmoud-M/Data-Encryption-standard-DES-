#include<iostream>
#include "src/DES.cpp"



int main(int argc, char const *argv[]) 
{
    
    DES des;
    des.set_plaintext("COMPUTER");
    std::cout << des.get_plaintext() << std::endl;
    std::cout << des.init_Permutation() << std::endl;
    std::cout << des.init_Permutation_inverse(des.init_Permutation()) << std::endl;
  

    
    return 0;
}
