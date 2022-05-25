#include <fstream>
#include <sstream>
#include<iostream>
#include <vector>
#include <regex>
#include <algorithm>
#include <unordered_map>
#include "User.h"




 

class Recipient :public User {
private:
    std::unordered_map<std::string, Recipient> data;
    int /*Age = 0, R_ID,*/ totalNumberOfRecipient = 0, lastDonorID = 0, currentUserIndex;
    std::string /*First_Name, Last_Name, R_Mail, R_Password, R_Blood_Type,*/ Hospital, Doctor, /*R_Gender,*/ line, unit;
    std::string totalNumberOfRecipients;
    std::vector<Recipient> recipients;
    std::vector<std::string> Recipient_Data;
    bool   login = false;
    
public:
    Recipient();
   
    Recipient(int id, std::string First_Name, std::string Last_Name, std::string R_Gender, int age, std::string R_Mail, std::string R_Password, std::string R_Blood_Type, std::string Hospital, std::string Doctor);
    void Read_Data();
    void Register(std::string First_Name, std::string Last_Name, std::string R_Gender, int age, std::string R_Mail, std::string R_Password, std::string R_Blood_Type, std::string Hospital, std::string Doctor);
    bool Login(std::string e_mail, std::string password);
    void DeleteAccount(std::string);
    void UpdateAccount(int index,int n, std::string new_val);
    std::vector<std::pair<std::string, int>>Display_Blood(std::string doctor);
    bool Count_BloodTypes(std::string BloodType, int cnt);
    void UpdateFileReq( int cnt, std::string blood);

    std::vector<Recipient> getrecipients();
    int getCurrentUser();
    int getTotalNum();
   /* int getId();
    int getAge();
    std::string getFirstname();
    std::string getLastName();
    std::string getE_mail();
    std::string getPassword();
    std::string getGender();
    std::string getBloodType();*/
    std::string getHos();
    std::string getDoc();
    std::string gettotalNumberOfRecipientsS();
    void setCurrentUser(int);
    ~Recipient();


};
