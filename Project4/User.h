#pragma once
#include <fstream>
#include <sstream>
#include<iostream>


class User
{
private:
    int Id = 0, Age = 0;
    std::string firstName, lastName, e_mail, password, gender, bloodType, line, unit, totalNumberOfUsers;
   
public:
    User(int Id, std::string firstName, std::string lastName, std::string e_mail, std::string password, int Age, std::string gender, std::string bloodType);
    User();
   int getId();
    int getAge();
    std::string getFirstname();
    std::string getLastName();
    std::string getE_mail();
    std::string getPassword();
    std::string getGender();
    std::string getBloodType();
    void setId(int);
    void setAge(int);
    void setFirstname(std::string);
    void setLastName(std::string);
    void setE_mail(std::string);
    void setPassword(std::string);
    void setGender(std::string);
    void setBloodType(std::string);
   
    ~User();

};
