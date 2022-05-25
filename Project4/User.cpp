#include "User.h"
User::User()
{

}
User::User(int Id, std::string firstName, std::string lastName, std::string e_mail, std::string password, int Age, std::string gender, std::string bloodType)
{
    this->Id = Id;
    this->firstName = firstName;
    this->lastName = lastName;
    this->Age = Age;
    this->e_mail = e_mail;
    this->password = password;
    this->gender = gender;
    this->bloodType = bloodType;
}
int User::getAge()
{
    return Age;
}
int User::getId()
{
    return Id;
}
std::string User::getFirstname()
{
    return firstName;
}
std::string User::getLastName()
{
    return lastName;
}
std::string User::getE_mail()
{
    return  e_mail;
}
std::string User::getPassword()
{
    return password;
}
std::string User::getGender()
{
    return gender;
}
std::string User::getBloodType()
{
    return bloodType;
}
void User::setId(int tId) {
    this->Id = tId;
}
void User::setAge(int tAge) {
    Age = tAge;
}
void User::setFirstname(std::string tFirstName) {
    firstName = tFirstName;
}
void User::setLastName(std::string tLastName) {
    lastName = tLastName;
}
void User::setE_mail(std::string tE_mail) {
    e_mail = tE_mail;
}
void User::setPassword(std::string tPassword) {
    password = tPassword;
}
void User::setGender(std::string tGender) {
    gender = tGender;
}
void User::setBloodType(std::string tBloodType) {
    bloodType = tBloodType;
}




User::~User()
{
}