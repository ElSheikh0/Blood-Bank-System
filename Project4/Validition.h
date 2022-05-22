#include <regex>


 
class Validation {

private:
    bool Valid_string = false, Valid_digit = false, Upper_case = false, Lower_case = false, Special_char = false, number = false;
   std::regex RUpper_case{ "[A-Z]+" };
   std::regex RLower_case{ "[a-z]+" };
   std::regex RNumber{ "[0-9]+" };
   std::regex RSpecial_char{ "[!@#$%^&*()=+]+" };
public:
    bool Check_String(std::string word);
    bool Check_Digit(std::string digit);
    bool Check_Email(std::string Email);
    bool Check_Password(std::string password);
};