#pragma once
#include "Variables.h"
#include <ctime>
#include <algorithm>     /* contain ( all_of ) function */
#include <cctype>        /* contain functions which determining if the characters entered are numbers or letters or whitespace.... */
#include <Windows.h>     /* for function sleep */
#include<conio.h>        // for _getch()


void get(string &input)
{

	while (true)
	{
		getline(cin, input);
		if (input[0] != '\0')
		{
			break;
		}
	}
}

// make the pass *
void getPassword(string& st)
{
	int i = 0;
	int a, b;
	while (true)
	{

		a = _getch();     //stores char typed in a

		if (a && a != 224) // 224(arrows)
		{
			if (a >= 32 && a <= 126)
			{
				st += a;   //stores a in pass
				cout << "*";
				++i;

			}
			if (a == '\b' && i >= 1)       //if user typed backspace
										   //i should be greater than 1.
			{
				cout << "\b \b";           //rub the character behind the cursor.
				--i;
				st.erase(i, 1);

			}
			if (a == '\r' && st.size() != 0)//if enter is pressed
			{
				break;               //break the loop
			}
		}
		else {
			b = _getch();
		}
	}

	cout << "\n";
}


void add_hint(int a, int b)
{
	if (b == 1)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "#---------------------------> INVALID INPUT <---------------------------#\n";
		cout << "\n#-------> Don't leave spaces if you do!!\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}
	}
	else if (b == 2)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "#---------> This Licence Plate Number is already stored\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}
	}
	else if (b == 3)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "#---------------------------> INVALID INPUT <---------------------------#\n";
		cout << "\n#-------> Don't leave spaces if you do!!\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			cout << "\n#-------> Remeber : Max Cost of  Hour  = 999 $\n";
			cout << "\n                                 Day   = 9999 $\n";
			cout << "\n                                 Week  = 99999 $\n";

			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}
	}
	else if (b == 4)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "\n#-------> This Customer isn't found.\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}
	}
	else if (b == 5)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "#---------------------------> INVALID DATE <---------------------------#\n";
		cout << "\n#-------> Don't Enter date before today's date If you do\n";
		cout << "\n#-------> Note That: The maximum deadline for reccipt of the car is two days from today's date\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}

	}
	else if (b == 6)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "#---------------------------> INVALID DATE <---------------------------#\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}

	}
	else if (b == 7)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "#---------------------------> INVALID DATE <---------------------------#\n";
		cout << "\n#-------> Note That: The maximum deadline to return the car is one years from pickup date\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}

	}
	else if (b == 8)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "#---------------------------> INVALID INPUT <---------------------------#\n";
		cout << "\n#-------> You can't rent the car for more than half a day\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}

	}
	else if (b == 9)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "\n#-------> This ID is already stored!!\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}

	}
	else if (b == 10)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "\n#-------> Ages under 18 or above 60 years old are not allowed\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}

	}
	else if (b == 11)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "\n#-------> This Credit Card Number is already stored\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}

	}
	else if (b == 12)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "\n#-------> This Phone Number is already stored\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}

	}
	else if (b == 13)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "#---------> This user name is already stored\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}
	}
	else if (b == 14)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "#---------------------------> INVALID User Name <---------------------------#\n";
		cout << "\n#-------> The user name should contain numbers (0 - 9) and letters (a - z) and underscore (_) only.\n";
		cout << "\n#-------> The user name can't be less than 15 characters.\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}
	}
	else if (b == 15)
	{
		cout << "\n\n";
		cout << "\a";
		cout << "#---------------------------> INVALID Password <---------------------------#\n";
		cout << "\n#-------> The Password can't be less than 8 or more than 20 characters.\n";
		cout << "\n#-------> You still have " << 4 - a << " Attempts\n";
		if (a != 4)
		{
			Sleep(3000);
			system("cls");
		}
		else if (a == 4)
		{
			cout << "#-------------------------------------------------------------#\n\n";
		}
	}
}


/* This function return index */
bool Check_ID(string st, int& Id)
{

	bool found = false;
	for (int i = 0; i < cust_idx; i++)
	{
		if (st == arr_cust[i].id)
		{
			Id = i;
			found = true;
			break;
		}
	}
	return found;   // if found = 0 --> this mean that this Customer isn't 
					// if found = 1 --> this mean that this Customer is  
}

/* I will use this function in "getCarL_P_N" function*/
bool Check_LPN(string st)
{
	bool found = false;
	for (int i = 0; i < car_index; i++)
	{
		if (st == arr_car[i].L_P_N)
		{
			found = true;
			break;
		}
	}
	return found;   // if found = 0 --> this mean that this Car isn't 
					// if found = 1 --> this mean that this Car is  
}

