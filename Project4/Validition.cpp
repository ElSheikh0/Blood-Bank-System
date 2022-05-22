#include "Validition.h"
bool Validation::Check_String(std::string word) {
    for (int i = 0; i < word.length(); ++i)
    {
        if ((word[i] >= 65 && word[i] <= 90) || (word[i] >= 97 && word[i] <= 122))
        {
            Valid_string = true;
        }
        else
        {
            Valid_string = false;
            break;


        }
    }
    return Valid_string;
}

bool Validation::Check_Digit(std::string digit)
{
    for (int i = 0; i < digit.length(); ++i)
    {
        if ((digit[i] >= 48 && digit[i] <= 57))
        {
            Valid_digit = true;
        }
        else
        {
            Valid_digit = false;
            break;
        }
    }
    return Valid_digit;
}
bool Validation::Check_Email(std::string Email)
{
    const std::regex Email_pattern("(\\w+)@(\\w+)(\\.(\\w+))");
    
    const std::regex Email_pattern2("(\\w+)(\\.|)?(\\w*)@(\\w+)(\\.(\\w+))+");
       

    return  regex_match(Email, Email_pattern) || regex_match(Email, Email_pattern2);
}
bool Validation::Check_Password(std::string password ){
    Upper_case= regex_search(password,RUpper_case);
    Lower_case =regex_search(password,RLower_case);
    number=regex_search(password,RNumber);
    Special_char=regex_search(password,RSpecial_char);
    if(password.length()<8){
        return false;
    }
    else {
        if (Upper_case + Lower_case + number + Special_char < 4)
            return false;
        else
            return true;
    }
}