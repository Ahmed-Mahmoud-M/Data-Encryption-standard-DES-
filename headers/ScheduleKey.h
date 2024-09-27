#ifndef C9E870F7_A331_4611_8F68_28890DFB4B23
#define C9E870F7_A331_4611_8F68_28890DFB4B23

#include <bitset>
#include <vector>


/* Permuted Choice 1 Table */
const int PERMUTED_CHIOCE_1[56] = {
    57, 49, 41, 33, 25, 17,  9,
     1, 58, 50, 42, 34, 26, 18,
    10,  2, 59, 51, 43, 35, 27,
    19, 11,  3, 60, 52, 44, 36,
    
    63, 55, 47, 39, 31, 23, 15,
     7, 62, 54, 46, 38, 30, 22,
    14,  6, 61, 53, 45, 37, 29,
    21, 13,  5, 28, 20, 12,  4
};

/* Permuted Choice 2 Table */
const int PERMUTED_CHIOCE_2[48] = {
    14, 17, 11, 24,  1,  5,
     3, 28, 15,  6, 21, 10,
    23, 19, 12,  4, 26,  8,
    16,  7, 27, 20, 13,  2,
    41, 52, 31, 37, 47, 55,
    30, 40, 51, 45, 33, 48,
    44, 49, 39, 56, 34, 53,
    46, 42, 50, 36, 29, 32
};


class ScheduleKey
{
private:
    std::bitset<64> originalkey;
    std::bitset<56> key;
    std::bitset<28> leftkey_C;
    std::bitset<28> rightkey_D;
public:
    ScheduleKey();
    void setkey(std::bitset<64> key);
    std::bitset<64> getoriginalkey();
    std::bitset<56> getkey();
    void permuted_chioce_1();
    std::bitset<48> permuted_chioce_2(std::bitset<56>keyround);
    std::bitset<56> combineTwohalves(std::bitset<28> leftkey, std::bitset<28>rightkey);
    std::vector<std::bitset<48>> roundsubkeys();
    std::bitset<28>circular_left_shift(std::bitset<28> key_half, int shift, int size);
    void printsubkeys(std::vector<std::bitset<48>> subkeys);
   
};

ScheduleKey::ScheduleKey(){}




#endif /* C9E870F7_A331_4611_8F68_28890DFB4B23 */