/* I will use it in cstomer search*/
/* This function don't return index */
bool Check_ID(string st)
{

	bool found = false;
	for (int i = 0; i < cust_idx; i++)
	{
		if (st == arr_cust[i].id)
		{
			found = true;
			break;
		}
	}
	return found;   // if found = 0 --> this mean that this Customer isn't 
					// if found = 1 --> this mean that this Customer is  
}

/* I will use it in cstomer search*/
/* This function don't return index */
bool Check_CCR(string st)
{

	bool found = false;
	for (int i = 0; i < cust_idx; i++)
	{
		if (st == arr_cust[i].cr_number)
		{
			found = true;
			break;
		}
	}
	return found;   // if found = 0 --> this mean that this Credit isn't 
					// if found = 1 --> this mean that this Credit is  
}

/* I will use it in cstomer search*/
/* This function don't return index */
bool Check_P_N(string st)
{

	bool found = false;
	for (int i = 0; i < cust_idx; i++)
	{
		if (st == arr_cust[i].ph_number)
		{
			found = true;
			break;
		}
	}
	return found;   // if found = 0 --> this mean that this Credit isn't 
					// if found = 1 --> this mean that this Credit is  
}

bool Check_User(string st)
{

	bool found = false;
	for (int i = 0; i < cust_idx; i++)
	{
		if (st == arr_cust[i].us_name)
		{
			found = true;
			break;
		}
	}
	return found;   // if found = 0 --> this mean that this Credit isn't 
					// if found = 1 --> this mean that this Credit is  
}

