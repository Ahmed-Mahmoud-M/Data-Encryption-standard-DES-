#ifndef D07341E6_8A4A_4182_8ADA_13C79A0F353D
#define D07341E6_8A4A_4182_8ADA_13C79A0F353D

#include <string>
class State
{
private:
        std::string left,right;
    

public:
    State(/* args */);
  
   State splite_string_32bit(std::string str);
     // Getters
    std::string getright();
    std::string getleft();
    std::string getstate();
   // Setters
   void setRight(std::string str);
   void setLeft(std::string str);
   void  setstate(std::string str );
    
};

State::State(/* args */)
{
}




#endif /* D07341E6_8A4A_4182_8ADA_13C79A0F353D */
