#pragma once
#include<string>
#include <fstream>
#include <sstream>
#include<iostream>
#include <vector>
#include <algorithm>

//using namespace std;

class Admin
{
private:
	//int ID = 0, totalNumberOfAdmin = 0 ;
	
    std::vector<Admin> allAdmin;
    std::string username;
    std::string password;
	

public:
	Admin();
	bool LoginAdmin(std::string, std::string);
	~Admin();
};
class Request
{
public:
    int   Donor_ID, totalNumberOfRequests = 0, currentUserIndex;
    std::string Blood , line, unit, state, Date;
    std::string totalNumberOfRequestss;
    std::vector<Request> request;
    std::vector<std::string> Request_Data;
    Request();
    void Read_Data();
    bool validateDate(int diff);
    bool validate_donors_request(int index, int Age, std::string diseases, bool checkdate);
    int calc_date_diff(int day1, int month1, int year1, int day2, int month2, int year2);
    int check_leap_year(int year);
    int no_of_days_in_month(int month, int year);
    void change_state(int index, std::string update, int currentUserIndex);
    
    int  offsetDays(int d, int m, int y);
     void revoffsetDays(int offset, int y, int* d, int* m);
     std::string addDays(int d1, int m1, int y1, int x);
 
    Request(int Donor_ID, std::string blood,std::string date,  std::string state);
};