///////////////////////////////////////////////Date Validation////////////////////////////////////////////
/* Date Validation --> "day"*/
bool check_day(string str)
{
	if (all_of(str.begin(), str.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the str string is number or only 
		&& str.size() <= 2
		&& str[0] != '0')
	{
		int day = stoi(str);
		if (day >= 1 && day <= 31)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

/* Date Validation --> "month"*/
bool check_month(string str)
{
	if (all_of(str.begin(), str.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the str string is number or only 
		&& str.size() <= 2
		&& str[0] != '0')
	{
		int month = stoi(str);
		if (month >= 1 && month <= 12)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

/* Date Validation --> "year"*/
bool check_year(string str)
{
	if (all_of(str.begin(), str.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the str string is number or only 
		&& str.size() <= 4
		&& str[0] != '0')
	{
		int year = stoi(str);
		if (year >= 2022 && year <= 2030)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

/* Date Validation --> "all date"*/
bool check_all_date(int day, int month, int year)
{
	if (1000 <= year && year <= 9999)
	{
		if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day >= 1 && day <= 31)
		{
			return true;
		}
		else
		{
			if (month == 4 || month == 6 || month == 9 || month == 11 && day >= 31 && day <= 30)
			{
				return true;
			}
			else
			{
				if (month == 2)
				{
					if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 && day >= 1 && day <= 29) // check for the lead year
					{
						return true;
					}
					else if (year % 4 != 0 && day >= 1 && day <= 28)
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
		}
	}
	else
	{
		return false;
	}
}

// This function counts number of leap years before the given date
int countLeapYears(int day, int month, int year)
{
	int years = year;

	// Check if the current year needs to be considered for the count of leap years or not
	if (month <= 2)
		years--;
	// this formula count the number of the lead years 
	return years / 4 - years / 100 + years / 400;
}

// This function returns number of days between two given dates
int getDifference(int day1, int month1, int year1, int day2, int month2, int year2)
{
	// count total number of days before first date

	// initialize count using years and day
	long int num_days1 = year1 * 365 + day1;

	// Add days for months in given date
	for (int i = 0; i < month1 - 1; i++)
		num_days1 += monthDays[i];

	// Since every leap year is of 366 days, Add a day for every leap year
	num_days1 += countLeapYears(day1, month1, year1);

	// count total number of days before second date

	// initialize count using years and day
	long int num_days2 = year2 * 365 + day2;

	// Add days for months in given date
	for (int i = 0; i < month2 - 1; i++)
		num_days2 += monthDays[i];

	// Since every leap year is of 366 days, Add a day for every leap year
	num_days2 += countLeapYears(day2, month2, year2);

	// return difference between two counts
	return (num_days2 - num_days1);
}

// this function get the current date
void getCurrentDate(int& day, int& month, int& year)
{
	time_t now = time(0);
	tm* tim = localtime(&now);
	day = tim->tm_mday;
	month = 1 + tim->tm_mon;
	year = 1900 + tim->tm_year;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

// --------------------------------- user search------------------------ -//
bool cust_search_usr(string st1, string& cu_id, int& idx) // the function search will take the username and password which are strings and a variable by refernce to stroe the index of this customer
{                                                      // st1--> username  and  st2---> password
	bool found = false;
	for (int i = 0; i < cust_idx; i++)
	{
		if (st1 == arr_cust[i].us_name)
		{
			found = true;
			idx = i;
			cu_id = arr_cust[i].id;
			break;
		}
	}
	return found; // if found = 0 --> this mean that this customer dosen't have account
				  // if found = 1 --> this mean that this customer has account and you should take its index
}

bool car_search(string st, int& idx) // the function search will take the L_P_N which is string and a variable by refernce to stroe the index of this car
{
	bool found = false;
	for (int i = 0; i < car_index; i++)
	{
		if (st == arr_car[i].L_P_N)
		{
			found = true;
			idx = i;
			break;
		}
	}
	return found; // if found = 0 --> this mean that this car isn't 
				  // if found = 1 --> this mean that this car is  and you should take its index
}

/////////////////////////////////////// START DATE VALIDATION "CAR"  /////////////////////////
void getStartDay(int& st_day)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
			<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
			<< "Cost of Hour                    : " << arr_car[car_index].cost.c_hour << "$\n"
			<< "        Day                     : " << arr_car[car_index].cost.c_day << "$\n"
			<< "        Week                    : " << arr_car[car_index].cost.c_week << "$\n\n"
			<< "Customer ID who rent the car    : " << arr_car[car_index].cust_id << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";

		cout << "\nEnter the Rental start date -->    Day     :    ";
		num_trails++;
		get(sti);

		if (check_day(sti))
		{
			check = true;
			st_day = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);


	} while (num_trails <= 3);
}

void getStartMonth(int& st_Month)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
			<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
			<< "Cost of Hour                    : " << arr_car[car_index].cost.c_hour << "$\n"
			<< "        Day                     : " << arr_car[car_index].cost.c_day << "$\n"
			<< "        Week                    : " << arr_car[car_index].cost.c_week << "$\n\n"
			<< "Customer ID who rent the car    : " << arr_car[car_index].cust_id << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";
		cout << "\nEnter the Rental start date -->    Day     :    " << arr_car[car_index].dat.rc_day
			<< "\n                                   Month   :    ";
		num_trails++;
		get(sti);

		if (check_month(sti))
		{
			check = true;
			st_Month = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);


	} while (num_trails <= 3);
}

void getStartYear(int& st_Year)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
			<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
			<< "Cost of Hour                    : " << arr_car[car_index].cost.c_hour << "$\n"
			<< "        Day                     : " << arr_car[car_index].cost.c_day << "$\n"
			<< "        Week                    : " << arr_car[car_index].cost.c_week << "$\n\n"
			<< "Customer ID who rent the car    : " << arr_car[car_index].cust_id << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";
		cout << "\nEnter the Rental start date -->    Day     :    " << arr_car[car_index].dat.rc_day
			<< "\n                                   Month   :    " << arr_car[car_index].dat.rc_month
			<< "\n                                   Year    :    ";
		num_trails++;
		get(sti);

		if (check_year(sti))
		{
			check = true;
			st_Year = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

/////////////////////////////////////// END DATE VALIDATION "CAR"  /////////////////////////

void getEndDay(int& end_day)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
			<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
			<< "Cost of Hour                    : " << arr_car[car_index].cost.c_hour << "$\n"
			<< "        Day                     : " << arr_car[car_index].cost.c_day << "$\n"
			<< "        Week                    : " << arr_car[car_index].cost.c_week << "$\n\n"
			<< "Customer ID who rent the car    : " << arr_car[car_index].cust_id << "\n\n"
			<< "The Rental start date is        : " << arr_car[car_index].dat.rc_day << "/" << arr_car[car_index].dat.rc_month << "/" << arr_car[car_index].dat.rc_year << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";

		cout << "\nEnter the Rental end date -->    Day     :    ";
		num_trails++;
		get(sti);

		if (check_day(sti))
		{
			check = true;
			end_day = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);

}

void getEndMonth(int& end_month)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
			<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
			<< "Cost of Hour                    : " << arr_car[car_index].cost.c_hour << "$\n"
			<< "        Day                     : " << arr_car[car_index].cost.c_day << "$\n"
			<< "        Week                    : " << arr_car[car_index].cost.c_week << "$\n\n"
			<< "Customer ID who rent the car    : " << arr_car[car_index].cust_id << "\n\n"
			<< "The Rental start date is        : " << arr_car[car_index].dat.rc_day << "/" << arr_car[car_index].dat.rc_month << "/" << arr_car[car_index].dat.rc_year << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";

		cout << "\nEnter the Rental end date -->    Day     :    " << arr_car[car_index].dat.rtn_day
			<< "\n                                 Month   :    ";
		num_trails++;
		get(sti);

		if (check_month(sti))
		{
			check = true;
			end_month = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);

}

void getEndYear(int& end_year)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
			<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
			<< "Cost of Hour                    : " << arr_car[car_index].cost.c_hour << "$\n"
			<< "        Day                     : " << arr_car[car_index].cost.c_day << "$\n"
			<< "        Week                    : " << arr_car[car_index].cost.c_week << "$\n\n"
			<< "Customer ID who rent the car    : " << arr_car[car_index].cust_id << "\n\n"
			<< "The Rental start date is        : " << arr_car[car_index].dat.rc_day << "/" << arr_car[car_index].dat.rc_month << "/" << arr_car[car_index].dat.rc_year << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";

		cout << "\nEnter the Rental end date -->    Day     :    " << arr_car[car_index].dat.rtn_day
			<< "\n                                 Month   :    " << arr_car[car_index].dat.rtn_month
			<< "\n                                 Year    :    ";
		num_trails++;
		get(sti);

		if (check_year(sti))
		{
			check = true;
			end_year = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);

}


/////////////////////////////////////// START DATE VALIDATION "CUSTOMER"  /////////////////////////

void getReverseS_Day(string st, date& dat)
{
	check = false;
	num_trails = 1;
	do
	{
		system("cls");
		cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";
		cout << "\nThe Car Return Branch is                   :    " << st;
		cout << "\nEnter the Rental start date -->    Day     :    ";
		num_trails++;
		get(sti);

		if (check_day(sti))
		{
			check = true;
			dat.rc_day = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);
	} while (num_trails <= 3);
}
void getReverseS_Month(string st, date& dat)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";
		cout << "\nThe Car Return Branch is                   :    " << st;
		cout << "\nEnter the Rental start date -->    Day     :    " << dat.rc_day
			<< "\n                                   Month   :    ";
		num_trails++;
		get(sti);

		if (check_month(sti))
		{
			check = true;
			dat.rc_month = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);
	} while (num_trails <= 3);
}
void getReverseS_Year(string st, date& dat)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";
		cout << "\nThe Car Return Branch is                   :    " << st;
		cout << "\nEnter the Rental start date -->    Day     :    " << dat.rc_day
			<< "\n                                   Month   :    " << dat.rc_month
			<< "\n                                   Year    :    ";
		num_trails++;
		get(sti);

		if (check_year(sti))
		{
			check = true;
			dat.rc_year = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);
	} while (num_trails <= 3);
}


