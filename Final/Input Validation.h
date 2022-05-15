#pragma once
#include "Mini Input Validation.h"
#include <iomanip>       /* contain setw() function for design */

///////////////////////////////////// Add Car  ///////////////////////////

void getCarType(string& st)
{
	num_trails = 1;
	check = false;
	string choise;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "TO add a car from type--> ";
		for (int i = 0; i < num_of_CarType; i++)
		{
			cout << left << setw(10) << carTypeArray[i] << "  Enter " << i + 1 << "\n";
			cout << "                          ";
		}
		cout << "\nEnter your choice --------> ";
		get(choise);
		num_trails++;

		if (all_of(choise.begin(), choise.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the choice string is number or only
			&& choise.size() == 1 // check if the size of choice string equal 1 or not 
			)
		{
			int a = stoi(choise); // here we convert the string choise to integar
			if (a == 0 || a > num_of_CarType)
				add_hint(num_trails, 1);
			else {
				st = carTypeArray[a - 1];  //we make the type of the car in our car_arrays equal carTypeArray[our integar - 1]
				check = true;
				system("cls");
				break;
			}
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void getCarL_P_N(string& st)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";

		cout << "\nEnter car license plate number \"3 or 4 digits\"         :    ";
		num_trails++;
		get(st);
		if (all_of(st.begin(), st.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only
			&& st.size() == 3 || st.size() == 4  // check if the size of st string equal 3 , 4 or not 
			&& st[0] != '0'   // to verify that the input is only between 1 --> 9
			)
		{
			if (Check_LPN(st))  // if this function return true this mean that this lpn is  and we can't add it
								// if this function return false this mean that this lpn isn't  and we can add it
				add_hint(num_trails, 2);
			else
			{
				check = true;
				system("cls");
				break;
			}
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

/* I will use this function in "GetCarCost" function*/
void getHourCost(int& hour_cost)
{
	num_trails = 1;
	check = false;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
			<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";

		cout << "\nEnter the cost of hiring  for   Hour     :    ";
		num_trails++;
		get(sti);

		if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only 
			&& sti.size() <= 3 // max cost of hour equal 999 $
			&& sti[0] != '0'
			)
		{
			check = true;
			hour_cost = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 3);

	} while (num_trails <= 3);
}

/* I will use this function in "GetCarCost" function*/
void getDayCost(int& day_cost)
{
	num_trails = 1;
	check = false;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
			<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";

		cout << "\nEnter the cost of hiring  for   Hour     :    " << arr_car[car_index].cost.c_hour << "\n";
		cout << "\n                                Day      :    ";
		num_trails++;
		get(sti);

		if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only 
			&& sti.size() <= 4 // max cost of day equal 9999 $
			&& sti[0] != '0'
			)
		{
			check = true;
			day_cost = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 3);

	} while (num_trails <= 3);
}

/* I will use this function in "GetCarCost" function*/
void getWeekCost(int& week_cost)
{
	num_trails = 1;
	check = false;
	do
	{
		cout << "#------------------------------> add car Department <--------------------------------#\n\n";
		cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
			<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";

		cout << "\nEnter the cost of hiring  for   Hour     :    " << arr_car[car_index].cost.c_hour << "\n";
		cout << "\n                                Day      :    " << arr_car[car_index].cost.c_day << "\n";
		cout << "\n                                Week     :    ";
		num_trails++;
		get(sti);

		if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only 
			&& sti.size() <= 5 // max cost of week equal 99999 $
			&& sti[0] != '0'
			)
		{
			check = true;
			week_cost = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 3);

	} while (num_trails <= 3);
}

void getCarCost(cst& cost)
{
	getHourCost(cost.c_hour);
	if (check)
	{
		getDayCost(cost.c_day);
		if (check)
		{
			getWeekCost(cost.c_week);
		}
	}
}

