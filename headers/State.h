#ifndef F951A154_4685_40C6_85F9_54FD3C06EDA5
#define F951A154_4685_40C6_85F9_54FD3C06EDA5
#include <bitset>
#include <string>


class State
{
private:
    std::string rightside;
    std::string leftside;
public:
    State();
    void setRightside(std::string rightside);
    void setLeftside(std::string leftside);
    std::string getRightside();
    std::string getLeftside();
    std::bitset<32> getright_bitset();
    std::bitset<32> getleft_bitset();
    void setState(std::string state);
    std::string getState();
    std::bitset<64> getState_bits();
    void splitstate(std::string state);
    
   
};

State::State(){}




#endif /* F951A154_4685_40C6_85F9_54FD3C06EDA5 */
