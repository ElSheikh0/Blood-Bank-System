#include "Donor.h"
#include <fstream>
#include <sstream>
#include<iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

Donor::Donor() {

}

Donor::Donor(int id, string fName, string lName, int age, string email, string password, string gender, string bloodType, string diseases, string medicine, string date)
	:User(id, fName, lName, email, password, age, gender, bloodType)
{

	this->listOfDiseases = diseases;
	this->medication = medicine;
	this->latestDonationDate = date;
}

void Donor::readData()
{
	ifstream f;
	f.open("data.csv");
	string line, unit;
	vector<string> row;
	while (f.good()) {
		row.clear();
		getline(f, line);
		stringstream s(line);
		while (getline(s, unit, ',')) {
			row.push_back(unit);
		}
		if (!row.empty()) {
			Donor temp(stoi(row[0]), row[1], row[2], stoi(row[3]), row[4], row[5], row[6], row[7], row[8], row[9], row[10]);
			totalNumberOfDonors++;
			allDonors.push_back(temp);

			data.insert(make_pair(row[4], temp));

			lastDonorID = stoi(row[0]);
		}
	}

	totalNumberOfDonorss = to_string(totalNumberOfDonors);
	totalNumberOfDonors = 0;

	f.close();
}

void Donor::Register(string fName, string lName, int age, string email, string password, string gender, string bloodType, string diseases, string medicine, string date) {
	readData();
	fstream donor;
	donor.open("data.csv", ios::out | ios::app);
	lastDonorID++;
	setId(lastDonorID);

	currentUserIndex = getId();

	if (diseases == "")
		diseases = "NULL";
	if (medicine == "")
		medicine = "NULL";

	//Donor(ID, fName, lName, age, email, password, gender, bloodType, diseases, medicine, date);
	donor << getId() << "," << fName << "," << lName
		<< "," << age << "," << email << "," << password
		<< "," << gender << "," << bloodType << "," << diseases
		<< "," << medicine << "," << date << "\n";
	donor.close();
}

bool Donor::Login(string e_mail, string password) {
	readData();

	bool login = false;

	readData();
	string p = data[e_mail].getPassword();
	if (p == password && password != "") {
		login = true;
		currentUserIndex = data[e_mail].getId();
	}
	else {
		login = false;
	}
	return login;
}

void Donor::DonationRequest(std::string hos, std::string Time, int ID, std::string email) {
	fstream DR;
	DR.open("DonationRequestData.csv", ios::app);

	DR << ID << "," << data[email].getBloodType() << "," << Time << "," << "2" << endl;
	DR.close();
}

