#include "Admin.h"
using namespace std;
Admin::Admin()
{
    
}

bool Admin::LoginAdmin(std::string un, std::string pw)
{
    vector<string> adminUsername;
    vector<string> adminPassword;
    char const* usn;
    char const* psd;

    
    ifstream fs("Admin.txt", ios::in);
    while (!fs.eof())
    {
        fs >> username >> password;
        adminUsername.push_back(username);
        adminPassword.push_back(password);
        usn = un.c_str();
        psd = pw.c_str();
        if (strcmp(usn, this->username.c_str()) == 0 && strcmp(psd, this->password.c_str()) == 0)
            return true;
        else
            return false;

    }
    fs.close();
}

Admin::~Admin()
{

}


Request::Request()
{

}

void Request::Read_Data()
{
    ifstream Data_File;
    Data_File.open("DonationRequestData.csv");
    while (Data_File.good())
    {
        Request_Data.clear();
        getline(Data_File, line);
        stringstream s(line);
        while (getline(s, unit, ','))
        {
            Request_Data.push_back(unit);
        }
        if (!Request_Data.empty())
        {
            Request requst(stoi(Request_Data[0]), Request_Data[1], Request_Data[2], Request_Data[3]);
            totalNumberOfRequests++;
            request.push_back(requst);
        }
    }
    totalNumberOfRequestss = to_string(totalNumberOfRequests);
    totalNumberOfRequests = 0;
    Data_File.close();
}



Request::Request(int Donor_ID, std::string blood, std::string date,  std::string state)
{
    this->Donor_ID = Donor_ID;
    this->Blood = blood;
    this->state = state;
    this->Date = date;
}
/// <summary>

/// </summary>
/// <param name="index"></param>
/// <param name="Age"></param>
/// <param name="diseases"></param>
/// <param name="checkdate"></param>
/// <returns></returns>
bool Request::validate_donors_request(int index,int Age,std::string diseases, bool checkdate)
{
    Read_Data();
    
        if (Age >= 17 && checkdate == true && Age <= 60 && (diseases == "NULL" || diseases == "null"))
        {
            return true;
        }
        else
        {
            return false;
        }
   
}



void Request::change_state(int index, string update, int currentUserIndex)
{
    fstream file_1, file_2;
    file_1.open("DonationRequestData.csv", ios::in | ios::app);
    file_2.open("temp_file.csv", ios::out | ios::app);
     while (file_1.good())
    {
        Request_Data.clear();
        getline(file_1, line);
        stringstream s_line(line);
        while (getline(s_line, unit, ','))
        {
            Request_Data.push_back(unit);
        }
        if (Request_Data.size() != 0)
        {
            if (stoi(Request_Data[0]) == currentUserIndex)
            {
                Request_Data[index] = update;
                for (int i = 0; i < Request_Data.size(); i++) {
                    file_2 << Request_Data[i] << ",";
                }
                file_2 << endl;
            }
            else if (stoi(Request_Data[0]) != currentUserIndex) {
                for (int i = 0; i < Request_Data.size(); ++i) {
                    file_2 << Request_Data[i] << ",";
                }file_2 << endl;
            }
        }
    }
    file_1.close();
    file_2.close();
    remove("DonationRequestData.csv");
    rename("temp_file.csv", "DonationRequestData.csv");
}



int Request::check_leap_year(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)   //if year is a leap year
        return 1;

    else

        return 0;
}



int Request::no_of_days_in_month(int month, int year)
{
    // jan, march, may, july, aug, oct, dec contains 31 days
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;

    // april, jun, sept, nov contains 30 days
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;

    if (month == 2)
    {
        int n = check_leap_year(year);
        if (n == 1)    // if year is a leap year then Feb will contain 29 days, otherwise it contains 28 days
            return 29;

        else
            return 28;
    }
}