/////////////////////////////////////// END DATE VALIDATION "CUSTOMER"  /////////////////////////

void getReverseE_Day(string st, date& Date)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";
		cout << "\nThe Car Return Branch is                   :    " << st;
		cout << "\nThe Rental start date is                   :    " << Date.rc_day << "/" << Date.rc_month << "/" << Date.rc_year;
		cout << "\nEnter the Rental end date -->      Day     :    ";
		num_trails++;
		get(sti);

		if (check_day(sti))
		{
			check = true;
			Date.rtn_day = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);
	} while (num_trails <= 3);
}
void getReverseE_Month(string st, date& Date)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";
		cout << "\nThe Car Return Branch is                   :    " << st;
		cout << "\nThe Rental start date is                   :    " << Date.rc_day << "/" << Date.rc_month << "/" << Date.rc_year;
		cout << "\nEnter the Rental end date -->      Day     :    " << Date.rtn_day
			<< "\n                                   Month   :    ";
		num_trails++;
		get(sti);

		if (check_month(sti))
		{
			check = true;
			Date.rtn_month = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);
	} while (num_trails <= 3);
}
void getReverseE_Year(string st, date& Date)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";
		cout << "\nThe Car Return Branch is                   :    " << st;
		cout << "\nThe Rental start date is                   :    " << Date.rc_day << "/" << Date.rc_month << "/" << Date.rc_year;
		cout << "\nEnter the Rental end date -->      Day     :    " << Date.rtn_day
			<< "\n                                   Month   :    " << Date.rtn_month
			<< "\n                                   Year    :    ";
		num_trails++;
		get(sti);

		if (check_year(sti))
		{
			check = true;
			Date.rtn_year = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);
	} while (num_trails <= 3);
}

