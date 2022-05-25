#include "Recipient.h"
#include<assert.h>
 #include"Admin.h"
using namespace std;

Recipient::Recipient() {}
Recipient::Recipient(int R_ID, std::string First_Name, std::string Last_Name, std::string R_Gender, int age, std::string R_Mail, std::string R_Password, std::string R_Blood_Type, string Hospital, string Doctor)
    :User(R_ID, First_Name, Last_Name, R_Mail, R_Password, age, R_Gender, R_Blood_Type)
{
        this->Hospital = Hospital;
        this->Doctor = Doctor;
}

void Recipient::Read_Data()
{
    ifstream Data_File;
    Data_File.open("Recipient.csv");
    while (Data_File.good())
    {
        Recipient_Data.clear();
        getline(Data_File, line);
        stringstream s(line);
        while (getline(s, unit, ','))
        {
            Recipient_Data.push_back(unit);
        }
        if (!Recipient_Data.empty())
        {
            Recipient recipient(stoi(Recipient_Data[0]), Recipient_Data[1], Recipient_Data[2], Recipient_Data[3], stoi(Recipient_Data[4]), Recipient_Data[5], Recipient_Data[6], Recipient_Data[7], Recipient_Data[8], Recipient_Data[9]);
            totalNumberOfRecipient++;
            recipients.push_back(recipient);
            data.insert(make_pair(Recipient_Data[5], recipient));
           lastDonorID = stoi(Recipient_Data[0]);
        }
    }
   
    totalNumberOfRecipients = to_string(totalNumberOfRecipient);
    totalNumberOfRecipient = 0;
   
    Data_File.close();
}

void Recipient::Register(std::string First_Name, std::string Last_Name , std::string R_Gender, int age, std::string R_Mail, std::string R_Password, std::string R_Blood_Type, std::string Hospital, std::string Doctor)
{
    Read_Data();
    fstream Recipient;
    Recipient.open("Recipient.csv", ios::out | ios::app);
    lastDonorID++;
    setId( lastDonorID);
    currentUserIndex = getId(); 
    if (Hospital == "")
        Hospital = "NULL";
    if (Doctor == "")
        Doctor = "NULL";
    Recipient << getId()<< "," << First_Name << "," << Last_Name << "," << R_Gender << "," << age << "," << R_Mail << "," << R_Password << "," << R_Blood_Type << "," << Hospital << "," << Doctor << endl;
    Recipient.close();
}