int Request::calc_date_diff(int day1, int month1, int year1, int day2, int month2, int year2)
{
    if (year1 == year2)
    {
        if (month1 == month2)
        {
            if (day1 == day2)      //for same dates
                return 0;
            else
                return abs(day1 - day2);  //for same year, same month but diff days
        }
        else if (month1 < month2)
        {
            int result = 0;
            for (int i = month1; i < month2; i++)
                result = result + no_of_days_in_month(i, year1);

            if (day1 == day2)      //for same year, same day but diff month 
                return result;
            else if (day1 < day2)
            {
                result = result + (day2 - day1);
                return result;
            }
            else
            {
                result = result - (day1 - day2);
                return result;
            }
        }
        else
        {
            int result = 0;
            for (int i = month2; i < month1; i++)
                result = result + no_of_days_in_month(i, year1);

            if (day1 == day2)
                return result;
            else if (day2 < day1)
            {
                result = result + (day1 - day2);
                return result;
            }
            else
            {
                result = result - (day2 - day1);
                return result;
            }
        }
    }
    else if (year1 < year2)
    {
        int temp = 0;
        for (int i = year1; i < year2; i++)
        {
            if (check_leap_year(i))
                temp = temp + 366;
            else
                temp = temp + 365;
        }

        if (month1 == month2)
        {
            if (day1 == day2)      //for same month, same day but diff year
                return temp;
            else if (day1 < day2)
                return temp + (day2 - day1);
            else
                return temp - (day1 - day2);
        }
        else if (month1 < month2)
        {
            int result = 0;
            for (int i = month1; i < month2; i++)
                result = result + no_of_days_in_month(i, year2);

            if (day1 == day2)      // for same day, diff year and diff month
                return temp + result;
            else if (day1 < day2)
            {
                result = result + (day2 - day1);
                return temp + result;
            }
            else
            {
                result = result - (day1 - day2);
                return temp + result;
            }
        }
        else
        {
            int result = 0;
            for (int i = month2; i < month1; i++)
                result = result + no_of_days_in_month(i, year2);

            if (day1 == day2)
                return temp - result;
            else if (day2 < day1)
            {
                result = result + (day1 - day2);
                return temp - result;
            }
            else
            {
                result = result - (day2 - day1);
                return temp - result;
            }
        }
    }
    else
    {
        int temp = 0;
        for (int i = year2; i < year1; i++)
        {
            if (check_leap_year(i))
                temp = temp + 366;
            else
                temp = temp + 365;
        }

        if (month1 == month2)
        {
            if (day1 == day2)      // for same day, same month but diff year
                return temp;
            else if (day2 < day1)
                return temp + (day1 - day2);
            else
                return temp - (day2 - day1);
        }
        else if (month2 < month1)
        {
            int result = 0;
            for (int i = month2; i < month1; i++)
                result = result + no_of_days_in_month(i, year1);

            if (day1 == day2)
                return temp + result;
            else if (day2 < day1)
            {
                result = result + (day1 - day2);
                return temp + result;
            }
            else
            {
                result = result - (day2 - day1);
                return temp + result;
            }
        }
        else
        {
            int result = 0;
            for (int i = month1; i < month2; i++)
                result = result + no_of_days_in_month(i, year1);

            if (day1 == day2)      // for same day, diff year and diff month
                return temp - result;
            else if (day1 < day2)
            {
                result = result + (day2 - day1);
                return temp - result;
            }
            else
            {
                result = result - (day1 - day2);
                return temp - result;
            }
        }
    }
}
bool Request::validateDate(int diff)
{

    if (diff >= 90)
        return true;
    else
        return false;
}




// Given a date, returns number of days elapsed
// from the  beginning of the current year (1st
// jan).

int Request::offsetDays(int d, int m, int y)
{
    int offset = d;

    switch (m - 1)
    {
    case 11:
        offset += 30;
    case 10:
        offset += 31;
    case 9:
        offset += 30;
    case 8:
        offset += 31;
    case 7:
        offset += 31;
    case 6:
        offset += 30;
    case 5:
        offset += 31;
    case 4:
        offset += 30;
    case 3:
        offset += 31;
    case 2:
        offset += 28;
    case 1:
        offset += 31;
    }

    if (check_leap_year(y) && m > 2)
        offset += 1;

    return offset;
}

// Given a year and days elapsed in it, finds
// date by storing results in d and m.
void Request::revoffsetDays(int offset, int y, int* d, int* m)
{
    int month[13] = { 0, 31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31 };

    if (check_leap_year(y)) {
    month[2] = 29;
}
    int i;
    for (i = 1; i <= 12; i++)
    {
        if (offset <= month[i])
            break;
        offset = offset - month[i];
    }

    *d = offset;
    *m = i;
}

// Add x days to the given date.
std::string Request::addDays(int d1, int m1, int y1, int x)
{
    int offset1 = offsetDays(d1, m1, y1);
    int remDays = check_leap_year(y1) ? (366 - offset1) : (365 - offset1);

    // y2 is going to store result year and
    // offset2 is going to store offset days
    // in result year.
    int y2, offset2;
    if (x <= remDays)
    {
        y2 = y1;
        offset2 = offset1 + x;
    }

    else
    {
        // x may store thousands of days.
        // We find correct year and offset
        // in the year.
        x -= remDays;
        y2 = y1 + 1;
        int y2days = check_leap_year(y2) ? 366 : 365;
        while (x >= y2days)
        {
            x -= y2days;
            y2++;
            y2days = check_leap_year(y2) ? 366 : 365;
        }
        offset2 = x;
    }

    // Find values of day and month from
    // offset of result year.
    int m2, d2;
    revoffsetDays(offset2, y2, &d2, &m2);

    string date = to_string(d2) + "-" + to_string(m2) + "-" + to_string(y2);
    return date;
}