void Donor::DeleteAccount(string email)
{
	fstream fin, fout;
	fin.open("data.csv", ios::in);
	fout.open("DonorData.csv", ios::out);
	string line, word, tempEmail;
	vector<string>row;

	while (!fin.eof())
	{
		row.clear();
		getline(fin, line);
		stringstream s(line);

		while (getline(s, word, ','))
		{
			row.push_back(word);
		}

		int row_size = row.size();
		if (row_size != 0) {
			tempEmail = row[4];
			if (tempEmail != email) {
				if (!fin.eof()) {
					for (int i = 0; i < row.size(); ++i)
					{
						fout << row[i] << ",";
					}
					fout << endl;
				}
			}

			if (fin.eof())
				break;
		}

	}

	fin.close();
	fout.close();
	remove("data.csv");
	rename("DonorData.csv", "data.csv");
}
void Donor::UpdateAccount(int index, int currentUserIndex, std::string updated) {
	fstream file_1, file_2;
	string line, unit;
	std::vector<std::string> Donor_Data;
	file_1.open("data.csv", ios::in | ios::app);
	file_2.open("temp_file.csv", ios::out | ios::app);
	while (file_1.good())
	{
		Donor_Data.clear();
		getline(file_1, line);
		stringstream s_line(line);
		while (getline(s_line, unit, ','))
		{
			Donor_Data.push_back(unit);
		}
		if (Donor_Data.size() != 0)
		{
			if (stoi(Donor_Data[0]) == currentUserIndex)
			{
				Donor_Data[index] = updated;
				for (int i = 0; i < Donor_Data.size(); i++)
				{
					file_2 << Donor_Data[i] << ",";
				}
				file_2 << endl;
			}
			else if (stoi(Donor_Data[0]) != currentUserIndex) {
				for (int i = 0; i < Donor_Data.size(); ++i) {
					file_2 << Donor_Data[i] << ",";
				}file_2 << endl;
			}
		}
	}
	file_1.close();
	file_2.close();
	remove("data.csv");
	rename("temp_file.csv", "data.csv");
	//readData();
	//fstream f;
	//f.open("update.csv", ios::out | ios::app);
	//vector<string> newData;
	//newData[0] = to_string(allDonors[currentUserIndex].ID);
	//newData[1] = allDonors[currentUserIndex].firstName;
	//newData[2] = allDonors[currentUserIndex].lastName;
	//newData[3] = to_string(allDonors[currentUserIndex].age);
	//newData[4] = allDonors[currentUserIndex].mail;
	//newData[5] = allDonors[currentUserIndex].password;
	//newData[6] = allDonors[currentUserIndex].gender;
	//newData[7] = allDonors[currentUserIndex].bloodType;
	//newData[8] = allDonors[currentUserIndex].listOfDiseases;
	//newData[9] = allDonors[currentUserIndex].medication;
	//newData[10] = allDonors[currentUserIndex].latestDonationDate;
	//newData[index] = updated;
	//Donor updatedData(stoi(newData[0]), newData[1], newData[2], stoi(newData[3]), newData[4], newData[5], newData[6], newData[7], newData[8], newData[9], newData[10]);
	//allDonors[currentUserIndex] = updatedData;
	//for (int i = 0; i < allDonors.size(); ++i)
	//{

	//	f << allDonors[i].ID << "," << allDonors[i].firstName
	//		<< "," << allDonors[i].lastName << "," << allDonors[i].age
	//		<< "," << allDonors[i].mail << "," << allDonors[i].password
	//		<< "," << allDonors[i].gender << "," << allDonors[i].bloodType
	//		<< "," << allDonors[i].listOfDiseases << "," << allDonors[i].medication
	//		<< "," << allDonors[i].latestDonationDate << "\n";
	//}
	//f.close();
	//remove("data.csv");
	//rename("update.csv", "data.csv");

}

std::vector<Donor> Donor::getallDonors()
{
	return std::vector<Donor>(allDonors);
}

int Donor::getCurrentUser()
{
	return currentUserIndex;
}

int Donor::getTotalNum()
{
	return totalNumberOfDonors;
}
//
//int Donor::getId()
//{
//	return ID;
//}
//
//int Donor::getAge()
//{
//	return age;
//}
//
//std::string Donor::getFirstname()
//{
//	return std::string(firstName);
//}
//
//std::string Donor::getLastName()
//{
//	return std::string(lastName);
//}
//
//std::string Donor::getE_mail()
//{
//	return std::string(mail);
//}
//
//std::string Donor::getPassword()
//{
//	return std::string(password);
//}
//
//std::string Donor::getGender()
//{
//	return std::string(gender);
//}
//
//std::string Donor::getBloodType()
//{
//	return std::string(bloodType);
//}

std::string Donor::getDis()
{
	return std::string(listOfDiseases);
}

std::string Donor::getMed()
{
	return std::string(medication);
}

std::string Donor::getLastDon()
{
	return std::string(latestDonationDate);
}

std::string Donor::gettotalNumberOfDonorss()
{
	return std::string(totalNumberOfDonorss);
}

void Donor::setCurrentUser(int index)
{
	currentUserIndex = index;
}


Donor::~Donor() {

}