bool Recipient::Login(std::string e_mail, std::string password)
{
    Read_Data();
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

void Recipient::DeleteAccount(std::string e_mail)
{
    fstream file_1, file_2;
    file_1.open("Recipient.csv", ios::in | ios::app);
    file_2.open("temp_file.csv", ios::out | ios::app);
    while (file_1.good())
    {
        Recipient_Data.clear();
        getline(file_1, line);
        stringstream s_line(line);
        while (getline(s_line, unit, ','))
        {
            Recipient_Data.push_back(unit);
        }
        if (Recipient_Data.size() != 0)
        {
            if (Recipient_Data[5] != e_mail)
            {
                for (int i = 0; i < Recipient_Data.size(); i++)
                {
                    file_2 << Recipient_Data[i] << ",";
                }
                file_2 << endl;
            }
            else
            {
                continue;
            }
        }
    }
    file_1.close();
    file_2.close();
    remove("Recipient.csv");
    rename("temp_file.csv", "Recipient.csv");
   /* Read_Data();
    fstream file_2;
    file_2.open("temp_file.csv", ios::out | ios::app);
    data.erase(e_mail);
    for (auto x : data) {
        file_2 << x.second.R_ID << "," << x.second.First_Name << "," << x.second.Last_Name << "," << x.second.R_Gender << "," << x.second.Age << "," << x.second.R_Mail << "," << x.second.R_Password << "," << x.second.R_Blood_Type << "," << x.second.Hospital << "," << x.second.Doctor << "\n";
    }
    file_2.close();
    remove("Recipient.csv");
    rename("temp_file.csv", "Recipient.csv");*/
}

void Recipient::UpdateAccount(int index,int currentUserIndex, std::string updated) {
    fstream file_1, file_2;
    file_1.open("Recipient.csv", ios::in | ios::app);
    file_2.open("temp_file.csv", ios::out | ios::app);
   
    while (file_1.good())
    {
        Recipient_Data.clear();

        getline(file_1, line);
        stringstream s_line(line);
        while (getline(s_line, unit, ','))
        {
            Recipient_Data.push_back(unit);
        }
        if (Recipient_Data.size() != 0)
        {
            if (stoi(Recipient_Data[0]) == currentUserIndex)
            {
                Recipient_Data[index] = updated;
                for (int i = 0; i < Recipient_Data.size(); i++) {
                    file_2 << Recipient_Data[i] << ",";
                }
                file_2 << endl;
            }
            else if (stoi(Recipient_Data[0]) != currentUserIndex) {
                for (int i = 0; i < Recipient_Data.size(); ++i) {
                    file_2 << Recipient_Data[i] << ",";
                }file_2 << endl;
            }
        }
    }
    file_1.close();
    file_2.close();
    remove("Recipient.csv");
    rename("temp_file.csv", "Recipient.csv");
}
vector<pair<string, int>> Recipient::Display_Blood(string date) {
    ifstream Data;
    unordered_map<string, int> counts = {
             {"A+",0},{"A-",0},{"B+",0},{"B-",0},{"O+",0},
             {"O-",0},{"AB+",0},{"AB-",0}
    };
    vector<string> blood_types;
    vector<pair<string, int>> blood_data;
    vector<string> Recipient_Data_blood;

    Data.open("DonationRequestData.csv");
    while (Data.good()) 
    {
        Recipient_Data_blood.clear();
        getline(Data, line);
        stringstream s(line);
        while (getline(s, unit, ',')) {
            Recipient_Data_blood.push_back(unit);
        }
        if (Recipient_Data_blood.size() != 0) {
        
            if (Recipient_Data_blood[2] == date && Recipient_Data_blood[3] == "1") 
            {
                blood_types.push_back(Recipient_Data_blood[1]);
            }
        }
    }
   
    for (string item : blood_types) {
        ++counts[item];
    }
    for (auto x : counts) {
        blood_data.push_back(make_pair(x.first, x.second));
    }
    sort(blood_data.begin(), blood_data.end());
    return blood_data;
}



bool Recipient::Count_BloodTypes(std::string BloodType, int cnt) {
    fstream Data;
    bool found = false;
    int Blood_Count=0;
    Data.open("DonationRequestData.csv", ios::in | ios::app);
    while (Data.good()) {
        Recipient_Data.clear();
        getline(Data, line);
        stringstream s(line);
        while (getline(s, unit, ',')) {
            Recipient_Data.push_back(unit);
        }
        if (Recipient_Data.size() != 0) {
            if (Recipient_Data[1] == BloodType && Recipient_Data[3] == "1") {
                Blood_Count++;
            }
        }
        if (cnt <= Blood_Count) {
            found = true;
        }
        else { found = false; }
    }
    return found;
}

void Recipient::UpdateFileReq(int cnt,std::string blood) 
{
    fstream file_1, file_2;
    file_1.open("DonationRequestData.csv", ios::in | ios::app);
    file_2.open("temp_file.csv", ios::out | ios::app);
    std::vector<std::string> Recipient_Req;
    while (file_1.good())
    {
        Recipient_Req.clear();
        getline(file_1, line);
        stringstream s_line(line);
        while (getline(s_line, unit, ','))
        {
            Recipient_Req.push_back(unit);
        }
        if (Recipient_Req.size() != 0)
        {
            
                if (Recipient_Req[1] == blood && cnt!=0 &&Recipient_Req[3]=="1")
                {
                    Recipient_Req[3] = "0";
                    for (int i = 0; i < 4; ++i)
                    {
                        file_2 << Recipient_Req[i] << ",";
                    }
                    file_2 << endl;
                    cnt--;
                }
                else
                {
                   
                    for (int i = 0; i < 4; ++i)
                    {
                        file_2 << Recipient_Req[i] << ",";
                    }
                    file_2 << endl;
                }
            
            
        }
         

    }
    file_1.close();
    file_2.close();
    remove("DonationRequestData.csv");
    rename("temp_file.csv", "DonationRequestData.csv");

}

std::vector<Recipient> Recipient::getrecipients()
{
    return std::vector<Recipient>(recipients);
}

int Recipient::getCurrentUser()
{
    return currentUserIndex;
}

int Recipient::getTotalNum()
{
    return totalNumberOfRecipient;
}
//
//int Recipient::getId()
//{
//    return R_ID;
//}
//
//int Recipient::getAge()
//{
//    return Age;
//}
//
//std::string Recipient::getFirstname()
//{
//    return std::string(First_Name);
//}
//
//std::string Recipient::getLastName()
//{
//    return std::string(Last_Name);
//}
//
//std::string Recipient::getE_mail()
//{
//    return std::string(R_Mail);
//}
//
//std::string Recipient::getPassword()
//{
//    return std::string(R_Password);
//}
//
//std::string Recipient::getGender()
//{
//    return std::string(R_Gender);
//}
//
//std::string Recipient::getBloodType()
//{
//    return std::string(R_Blood_Type);
//}
//
std::string Recipient::getHos()
{
    return std::string(Hospital);
}

std::string Recipient::getDoc()
{
    return std::string(Doctor);
}
//
// 
//
std::string Recipient::gettotalNumberOfRecipientsS()
{
    return std::string(totalNumberOfRecipients);
}
//
void Recipient::setCurrentUser(int index)
{
    currentUserIndex = index;
}

Recipient::~Recipient() {


}

 