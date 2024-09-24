#ifndef C0C78405_88EB_40C2_8365_287F33ECBEDE
#define C0C78405_88EB_40C2_8365_287F33ECBEDE


#include  "State.h"


const int INITIAL_PERMUTATION[8][8] = {
    {58, 50, 42, 34, 26, 18, 10,  2},
    {60, 52, 44, 36, 28, 20, 12,  4},
    {62, 54, 46, 38, 30, 22, 14,  6},
    {64, 56, 48, 40, 32, 24, 16,  8},
    {57, 49, 41, 33, 25, 17,  9,  1},
    {59, 51, 43, 35, 27, 19, 11,  3},
    {61, 53, 45, 37, 29, 21, 13,  5},
    {63, 55, 47, 39, 31, 23, 15,  7}
};

class DES
{
private:
    State plaintext_state;
    
public:
    void set_plaintext(std::string plaintext);
    State init_Permutation(std::string plaintext);
};



#endif /* C0C78405_88EB_40C2_8365_287F33ECBEDE */
