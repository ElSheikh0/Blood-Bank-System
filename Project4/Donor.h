#pragma once
#include<string>
#include <vector>
#include"User.h"
#include <unordered_map>
 

class Donor: public User
{
private:
	std::unordered_map<std::string, Donor> data;
	int  totalNumberOfDonors = 0, lastDonorID = 0, currentUserIndex;
	std::string  listOfDiseases = "NULL", medication = "NULL", latestDonationDate = "NULL";
	std::string totalNumberOfDonorss;
	std::vector<Donor> allDonors;
	
public:
	Donor();
	Donor(int id, std::string fName, std::string lName, int age, std::string email, std::string password, std::string gender, std::string bloodType, std::string diseases, std::string medicine, std::string date);
	void readData();
	void Register(std::string fName, std::string lName, int age, std::string email, std::string password, std::string gender, std::string bloodType, std::string diseases, std::string medicine, std::string date);
	bool Login(std::string,std::string);
	void DonationRequest(std::string hos, std::string Time,int id, std::string email);
	
	void DeleteAccount(std::string);
	 
	void UpdateAccount(int index,int in , std::string updated);
	std::vector<Donor> getallDonors();

	int getCurrentUser();
	int getTotalNum();
	/*int getId();
	int getAge();
	std::string getFirstname();
	std::string getLastName();
	std::string getE_mail();
	std::string getPassword();
	std::string getGender();
	std::string getBloodType();*/
	std::string getDis();
	std::string getMed();
	std::string getLastDon();
	std::string gettotalNumberOfDonorss();
	void setCurrentUser(int);
 


	~Donor();
};