void getCarState(bool& state)
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
			<< "--------------------------------------------------------------------------------------\n";

		cout << "\nAre you going to rent the car now?\n"
			<< "(1 --> no /0 --> yes)       :    ";

		num_trails++;
		get(sti);
		if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only 
			&& sti.size() == 1
			&& sti[0] == '1' || sti[0] == '0'
			)
		{
			check = true;
			state = stoi(sti);
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void getCustomerID(string& st, int& id)
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
			<< "--------------------------------------------------------------------------------------\n";
		cout << "\nEnter the ID of the customer who will rent the car  :    ";
		num_trails++;
		get(st);
		if (all_of(st.begin(), st.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only
			&& st.size() == 14  // check if the size of st string equal 10 or not 
			&& st[0] != '0'   // to verify that the input is only between 1 --> 9
			)
		{
			if (!Check_ID(st, id))  // if this function return false this mean that this customer isn't  and he can't hire the car
								// if this function return true this mean that this customer is  and he can hire the car
				add_hint(num_trails, 4);

			else
			{
				check = true;
				system("cls");
				break;
			}
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void GetStartDate(date& date)
{
	int ctr = 1;
	do
	{
		ctr++;
		getStartDay(date.rc_day);
		if (check)
		{
			getStartMonth(date.rc_month);
			if (check)
			{
				getStartYear(date.rc_year);
				if (check)
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
					check = false;
					if (check_all_date(date.rc_day, date.rc_month, date.rc_year))
					{
						int d, m, y; // current date
						getCurrentDate(d, m, y);
						int n = getDifference(d, m, y, date.rc_day, date.rc_month, date.rc_year);
						if (n >= 0 && n <= 2)
						{
							check = true;
							system("cls");
							break;
						}
						else
							add_hint(ctr, 5);
					}
					else
						add_hint(ctr, 6);

				}
			}
		}
	} while (ctr <= 3);

}


void GetEndDate(date& date)
{
	int ctr = 1;
	do
	{
		ctr++;
		getEndDay(date.rtn_day);
		if (check)
		{
			getEndMonth(date.rtn_month);
			if (check)
			{
				getEndYear(date.rtn_year);
				if (check)
				{

					cout << "#------------------------------> add car Department <--------------------------------#\n\n";
					cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
						<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
						<< "Cost of Hour                    : " << arr_car[car_index].cost.c_hour << "$\n"
						<< "        Day                     : " << arr_car[car_index].cost.c_day << "$\n"
						<< "        Week                    : " << arr_car[car_index].cost.c_week << "$\n\n"
						<< "Customer ID who rent the car    : " << arr_car[car_index].cust_id << "\n\n"
						<< "The Rental start date is        : " << arr_car[car_index].dat.rc_day << "/" << arr_car[car_index].dat.rc_month << "/" << arr_car[car_index].dat.rc_year << "\n\n"
						<< "The Rental end date is          : " << arr_car[car_index].dat.rtn_day << "/" << arr_car[car_index].dat.rtn_month << "/" << arr_car[car_index].dat.rtn_year << "\n\n"
						<< "--------------------------------------------------------------------------------------\n";
					check = false;
					if (check_all_date(date.rtn_day, date.rtn_month, date.rtn_year))
					{
						int n = getDifference(date.rc_day, date.rc_month, date.rc_year, date.rtn_day, date.rtn_month, date.rtn_year);
						if (n >= 0 && n <= 365)
						{
							check = true;
							system("cls");
							break;
						}
						else
							add_hint(ctr, 7);

					}
					else
						add_hint(ctr, 6);

				}
			}
		}
	} while (ctr <= 3);

}

void getNumHours(date& d)
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
			<< "The Rental end date is          : " << arr_car[car_index].dat.rtn_day << "/" << arr_car[car_index].dat.rtn_month << "/" << arr_car[car_index].dat.rtn_year << "\n\n"
			<< "--------------------------------------------------------------------------------------\n";
		cout << "\nEnter the number of rental hours   :  ";
		num_trails++;
		get(sti);
		if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only 
			&& sti.size() <= 2
			&& sti[0] != '0')

		{
			int a = stoi(sti);
			if (a > 12)
				add_hint(num_trails, 8);
			else
			{
				check = true;
				d.num_hours = a;
				system("cls");
				break;
			}
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void getCarBranch(string& st, int a)
{

	if (a == 1)
	{
		check = false;
		num_trails = 1;
		string choise;
		do
		{
			cout << "#------------------------------> add car Department <--------------------------------#\n\n";
			cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
				<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
				<< "Cost of Hour                    : " << arr_car[car_index].cost.c_hour << "$\n"
				<< "        Day                     : " << arr_car[car_index].cost.c_day << "$\n"
				<< "        Week                    : " << arr_car[car_index].cost.c_week << "$\n\n"
				<< "--------------------------------------------------------------------------------------\n";
			cout << "\nIf the car is in       ";
			for (int i = 0; i < num_of_Branches; i++)
			{

				cout << left << setw(20) << brancheArray[i] << " Enter " << i + 1 << "\n";
				cout << "                       ";
			}

			cout << "\nEnter your choise ------> ";
			num_trails++;
			get(choise);
			if (all_of(choise.begin(), choise.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the choice string is number or only
				&& choise.size() == 1 // check if the size of choice string equal 1 or not 
				&& choise[0] != '0')   // to verify that the input is only between 1 --> 9

			{
				int a = stoi(choise); // here we convert the string choise to integar
				st = brancheArray[a - 1];  //we make the type of the car in our car_arrays equal carTypeArray[our integar - 1]
				check = true;
				system("cls");
				cout << "#------------------------------> add car Department <--------------------------------#\n\n";
				cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
					<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
					<< "Cost of Hour                    : " << arr_car[car_index].cost.c_hour << "$\n"
					<< "        Day                     : " << arr_car[car_index].cost.c_day << "$\n"
					<< "        Week                    : " << arr_car[car_index].cost.c_week << "$\n\n"
					<< "The current branch is           :  " << arr_car[car_index].cr_branch << "\n\n"
					<< "--------------------------------------------------------------------------------------\n";

				break;
			}
			else
				add_hint(num_trails, 1);

		} while (num_trails <= 3);
	}
	if (a == 2)
	{
		check = false;
		num_trails = 1;
		string choise;
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
				<< "The Rental end date is          : " << arr_car[car_index].dat.rtn_day << "/" << arr_car[car_index].dat.rtn_month << "/" << arr_car[car_index].dat.rtn_year << "\n\n";
			if (arr_car[car_index].dat.num_hours != 0)
			{
				cout << "Number of rental hours equal   : " << arr_car[car_index].dat.num_hours << "hours\n\n";
			}
			cout << "--------------------------------------------------------------------------------------\n";

			cout << "\nIf the customer will receives the car from ";
			for (int i = 0; i < num_of_Branches; i++)
			{

				cout << left << setw(20) << brancheArray[i] << " Enter " << i + 1 << "\n";
				cout << "                                           ";
			}

			cout << "\nEnter your choise ------> ";
			num_trails++;
			get(choise);
			if (all_of(choise.begin(), choise.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the choice string is number or only
				&& choise.size() == 1 // check if the size of choice string equal 1 or not 
				&& choise[0] != '0'   // to verify that the input is only between 1 --> 9
				)
			{
				int a = stoi(choise); // here we convert the string choise to integar
				st = brancheArray[a - 1];  //we make the type of the car in our car_arrays equal carTypeArray[our integar - 1]
				check = true;
				system("cls");
				break;
			}
			else
				add_hint(num_trails, 1);


		} while (num_trails <= 3);

	}
	if (a == 3)
	{
		check = false;
		num_trails = 1;
		string choise;
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
				<< "The Rental end date is          : " << arr_car[car_index].dat.rtn_day << "/" << arr_car[car_index].dat.rtn_month << "/" << arr_car[car_index].dat.rtn_year << "\n\n";
			if (arr_car[car_index].dat.num_hours != 0)
			{
				cout << "Number of rental hours equal   : " << arr_car[car_index].dat.num_hours << "hours\n\n";
			}
			cout << "The pickup branch is           : " << arr_car[car_index].cr_branch << "\n\n";
			cout << "--------------------------------------------------------------------------------------\n";

			cout << "\nIf the customer will return the car in ";
			for (int i = 0; i < num_of_Branches; i++)
			{

				cout << left << setw(20) << brancheArray[i] << " Enter " << i + 1 << "\n";
				cout << "                                       ";
			}

			cout << "\nEnter your choise ------> ";
			num_trails++;
			get(choise);
			if (all_of(choise.begin(), choise.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the choice string is number or only
				&& choise.size() == 1 // check if the size of choice string equal 1 or not 
				&& choise[0] != '0'   // to verify that the input is only between 1 --> 9
				)
			{
				int a = stoi(choise); // here we convert the string choise to integar
				st = brancheArray[a - 1];  //we make the type of the car in our car_arrays equal carTypeArray[our integar - 1]
				check = true;
				system("cls");
				break;
			}
			else
				add_hint(num_trails, 1);


		} while (num_trails <= 3);
	}

}

void confirm_rental(date dat, int idx, int& cost)
{
	cout << "#------------------------------> add car Department <--------------------------------#\n\n";
	cout << "Car type is                     : " << arr_car[car_index].type << "\n\n"
		<< "Car licence plate number is     : " << arr_car[car_index].L_P_N << "\n\n"
		<< "Cost of Hour                    : " << arr_car[car_index].cost.c_hour << "$\n"
		<< "        Day                     : " << arr_car[car_index].cost.c_day << "$\n"
		<< "        Week                    : " << arr_car[car_index].cost.c_week << "$\n\n"
		<< "Customer ID who rent the car    : " << arr_car[car_index].cust_id << "\n\n"
		<< "The Rental start date is        : " << arr_car[car_index].dat.rc_day << "/" << arr_car[car_index].dat.rc_month << "/" << arr_car[car_index].dat.rc_year << "\n\n"
		<< "The Rental end date is          : " << arr_car[car_index].dat.rtn_day << "/" << arr_car[car_index].dat.rtn_month << "/" << arr_car[car_index].dat.rtn_year << "\n\n";
	if (arr_car[car_index].dat.num_hours != 0)
	{
		cout << "Number of rental hours equal   : " << arr_car[car_index].dat.num_hours << "hours\n\n";
	}
	cout << "The pickup branch is           : " << arr_car[car_index].cr_branch << "\n\n"
		<< "The return branch is           : " << arr_car[car_index].rtn_branch << "\n\n";

	cout << "--------------------------------------------------------------------------------------\n";

	check = false;
	int num_days =
		getDifference(dat.rc_day, dat.rc_month, dat.rc_year,
			dat.rtn_day, dat.rtn_month, dat.rtn_year);
	if (num_days == 0)
	{
		cost = dat.num_hours * arr_car[idx].cost.c_hour;
		cout << "\n\n#---------------> The Total rental cost =  " << cost << " $\n";
	}
	else
	{
		int num_weeks = num_days / 7;
		num_days = num_days % 7;
		cost = num_weeks * arr_car[idx].cost.c_week + num_days * arr_car[idx].cost.c_day;
		cout << "\n\n#---------------> The Total rental cost = " << cost << " $\n";
	}
	cout << "\n--------------------------------------------------------------------------------------\n";
	cout << "\n\n#---------------> To confirm the rental, press \"y\" or \"Y\".\n\n#---------------> To cancel it, press anything else\n";
	cout << "#---------------> Enter your choice : ";
	get(sti);
	if (sti == "y" || sti == "Y")
	{
		check = true;
	}
	else
	{
		check = false;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////// Add Customer  ///////////////////////////

void getCustF_Name(string& st)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#-------------------------------> customer add Department <----------------------------#\n\n";
		cout << "#---------> Enter The Customer first name       : ";
		num_trails++;
		get(st);
		if (all_of(st.begin(), st.end(), [](char ch) {return (isalpha(ch)); })
			&& st.size() <= 15)
		{
			check = true;
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void getCustL_Name(string& st)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#-------------------------------> customer add section <----------------------------#\n\n";
		cout << "\nThe Customer first name       : " << arr_cust[cust_idx].f_name << "\n"
			<< "--------------------------------------------------------------------------------------\n";
		cout << "\n#---------> Enter The customer last name    : ";
		num_trails++;
		get(st);
		if (all_of(st.begin(), st.end(), [](char ch) {return (isalpha(ch)); })
			&& st.size() <= 15)
		{
			check = true;
			system("cls");
			break;
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void getCustID(string& st)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#-------------------------------> customer add section <----------------------------#\n\n";
		cout << "\nThe Customer first name       : " << arr_cust[cust_idx].f_name << "\n"
			<< "\nThe Customer last name        : " << arr_cust[cust_idx].l_name << "\n"
			<< "--------------------------------------------------------------------------------------\n";
		cout << "\n#---------> Enter The customer ID           : ";
		num_trails++;
		get(st);
		if (all_of(st.begin(), st.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only
			&& st.size() == 14  // check if the size of st string equal 10 or not 
			&& st[0] != '0'   // to verify that the input is only between 1 --> 9
			)
		{
			if (Check_ID(st))
				add_hint(num_trails, 9);
			else
			{
				check = true;
				system("cls");
				break;
			}
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void getCustage(int& age)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#-------------------------------> customer add section <----------------------------#\n\n";
		cout << "\nThe Customer first name       : " << arr_cust[cust_idx].f_name << "\n"
			<< "\nThe Customer last name        : " << arr_cust[cust_idx].l_name << "\n"
			<< "\nThe customer ID               : " << arr_cust[cust_idx].id << "\n"
			<< "--------------------------------------------------------------------------------------\n";
		cout << "\n#---------> Enter The customer age          : ";
		num_trails++;
		get(sti);
		if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only
			&& sti.size() == 2  // check if the size of st string equal 2 or not 
			&& sti[0] != '0'   // to verify that the input is only between 1 --> 9
			)
		{
			age = stoi(sti);
			if (age >= 18 && age <= 60)
			{
				check = true;
				system("cls");
				break;
			}
			else
				add_hint(num_trails, 10);

		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void getCustCCN(string& st)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#-------------------------------> customer add section <----------------------------#\n\n";
		cout << "\nThe Customer first name       : " << arr_cust[cust_idx].f_name << "\n"
			<< "\nThe Customer last name        : " << arr_cust[cust_idx].l_name << "\n"
			<< "\nThe customer ID               : " << arr_cust[cust_idx].id << "\n"
			<< "\nThe customer age              : " << arr_cust[cust_idx].age << "\n"
			<< "--------------------------------------------------------------------------------------\n";
		cout << "\n#---------> Enter The customer Credit Card Number \" only 5 digits\"      : ";
		num_trails++;
		get(st);
		if (all_of(st.begin(), st.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only
			&& st.size() == 5  // check if the size of st string equal 5 or not 
			&& st[0] != '0'
			)
		{
			if (Check_CCR(st))
				add_hint(num_trails, 11);
			else
			{
				check = true;
				system("cls");
				break;
			}
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void getCustP_N(string& st)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#-------------------------------> customer add section <----------------------------#\n\n";
		cout << "\nThe Customer first name       : " << arr_cust[cust_idx].f_name << "\n"
			<< "\nThe Customer last name        : " << arr_cust[cust_idx].l_name << "\n"
			<< "\nThe customer ID               : " << arr_cust[cust_idx].id << "\n"
			<< "\nThe customer age              : " << arr_cust[cust_idx].age << "\n"
			<< "\nThe customer Credit Card Num  : " << arr_cust[cust_idx].cr_number << "\n"
			<< "--------------------------------------------------------------------------------------\n";
		cout << "\n#---------> Enter The customer Phone Number          : ";
		num_trails++;
		get(st);
		if (all_of(st.begin(), st.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only
			&& st.size() == 11  // check if the size of st string equal 5 or not 
			&& st[0] == '0'
			)
		{
			if (Check_P_N(st))
				add_hint(num_trails, 12);

			else
			{
				check = true;
				system("cls");
				break;
			}
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void getusername(string& st)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#-------------------------------> customer add section <----------------------------#\n\n";
		cout << "\nThe Customer first name       : " << arr_cust[cust_idx].f_name << "\n"
			<< "\nThe Customer last name        : " << arr_cust[cust_idx].l_name << "\n"
			<< "\nThe customer ID               : " << arr_cust[cust_idx].id << "\n"
			<< "\nThe customer age              : " << arr_cust[cust_idx].age << "\n"
			<< "\nThe customer Credit Card Num  : " << arr_cust[cust_idx].cr_number << "\n"
			<< "\nThe customer Phone Number     : " << arr_cust[cust_idx].ph_number << "\n"
			<< "--------------------------------------------------------------------------------------\n";
		cout << "Enter The email user name      : ";
		num_trails++;
		get(st);

		if (all_of(st.begin(), st.end(), [](char ch) {return (ch >= 48 && ch <= 57 || ch >= 97 && ch <= 122 || ch == 95); }) // check if each character in the st string is number or only
			&& st.size() <= 15  // check if the size of st string equal 5 or not 
			)
		{
			if (Check_User(st))
				add_hint(num_trails, 13);
			else
			{
				st += "@customer.crc";
				check = true;
				system("cls");
				break;
			}
		}
		else
			add_hint(num_trails, 14);

	} while (num_trails <= 3);
}

void getpass(string& st)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#-------------------------------> customer add section <----------------------------#\n\n";
		cout << "\nThe Customer first name       : " << arr_cust[cust_idx].f_name << "\n"
			<< "\nThe Customer last name        : " << arr_cust[cust_idx].l_name << "\n"
			<< "\nThe customer ID               : " << arr_cust[cust_idx].id << "\n"
			<< "\nThe customer age              : " << arr_cust[cust_idx].age << "\n"
			<< "\nThe customer Credit Card Num  : " << arr_cust[cust_idx].cr_number << "\n"
			<< "\nThe customer Phone Number     : " << arr_cust[cust_idx].ph_number << "\n"
			<< "\nThe customer email is         : " << arr_cust[cust_idx].us_name << "\n"
			<< "--------------------------------------------------------------------------------------\n";
		cout << "Enter The password      : ";
		num_trails++;
		get(st);
		if (all_of(st.begin(), st.end(), [](char ch) {return (!isspace(ch)); }) // check if each character in the st string is number or only
			&& st.size() <= 20 && st.size() >= 8  // check if the size of st string equal 5 or not 
			)
		{
			system("cls");
			check = true;
			cout << "#-------------------------------> customer add section <----------------------------#\n\n";
			cout << "\nThe Customer first name       : " << arr_cust[cust_idx].f_name << "\n"
				<< "\nThe Customer last name        : " << arr_cust[cust_idx].l_name << "\n"
				<< "\nThe customer ID               : " << arr_cust[cust_idx].id << "\n"
				<< "\nThe customer age              : " << arr_cust[cust_idx].age << "\n"
				<< "\nThe customer Credit Card Num  : " << arr_cust[cust_idx].cr_number << "\n"
				<< "\nThe customer Phone Number     : " << arr_cust[cust_idx].ph_number << "\n"
				<< "\nThe customer email is         : " << arr_cust[cust_idx].us_name << "\n"
				<< "\nThe customer password is      : " << arr_cust[cust_idx].pass << "\n"
				<< "--------------------------------------------------------------------------------------\n\n";
			break;
		}
		else
			add_hint(num_trails, 15);

	} while (num_trails <= 3);
}

/////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////// Add Reverse  ///////////////////////////

void getReverseBranch(string& st)
{
	check = false;
	num_trails = 1;

	do
	{
		system("cls");
		cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";
		cout << "\nEnter the number representing the return branch ";
		for (int i = 0; i < num_of_Branches; i++)
		{

			cout << left << setw(20) << brancheArray[i] << " Enter  " << i + 1 << "\n";
			cout << "                                                ";
		}

		cout << "\nEnter your choise ------> ";
		num_trails++;
		get(sti);
		if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the choice string is number or only
			&& sti.size() == 1 // check if the size of choice string equal 1 or not 
			&& sti[0] != '0'   // to verify that the input is only between 1 --> 9
			)
		{
			int a = stoi(sti);
			st = brancheArray[a - 1];
			check = true;
			break;
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void getReverseSdate(string st, date& Date)
{
	int ctr = 1;
	do
	{
		ctr++;
		getReverseS_Day(st, Date);
		if (check)
		{
			getReverseS_Month(st, Date);
			if (check)
			{
				getReverseS_Year(st, Date);
				if (check)
				{
					cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";
					cout << "\nThe Car Return Branch is                   :    " << st;
					cout << "\nThe Rental start date is                   :    " << Date.rc_day << "/" << Date.rc_month << "/" << Date.rc_year;


					check = false;
					if (check_all_date(Date.rc_day, Date.rc_month, Date.rc_year))
					{
						int d, m, y; // current date
						getCurrentDate(d, m, y);
						int n = getDifference(d, m, y, Date.rc_day, Date.rc_month, Date.rc_year);
						if (n >= 0 && n <= 2)
						{
							check = true;
							system("cls");
							break;
						}
						else
							add_hint(ctr, 5);
					}
					else
						add_hint(ctr, 6);
				}
			}
		}
	} while (ctr <= 3);
}

void getReverseE_date(string st, date& Date)
{
	int ctr = 1;
	do
	{
		ctr++;
		getReverseE_Day(st, Date);
		if (check)
		{
			getReverseE_Month(st, Date);
			if (check)
			{
				getReverseE_Year(st, Date);
				if (check)
				{

					cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";
					cout << "\nThe Car Return Branch is                   :    " << st;
					cout << "\nThe Rental start date is                   :    " << Date.rc_day << "/" << Date.rc_month << "/" << Date.rc_year;
					cout << "\nThe Rental end date is                     :    " << Date.rtn_day << "/" << Date.rtn_month << "/" << Date.rtn_year;


					check = false;
					if (check_all_date(Date.rtn_day, Date.rtn_month, Date.rtn_year))
					{
						int n = getDifference(Date.rc_day, Date.rc_month, Date.rc_year, Date.rtn_day, Date.rtn_month, Date.rtn_year);
						if (n >= 0 && n <= 365)
						{
							check = true;
							system("cls");
							break;
						}
						else
							add_hint(ctr, 7);
					}
					else add_hint(ctr, 6);
				}
			}
		}
	} while (ctr <= 3);

}

void getReverseNumHours(string st, date& Date)
{
	check = false;
	num_trails = 1;
	do
	{
		cout << "#------------>Car Rental Departement<--------------#\n";
		cout << "\nThe Car Return Branch is                   :    " << st;
		cout << "\nThe Rental start date is                   :    " << Date.rc_day << "/" << Date.rc_month << "/" << Date.rc_year;
		cout << "\nThe Rental end date is                     :    " << Date.rtn_day << "/" << Date.rtn_month << "/" << Date.rtn_year;

		cout << "\nEnter the number of rental hours  : ";
		num_trails++;
		get(sti);
		if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only 
			&& sti.size() <= 2
			&& sti[0] != '0'
			)
		{
			int a = stoi(sti);
			if (a > 12)
				add_hint(num_trails, 8);
			else
			{
				check = true;
				Date.num_hours = a;
				system("cls");
				break;
			}
		}
		else
			add_hint(num_trails, 1);

	} while (num_trails <= 3);
}

void confirmReversertl(string st, date Date, int idx, int& cost)
{
	cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";
	cout << "\nThe Car Return Branch is                   :    " << st;
	cout << "\nThe Rental start date is                   :    " << Date.rc_day << "/" << Date.rc_month << "/" << Date.rc_year;
	cout << "\nThe Rental end date is                     :    " << Date.rtn_day << "/" << Date.rtn_month << "/" << Date.rtn_year;
	if (Date.num_hours != 0)
	{
		cout << "\nThe Rental num hours are                   :   " << Date.num_hours;

	}
	check = false;
	int num_days =
		getDifference(Date.rc_day, Date.rc_month, Date.rc_year,
			Date.rtn_day, Date.rtn_month, Date.rtn_year);
	if (num_days == 0)
	{
		cost = Date.num_hours * arr_car[idx].cost.c_hour;
		cout << "\n\nThe Total rental cost = " << cost << "$\n";
	}
	else
	{
		int num_weeks = num_days / 7;
		num_days = num_days % 7;
		cost = num_weeks * arr_car[idx].cost.c_week + num_days * arr_car[idx].cost.c_day;
		cout << "\nThe Total rental cost = " << cost << "$\n";
	}
	cout << "\n\nTo confirm the reservation, press \"y\" or \"Y\".\nTo cancel it, press anything else\n";
	get(sti);
	if (sti == "y" || sti == "Y")
	{

		check = true;
		system("cls");
	}
	else
	{
		check = false;
		system("cls");
	}
}


/////////////////////////////////////////////////////////////////

void getDesiredDate(date& dt)
{
	check = false;
	do
	{
		system("cls");
		cout << "#--------------------> search with Desired Rental Date <-------------------#\n\n";
		cout << "#------> Enter The Desired Rental Date     Day   : ";
		get(sti);
		if (check_day(sti))
		{
			dt.rc_day = stoi(sti);
			cout << "                                           Month : ";
			get(sti);
			if (check_month(sti))
			{
				dt.rc_month = stoi(sti);
				cout << "                                           Year  : ";
				get(sti);
				if (check_year(sti))
				{
					dt.rc_year = stoi(sti);
					if (check_all_date(dt.rc_day, dt.rc_month, dt.rc_year))
					{
						check = true;
						break;
					}
					else
					{
						cout << "\a";
						cout << "#---->Invalid Date.\n"
							<< "#---->Try again.\n";
						break;
					}
				}
				else
				{
					cout << "\a";
					cout << "#------>Invalid Year.\n"
						<< "#------>Try again.\n";
					break;
				}
			}
			else
			{
				cout << "#---->Invalid Month.\n"
					<< "#---->Try again.\n";
				break;
			}
		}
		else
		{
			cout << "\a";
			cout << "#---->Invalid Day.\n"
				<< "#---->Try again.\n";
			break;
		}
	} while (true);
}


///////////////////////////////////// Edit   ///////////////////////////

void getNewCost(cst& cost)
{
	while (true)
	{
		num_trails = 1;
		check = false;
		do
		{
			cout << "#---------------------> Edit The Cost <----------------------#\n\n";

			cout << "\n#----> Enter the new cost of the  Hour:  ";
			num_trails++;
			get(sti);
			if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only 
				&& sti.size() <= 3 // max cost of hour equal 999 $
				&& sti[0] != '0'
				)
			{
				check = true;
				cost.c_hour = stoi(sti);
				system("cls");
				break;
			}
			else
				add_hint(num_trails, 3);
		} while (num_trails <= 3);
		if (!check)
		{
			cout << "\n#----> Too Wrong Data\n";
			break;
		}

		num_trails = 1;
		check = false;
		do
		{
			cout << "#---------------------> Edit The Cost <----------------------#\n\n";

			cout << "\n#----> Enter the new cost of the  Hour:  " << cost.c_hour;
			cout << "\n                                  Day :  ";
			num_trails++;
			get(sti);
			if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only 
				&& sti.size() <= 4 // max cost of day equal 9999 $
				&& sti[0] != '0'
				)
			{
				check = true;
				cost.c_day = stoi(sti);
				system("cls");
				break;
			}
			else
				add_hint(num_trails, 3);
		} while (num_trails <= 3);

		if (check == false)
		{
			cout << "\n#----> Too Wrong Data\n";
			break;
		}

		num_trails = 1;
		check = false;
		do
		{
			cout << "#---------------------> Edit The Cost <----------------------#\n\n";

			cout << "\n#----> Enter the new cost of the  Hour:  " << cost.c_hour;
			cout << "\n                                  Day :  " << cost.c_day;
			cout << "\n                                  Week:  ";
			num_trails++;
			get(sti);
			if (all_of(sti.begin(), sti.end(), [](char ch) {return (isdigit(ch)); }) // check if each character in the st string is number or only 
				&& sti.size() <= 5 // max cost of week equal 99909 $
				&& sti[0] != '0'
				)
			{
				check = true;
				cost.c_week = stoi(sti);
				break;
			}
			else
				add_hint(num_trails, 3);
		} while (num_trails <= 3);
		if (check == false)
		{
			cout << "\n#----> Too Wrong Data\n";
			break;
		}

		break;
	}
}
