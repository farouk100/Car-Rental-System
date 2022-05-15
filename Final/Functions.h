#pragma once
#include "Input Validation.h"

///////////////////////////////////////writing functions in files//////////////////////////////

// write in the car file 
void car_write()
{
	f_car.open("car.txt", ios::out);
	for (int ctr = 0; ctr < car_index; ctr++)
	{
		f_car << arr_car[ctr].type << "#" << arr_car[ctr].L_P_N << "#" << arr_car[ctr].cost.c_hour << "#"
			<< arr_car[ctr].cost.c_day << "#" << arr_car[ctr].cost.c_week << "#" << arr_car[ctr].statue << "#"
			<< arr_car[ctr].cr_branch << "#" << arr_car[ctr].cust_id << "#" << arr_car[ctr].dat.rc_day << "#" << arr_car[ctr].dat.rc_month << "#"
			<< arr_car[ctr].dat.rc_year << "#" << arr_car[ctr].dat.rtn_day << "#" << arr_car[ctr].dat.rtn_month << "#"
			<< arr_car[ctr].dat.rtn_year << "#" << arr_car[ctr].dat.num_hours << "#"
			<< arr_car[ctr].rtn_branch << "\n";
	}
	f_car.close();
}

// write in the customer file
void cust_write()
{
	f_cust.open("customer.txt", ios::out);
	for (int ctr = 0; ctr < cust_idx; ctr++)
	{
		f_cust << arr_cust[ctr].f_name << "#" << arr_cust[ctr].l_name << "#" << arr_cust[ctr].id << "#"
			<< arr_cust[ctr].age << "#" << arr_cust[ctr].cr_number << "#" << arr_cust[ctr].ph_number << "#"
			<< arr_cust[ctr].us_name << "#" << arr_cust[ctr].pass << "\n";
	}
	f_cust.close();
}

// write in the rental file 
void rtl_write()
{
	f_rentals.open("rentals.txt", ios::out);
	for (int ctr = 0; ctr < rtl_idx; ctr++)
	{
		f_rentals << arr_rtl[ctr].cust_index << "#" << arr_rtl[ctr].car_LPN << "#" << arr_rtl[ctr].car_type << "#"
			<< arr_rtl[ctr].customer_id << "#" << arr_rtl[ctr].statue << "#"
			<< arr_rtl[ctr].dat.rc_day << "#" << arr_rtl[ctr].dat.rc_month << "#" << arr_rtl[ctr].dat.rc_year << "#"
			<< arr_rtl[ctr].dat.rtn_day << "#" << arr_rtl[ctr].dat.rtn_month << "#" << arr_rtl[ctr].dat.rtn_year << "#"
			<< arr_rtl[ctr].dat.num_hours << "#" << arr_rtl[ctr].rental_cost << "\n";

	}
	f_rentals.close();
}

// write in the index file 
void idx_write()
{
	index.open("index.txt", ios::out);
	index << car_index;
	index << "\n";
	index << cust_idx;
	index << "\n";
	index << rtl_idx;
	index.close();
}

//______________________________________________________________________________________//

/////////////////////////////////////////reading functions from files///////////////////////////

//read the index file 
void idx_read()
{
	index.open("index.txt", ios::in);
	index >> car_index;
	index >> cust_idx;
	index >> rtl_idx;
	index.close();
}

//read from car file
void car_read()
{
	f_car.open("car.txt", ios::in);
	for (int ctr = 0; ctr < car_index; ctr++)
	{

		getline(f_car, arr_car[ctr].type, '#');
		getline(f_car, arr_car[ctr].L_P_N, '#');

		getline(f_car, sti, '#');  arr_car[ctr].cost.c_hour = stoi(sti);
		getline(f_car, sti, '#');  arr_car[ctr].cost.c_day = stoi(sti);
		getline(f_car, sti, '#');  arr_car[ctr].cost.c_week = stoi(sti);
		getline(f_car, sti, '#');  arr_car[ctr].statue = stoi(sti);

		getline(f_car, arr_car[ctr].cr_branch, '#');
		getline(f_car, arr_car[ctr].cust_id, '#');


		getline(f_car, sti, '#');  arr_car[ctr].dat.rc_day = stoi(sti);
		getline(f_car, sti, '#');  arr_car[ctr].dat.rc_month = stoi(sti);
		getline(f_car, sti, '#');  arr_car[ctr].dat.rc_year = stoi(sti);
		getline(f_car, sti, '#');  arr_car[ctr].dat.rtn_day = stoi(sti);
		getline(f_car, sti, '#');  arr_car[ctr].dat.rtn_month = stoi(sti);
		getline(f_car, sti, '#');  arr_car[ctr].dat.rtn_year = stoi(sti);
		getline(f_car, sti, '#');  arr_car[ctr].dat.num_hours = stoi(sti);

		getline(f_car, arr_car[ctr].rtn_branch);

	}
	f_car.close();
}

//read from customer file 
void cust_read()
{
	f_cust.open("customer.txt", ios::in);
	for (int ctr = 0; ctr < cust_idx; ctr++)
	{
		getline(f_cust, arr_cust[ctr].f_name, '#');
		getline(f_cust, arr_cust[ctr].l_name, '#');
		getline(f_cust, arr_cust[ctr].id, '#');

		getline(f_cust, sti, '#');   arr_cust[ctr].age = stoi(sti);

		getline(f_cust, arr_cust[ctr].cr_number, '#');
		getline(f_cust, arr_cust[ctr].ph_number, '#');
		getline(f_cust, arr_cust[ctr].us_name, '#');
		getline(f_cust, arr_cust[ctr].pass);

	}
	f_cust.close();
}

//read from the rentals file
void rtl_read()
{
	f_rentals.open("rentals.txt", ios::in);
	for (int ctr = 0; ctr < rtl_idx; ctr++)
	{
		getline(f_rentals, sti, '#'); arr_rtl[ctr].cust_index = stoi(sti);

		getline(f_rentals, arr_rtl[ctr].car_LPN, '#');
		getline(f_rentals, arr_rtl[ctr].car_type, '#');
		getline(f_rentals, arr_rtl[ctr].customer_id, '#');

		getline(f_rentals, sti, '#'); arr_rtl[ctr].statue = stoi(sti);

		getline(f_rentals, sti, '#'); arr_rtl[ctr].dat.rc_day = stoi(sti);
		getline(f_rentals, sti, '#'); arr_rtl[ctr].dat.rc_month = stoi(sti);
		getline(f_rentals, sti, '#'); arr_rtl[ctr].dat.rc_year = stoi(sti);
		getline(f_rentals, sti, '#'); arr_rtl[ctr].dat.rtn_day = stoi(sti);
		getline(f_rentals, sti, '#'); arr_rtl[ctr].dat.rtn_month = stoi(sti);
		getline(f_rentals, sti, '#'); arr_rtl[ctr].dat.rtn_year = stoi(sti);
		getline(f_rentals, sti, '#'); arr_rtl[ctr].dat.num_hours = stoi(sti);

		getline(f_rentals, sti); arr_rtl[ctr].rental_cost = stoi(sti);

	}
	f_rentals.close();
}

// read from admins file 
void admin_read()
{
	f_admin.open("admin.txt", ios::in);
	for (int ctr = 0; ctr < adm_size; ctr++) //  adm_size is the numder of admins
	{
		getline(f_admin, arr_admin[ctr].usr_name, '#');
		getline(f_admin, arr_admin[ctr].password);

	}
	f_admin.close();
}

void ReadTypes()
{
	carType.open("car_types.txt", ios::in);
	for (int i = 0; i < num_of_CarType; i++)
	{
		getline(carType, carTypeArray[i]);
	}
	carType.close();
}

void ReadBrances()
{
	branche.open("branches.txt", ios::in);
	for (int i = 0; i < num_of_Branches; i++)
	{
		getline(branche, brancheArray[i]);
	}
	branche.close();
}
//___________________________________________________________________________________________________//

 // exist in admin and customer

void add_rental(int cust_idx, string car_lpn, string car_type, string cust_id, bool stat, date dat, int cst)
{
	arr_rtl[rtl_idx].cust_index = cust_idx;
	arr_rtl[rtl_idx].car_LPN = car_lpn;
	arr_rtl[rtl_idx].car_type = car_type;
	arr_rtl[rtl_idx].customer_id = cust_id;
	arr_rtl[rtl_idx].statue = stat;

	arr_rtl[rtl_idx].dat = dat;

	arr_rtl[rtl_idx].rental_cost = cst;

	rtl_idx++;
}


////////////////////////////////////////////admin functions/////////////////////////////////////////////

//add new car
void add_car()
{
	string choice;
	do
	{
		while (true)
		{
			system("cls");
			// get car type
			getCarType(arr_car[car_index].type);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information.\n";
				Sleep(3000);
				break;
			}
			// get car lpn
			getCarL_P_N(arr_car[car_index].L_P_N);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information.\n";
				Sleep(3000);
				break;
			}
			// get car cost
			getCarCost(arr_car[car_index].cost);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information.\n";
				Sleep(3000);
				break;
			}
			// get car state
			getCarState(arr_car[car_index].statue);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information.\n";
				Sleep(3000);
				break;
			}

			if (arr_car[car_index].statue == 0) // this the car isn't free to rental (which mean that some one hire it)
			{
				// get the customer ID who rent the car
				int cust_ID;
				getCustomerID(arr_car[car_index].cust_id, cust_ID);
				if (!check)
				{
					cout << "\a\n#----------------> You entered too wrong information.\n";
					Sleep(3000);
					break;
				}
				// get start date of rental
				GetStartDate(arr_car[car_index].dat);
				if (!check)
				{
					cout << "\a\n#----------------> You entered too wrong information.\n";
					Sleep(3000);
					break;
				}
				// get end date of rental
				GetEndDate(arr_car[car_index].dat);
				if (!check)
				{
					cout << "\a\n#----------------> You entered too wrong information.\n";
					Sleep(3000);
					break;
				}

				// now we will consider if he rent the car for only 1 day
				if (arr_car[car_index].dat.rc_day == arr_car[car_index].dat.rtn_day
					&& arr_car[car_index].dat.rc_month == arr_car[car_index].dat.rtn_month
					&& arr_car[car_index].dat.rc_year == arr_car[car_index].dat.rtn_year)
				{
					getNumHours(arr_car[car_index].dat);
					if (!check)
					{
						cout << "\a\n#----------------> You entered too wrong information.\n";
						Sleep(3000);
						break;
					}
				}

				getCarBranch(arr_car[car_index].cr_branch, 2);
				if (!check)
				{
					cout << "\a\n#----------------> You entered too wrong information.\n";
					Sleep(3000);
					break;
				}

				getCarBranch(arr_car[car_index].rtn_branch, 3);
				if (!check)
				{
					cout << "\a\n#----------------> You entered too wrong information.\n";
					Sleep(3000);
					break;
				}
				int cost_rent;
				confirm_rental(arr_car[car_index].dat, car_index, cost_rent);
				if (!check)
				{
					cout << "\n#----------------> The reservation has been canceled.";
					Sleep(3000);
					break;
				}
				else
				{
					add_rental(cust_ID, arr_car[car_index].L_P_N, arr_car[car_index].type, arr_car[car_index].cust_id, 1, arr_car[car_index].dat, cost_rent);
					cout << "\n#----------------> The reservation has been confirmed successfully\n";
				}
			}
			else
			{
				getCarBranch(arr_car[car_index].cr_branch, 1);
				if (!check)
				{
					cout << "\a\n#----------------> You entered too wrong information, try again\n";
					Sleep(3000);
					break;
				}
			}
			cout << "\n#----------------> The car is added sucssefuly!!";
			car_index++;
			Sleep(3000);
			break;
		}

		cout << "\n#----------------> To add a new car, press \"y\" or \"Y\".\n#----------------> To exit, press anything else\n";
		cout << "#----------------> Enter your choice : ";
		get(choice);
	} while (choice == "y" || choice == "Y");
}

//add new customer
void add_customer()
{
	string choice;
	do
	{
		while (true)
		{
			system("cls");

			getCustF_Name(arr_cust[cust_idx].f_name);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information\n";
				Sleep(3000);
				break;
			}
			getCustL_Name(arr_cust[cust_idx].l_name);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information\n";
				Sleep(3000);
				break;
			}
			getCustID(arr_cust[cust_idx].id);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information\n";
				Sleep(3000);
				break;
			}
			getCustage(arr_cust[cust_idx].age);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information.\n";
				Sleep(3000);
				break;
			}
			getCustCCN(arr_cust[cust_idx].cr_number);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information.\n";
				Sleep(3000);
				break;
			}
			getCustP_N(arr_cust[cust_idx].ph_number);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information.\n";
				Sleep(3000);
				break;
			}
			getusername(arr_cust[cust_idx].us_name);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information.\n";
				Sleep(3000);
				break;
			}
			getpass(arr_cust[cust_idx].pass);
			if (!check)
			{
				cout << "\a\n#----------------> You entered too wrong information.\n";
				Sleep(3000);
				break;
			}
			cout << "#----------------> The customer has been added successfuly\n";
			cust_idx++;
			break;
		}

		cout << "\n#----------------> To add a new customer, press \"y\" or \"Y\".\n#----------------> To exit, press anything else\n";
		cout << "\n#----------------> Enter your choice : ";
		get(choice);

	} while (choice == "y" || choice == "Y");
}

//delete car
void delet() {
	string ch;   //choice
	do
	{
		system("cls");
		cout << "#-------------------------------> Delete Cars department <----------------------------#\n\n";

		if (car_index == 0)
		{
			cout << "#------> There is no  cars in your company!!\n";
			cout << "\n#--------------------------------------------#";
			Sleep(3000);
			break;
		}
		string lp; // licence plate number
		bool found = false;
		bool found1 = false;
		cout << "#--------> Enter Car licence plate number to delete it : ";
		get(lp);
		for (int i = 0; i < car_index; i++)
		{
			if (lp == arr_car[i].L_P_N) {
				if (arr_car[i].statue == 1)
				{
					for (int j = i; j < car_index - 1; j++)
					{
						arr_car[j] = arr_car[j + 1];
					}
					cout << "\n#-----> The car is Sucessfully deleted.\n\n";
					found = true;
					car_index--;
					break;
				}
				else {
					found1 = true;
				}

			}
		}
		if (!found && !found1)
		{
			cout << "\n#----> There is no car with such licence plat number.\n";
		}
		else if (found1 && !found) {
			cout << "\n#----> This car is rented now.\n\n";
		}

		cout << "\n\n#----------------------------------------------------------------------------------#\n\n";
		cout << "#----> If You want to Delete another car, press \"y\" or \"Y\".\n#----> To Exit, press anything else\n";
		get(ch);
	} while (ch == "y" || ch == "Y");
}

//display car
void dis() {
	bool found;
	string lp; // licence plate number
	string choice;
	string x;
	do
	{
		system("cls");
		cout << "#--------------------------> Display Cars Departement <---------------------#\n\n";
		if (car_index == 0)
		{
			cout << "#------> There is no  cars in your company!!\n";
			cout << "\n#--------------------------------------------#";
			Sleep(3000);
			break;
		}
		else {
			cout << "#-------> If you want to View specific car    Enter        1\n";
			cout << "#-------> If you want to View available cars  Enter        2\n";
			cout << "#-------> If you want to View rented cars     Enter        3\n";
			cout << "#-------> If you want to View all cars        Enter        4\n";
			cout << "#-------> If you want to Exit                 Enter    anything else\n\n";
			cout << "#-------> Enter your choice : ";
			get(x);
			if (x == "1") {
				system("cls");

				found = false;
				cout << "#----------------------> View Specific Car <----------------------#";
				cout << "\n\n#-------> Enter licence plate number :";
				get(lp);
				for (int i = 0; i < car_index; i++)
				{
					if (lp == arr_car[i].L_P_N)
					{
						found = true;
						cout << left << setw(10) << "#Type" << setw(15) << "#Hour Cost" << setw(15) << "#Day Cost" << setw(15) << "#Week Cost" << setw(15) << "#State" << setw(20) << "#Return Branch" << setw(10) << "#L.P.N" << setw(15) << "#Customer ID" << setw(20) << "#current Branch" << setw(20) << "#Rented from" << "#To " << endl;
						cout << endl;
						cout << left << setw(10) << arr_car[i].type <<
							setw(15) << arr_car[i].cost.c_hour
							<< setw(15) << arr_car[i].cost.c_day
							<< setw(15) << arr_car[i].cost.c_week;
						if (arr_car[i].statue == 0)
						{
							cout << left << setw(15) << "Not avilable" << setw(20) << arr_car[i].rtn_branch <<
								setw(10) << arr_car[i].L_P_N <<
								setw(15) << arr_car[i].cust_id << setw(20) << "---------------" << setw(2) << arr_car[i].dat.rc_day << "/" << setw(2) << arr_car[i].dat.rc_month << "/" << setw(14) << arr_car[i].dat.rc_year
								<< setw(2) << arr_car[i].dat.rtn_day << "/" << setw(2) << arr_car[i].dat.rtn_month << "/" << arr_car[i].dat.rtn_year << endl << endl;
						}
						else
						{

							cout << left << setw(15) << "Avilable" << setw(20) << "--------" << setw(10) << arr_car[i].L_P_N << setw(15) << "-------" <<
								setw(20) << arr_car[i].cr_branch << setw(20) << "-----------" << "----------" << endl << endl;
						}
						break;
					}
				}
				if (!found) cout << "\n#------------> This Car isn't found \n";
			}
			else if (x == "2")
			{
				system("cls");

				found = false;
				for (int i = 0; i < car_index; i++)
				{
					if (arr_car[i].statue == 1) {
						if (!found) {  // to show this only one time
							cout << "#---------------------------------------> AVAILABLE CARS <--------------------------------#\n\n";
							cout << left << setw(10) << "#Type" << setw(15) << "#Hour Cost" << setw(15) << "#Day cost" << setw(15) << "#Week Cost" << setw(20) << "#Current Branch" << setw(10) << "#L.P.N" << endl;
							cout << endl;
						}
						found = true;
						cout << left << setw(10) << arr_car[i].type << setw(15)
							<< arr_car[i].cost.c_hour << setw(15)
							<< arr_car[i].cost.c_day << setw(15)
							<< arr_car[i].cost.c_week << setw(20)
							<< arr_car[i].cr_branch <<
							setw(10) << arr_car[i].L_P_N << "\n\n";
					}

				}
				if (!found)
				{
					cout << "#-------------------------------> There is no available cars to display.\n";
				}
			}
			else if (x == "3")
			{
				system("cls");

				found = false;
				for (int i = 0; i < car_index; i++)
				{
					if (arr_car[i].statue == 0) {
						if (!found) {  // to show this only one time
							cout << "#-----------------------------------------> RENTED CARS <-------------------------------------------#\n\n";
							cout << left << setw(10) << "#Type" << setw(15) << "#Hour Cost" << setw(15) << "#Day Cost" << setw(15) << "#Week Cost" << setw(20) << "#Return Branch" << setw(10) << "#L.P.N" << setw(15) << "#Customer ID" << setw(20) << "#Rented from" << "#To " << endl;
							cout << endl;
						}
						found = true;
						cout << left << setw(10) << arr_car[i].type <<
							setw(15) << arr_car[i].cost.c_hour <<
							setw(15) << arr_car[i].cost.c_day <<
							setw(15) << arr_car[i].cost.c_week <<
							setw(20) << arr_car[i].rtn_branch <<
							setw(10) << arr_car[i].L_P_N <<
							setw(15) << arr_car[i].cust_id << setw(2) << arr_car[i].dat.rc_day << "/" << setw(2) << arr_car[i].dat.rc_month << "/" << setw(14) << arr_car[i].dat.rc_year
							<< setw(2) << arr_car[i].dat.rtn_day << "/" << setw(2) << arr_car[i].dat.rtn_month << "/" << arr_car[i].dat.rtn_year << endl << endl;

					}
				}
				if (!found)
				{
					cout << "#------------> Ther is no rented cars to display.\n";
				}
			}
			else if (x == "4")
			{
				system("cls");

				found = false;
				cout << "#--------------------------------------> ALL CARS <-----------------------------------------\n\n";

				cout << left << setw(10) << "#Type" << setw(15) << "#Hour Cost" << setw(15) << "#Day Cost" << setw(15) << "#Week Cost" << setw(15) << "#State" << setw(20) << "#Return Branch" << setw(10) << "#L.P.N" << setw(15) << "#Customer ID" << setw(20) << "#crunt branch" << setw(20) << "#Rented from" << "#To " << endl;
				cout << endl;
				for (int i = 0; i < car_index; i++)
				{


					cout << left << setw(10) << arr_car[i].type <<
						setw(15) << arr_car[i].cost.c_hour
						<< setw(15) << arr_car[i].cost.c_day
						<< setw(15) << arr_car[i].cost.c_week;
					if (arr_car[i].statue == 0)
					{
						cout << left << setw(15) << "Not avilable" << setw(20) << arr_car[i].rtn_branch <<
							setw(10) << arr_car[i].L_P_N <<
							setw(15) << arr_car[i].cust_id << setw(20) << "---------------" << setw(2) << arr_car[i].dat.rc_day << "/" << setw(2) << arr_car[i].dat.rc_month << "/" << setw(14) << arr_car[i].dat.rc_year
							<< setw(2) << arr_car[i].dat.rtn_day << "/" << setw(2) << arr_car[i].dat.rtn_month << "/" << arr_car[i].dat.rtn_year << endl << endl;
					}
					else
					{
						cout << left << setw(15) << "Avilable" << setw(20) << "--------" << setw(10) << arr_car[i].L_P_N << setw(15) << "-------" <<
							setw(20) << arr_car[i].cr_branch << setw(20) << "-----------" << "----------" << endl << endl;
					}

				}
			}
			else {
				break;
			}
		}

		cout << "\n\n#------------> To End Show Enter anything : ";
		get(choice);
	} while (true);
}

///Edit car
void edit_car()
{
	string choice, lpn;
	bool found = false;
	do
	{
		system("cls");
		cout << "#-----------------------> Edit Car Department <------------------------#\n\n";

		if (car_index == 0)
		{
			cout << "#------> There is no  cars in your company!!\n";
			cout << "\n#--------------------------------------------#";
			Sleep(3000);
			break;
		}

		system("cls");
		cout << "#----> If you want to edit the cost of car          Enter       1\n";
		cout << "#----> If you want to edit the status of cars       Enter       2\n";
		cout << "#----> If you want to Exit                          Enter    anything else\n\n";
		cout << "#----> Enter your choice : ";
		get(choice);
		if (choice == "1")
		{
			system("cls");
			cout << "#---------------------> Edit The Cost <----------------------#\n\n";
			cout << "#----> Enter car license plate number to edit cost : ";
			get(lpn);
			for (int i = 0; i < car_index; i++)
			{
				if (lpn == arr_car[i].L_P_N)
				{
					system("cls");

					found = true;
					cst cost;
					getNewCost(cost);
					if (check)
					{
						arr_car[i].cost = cost;
						cout << "\n#----> The cost has been updated successfuly\n";
						Sleep(3000);

						break;
					}
				}
			}
			if (!found)
			{
				cout << "\n#------> This car isn't found.\n";
				Sleep(3000);

			}
		}

		else if (choice == "2")
		{
			system("cls");
			string ch;
			cout << "#---------------------> Edit The status <----------------------#\n\n";
			cout << "#----> If you want to edit the status of specific car,            Enter       1\n";
			cout << "#----> If you want to edit the status of cars with today's date   Enter       2\n";
			cout << "#----> If you want to leave \"Edit The status\" department          Enter  anything else\n\n";
			cout << "#----> Enter your choice : ";
			get(ch);
			if (ch == "1")
			{
				system("cls");
				found = false;
				cout << "#---------------------> Edit The status of specific car <----------------------#\n\n";

				cout << "#----> Enter car license plate number to edit status ----> ";
				get(lpn);
				for (int i = 0; i < car_index; i++)
				{
					if (lpn == arr_car[i].L_P_N && arr_car[i].statue == 0)
					{

						found = true;
						arr_car[i].statue = 1;
						arr_car[i].cr_branch = arr_car[i].rtn_branch;
						arr_car[i].rtn_branch = "\0";
						arr_car[i].cust_id = "\0";
						arr_car[i].dat = { 0 };
						for (int j = 0; j < rtl_idx; j++)
						{
							if (arr_rtl[j].car_LPN == arr_car[i].L_P_N)
							{
								arr_rtl[j].statue = 0;
								break;
							}
						}
						cout << "#---> The Car status is modified successfully.\n";
						Sleep(3000);
						break;
					}
				}

				if (!found)
				{
					cout << "\n#------> This car isn't found.\n";
					Sleep(3000);

				}
			}
			else if (ch == "2")
			{
				system("cls");
				cout << "#---------------------> Edit The status of many car <----------------------#\n\n";
				int d, m, y;
				getCurrentDate(d, m, y);
				cout << "#----> Today's Date is " << d << "/" << m << "/" << y << "\n";
				found = false;
				for (int a = 0; a < rtl_idx; a++)
				{
					int n_days = getDifference(arr_rtl[a].dat.rtn_day, arr_rtl[a].dat.rtn_month, arr_rtl[a].dat.rtn_year, d, m, y);
					if (n_days >= 0)
					{
						for (int i = 0; i < car_index; i++)
						{
							if (arr_rtl[a].car_LPN == arr_car[i].L_P_N)
							{
								found = true;
								arr_car[i].statue = 1;
								arr_car[i].cr_branch = arr_car[i].rtn_branch;
								arr_car[i].rtn_branch = "\0";
								arr_car[i].cust_id = "\0";
								arr_car[i].dat = { 0 };
								arr_rtl[a].statue = 0;
								break;
							}
						}
					}
				}
				if (found)
				{
					cout << "\n-----> The Cars status is modified successfully.\n";
					Sleep(3000);

				}
				else
				{
					cout << "\n#-----> There is no cars to modified;\n";
					Sleep(3000);

				}
			}
			else
			{
				continue;
			}
		}
		else
		{
			break;
		}
	} while (true);
}

// Profit 
void profit()
{
	system("cls");
	cout << "#-------------------------------> Profit Department <--------------------------#\n\n";
	if (rtl_idx == 0)
	{
		cout << "#----------> There is no rentals till now.\n";
		cout << "\n#--------------------------------------------#";
		Sleep(3000);

	}
	else {
		struct prof
		{
			int day;
			int month;
			int year;
		};
		int ctr = 0;
		bool result = false;
		prof arr[rtl_size] = {};
		for (int i = 0; i < rtl_idx; i++)
		{
			result = false;
			for (int x = 0; x < rtl_idx; x++)
			{
				if (arr_rtl[i].dat.rc_day == arr[x].day && arr_rtl[i].dat.rc_month == arr[x].month && arr_rtl[i].dat.rc_year == arr[x].year)
				{
					result = true;
					break;
				}
			}
			if (result == false)
			{
				arr[ctr].day = arr_rtl[i].dat.rc_day;
				arr[ctr].month = arr_rtl[i].dat.rc_month;
				arr[ctr].year = arr_rtl[i].dat.rc_year;
				ctr++;
			}
		}
		int total_profit = 0;

		for (int j = 0; j < ctr; j++)
		{
			int sum = 0;
			int nums = 0;
			for (int h = 0; h < rtl_idx; h++)
			{
				if (arr_rtl[h].dat.rc_day == arr[j].day && arr_rtl[h].dat.rc_month == arr[j].month && arr_rtl[h].dat.rc_year == arr[j].year)
				{
					nums++;
					sum += arr_rtl[h].rental_cost;

				}
			}
			cout << "#------>In " << arr[j].day << "/" << arr[j].month << "/" << arr[j].year << "\n";
			cout << "#------>Rentals number = " << nums << " With total Cost = " << sum << " $" << "\n\n";
			total_profit += sum;
		}
		cout << "\n";
		cout << "#------------------------>The Total Profit = " << total_profit << " $" << " <------------------------#";

		string tem;
		cout << "\n\n#--------> Enter anything to Exit : ";
		getline(cin, tem);
	}

}


//display customer
void dis_cust()
{
	string choice;
	string num;
	do
	{
		system("cls");
		cout << "#-----------------------------------> Display Customer Departemnt <-----------------------------#\n\n";

		if (cust_idx == 0)
		{
			cout << "#------> There is no  customers in your company!!\n";
			cout << "\n#--------------------------------------------#";
			Sleep(3000);
			break;
		}
		cout << "#-------------> If you want to Disply specific customar  Enter          1\n";
		cout << "#-------------> If you want to Disply all customar       Enter          2\n";
		cout << "#-------------> If you want to Exit                      Enter      anything else\n\n";

		cout << "#-------------> Enter your choice :  ";
		get(num);
		bool found = false;

		if (num == "1")
		{
			system("cls");
			cout << "#--------------------------> Display Specific Customar <---------------------#\n\n";
			string id;
			cout << "#-------------> Enter customar ID : ";
			get(id);
			int i;
			for (size_t j = 0; j < rtl_idx; j++)
			{
				if (id == arr_cust[j].id)
				{
					i = j;
					found = true;
					break;
				}
			}


			if (!found)
			{

				cout << "\n\n#--------> Thereis no customer with such ID!!\n";
			}
			else
			{
				string name = arr_cust[i].f_name + " " + arr_cust[i].l_name;
				cout << "#---------------------------> Customer Profile <------------------------------#\n\n";
				cout << left << setw(25) << "#Name" << setw(18) << "#ID" << setw(20) << "#Phone Number" << setw(10) << "#Age" << setw(25) << "#Credit Card Number" << setw(25) << "#Email" << setw(20) << "#Password" << "\n\n";

				cout << left << setw(25) << name << setw(18) << arr_cust[i].id << setw(20) << arr_cust[i].ph_number << setw(10) << arr_cust[i].age << setw(25) << arr_cust[i].cr_number << setw(25) << arr_cust[i].us_name << setw(20) << arr_cust[i].pass << "\n\n";

				cout << "#---------------------------> Customer Rentals <-------------------------------#" << "\n\n";
				cout << left << setw(15) << "#Type" << setw(15) << "#L.P.N" << setw(20) << "#Rented from" << "#To " << setw(11) << "  " << setw(20) << "#Rental State" << setw(10) << "#Cost" << endl << endl;

				for (int j = 0; j < rtl_idx; j++)
				{
					if (arr_rtl[j].customer_id == id)
					{


						cout << " " << left << setw(15) << arr_rtl[j].car_type << setw(15) << arr_rtl[j].car_LPN << setw(20) << setw(2) <<
							arr_rtl[j].dat.rc_day << "/" << setw(2) << arr_rtl[j].dat.rc_month << "/" << setw(14)
							<< arr_rtl[j].dat.rc_year << setw(2) <<
							arr_rtl[j].dat.rtn_day << "/" << setw(2) << arr_rtl[j].dat.rtn_month << "/"
							<< arr_rtl[j].dat.rtn_year << setw(5) << "  ";
						if (arr_rtl[j].statue)
						{
							cout << setw(20) << "Current Rental" << arr_rtl[j].rental_cost << "\n\n";
						}
						else
						{
							cout << setw(20) << "Previous Rental" << arr_rtl[j].rental_cost << "\n\n";
						}

					}
				}
			}



		}
		else if (num == "2")
		{
			system("cls");
			string norepeat_id[100];
			int ct = 0;

			bool res = false;
			for (int x = 0; x < cust_idx; x++)
			{
				norepeat_id[x] = arr_cust[x].id;
			}



			for (int x = 0; x < cust_idx; x++)
			{
				string name = arr_cust[x].f_name + " " + arr_cust[x].l_name;
				cout << "#-------------------------------------> The " << x + 1 << " Customer <-----------------------------------------#\n\n";
				cout << left << setw(25) << "#Name" << setw(18) << "#ID" << setw(20) << "#Phone Number" << setw(10) << "#Age" << setw(25) << "#Credit Card Number" << setw(25) << "#Email" << setw(25) << "#Password" << "\n";

				cout << left << setw(25) << name << setw(18) << arr_cust[x].id << setw(20) << arr_cust[x].ph_number << setw(10) << arr_cust[x].age << setw(25) << arr_cust[x].cr_number << setw(25) << arr_cust[x].us_name << setw(25) << arr_cust[x].pass << "\n\n";

				cout << "                                 #-----> Customer Rentals <-----#\n\n";
				cout << left << setw(15) << "#Type" << setw(15) << "#L.P.N" << setw(20) << "#Rented from" << "#To " << setw(11) << "  " << setw(20) << "#Rental State" << setw(10) << "#Cost" << endl;


				for (int cnt = 0; cnt < rtl_idx; cnt++)
				{
					if (arr_rtl[cnt].customer_id == norepeat_id[x])
					{
						cout << left << setw(15) << arr_rtl[cnt].car_type << setw(15) << arr_rtl[cnt].car_LPN << setw(20) << setw(2) <<
							arr_rtl[cnt].dat.rc_day << "/" << setw(2) << arr_rtl[cnt].dat.rc_month << "/" << setw(14)
							<< arr_rtl[cnt].dat.rc_year << setw(2) <<
							arr_rtl[cnt].dat.rtn_day << "/" << setw(2) << arr_rtl[cnt].dat.rtn_month << "/"
							<< arr_rtl[cnt].dat.rtn_year << setw(5) << "  ";
						if (arr_rtl[cnt].statue)
						{
							cout << setw(20) << "Current Rental" << setw(10) << arr_rtl[cnt].rental_cost << endl;
						}
						else
						{
							cout << setw(20) << "Previous Rental" << setw(10) << arr_rtl[cnt].rental_cost << endl;
						}
					}
				}
				cout << "#-------------------------------------------------------------------------------------------------------------------#\n\n";
			}
		}
		else {
			break;
		}
		string a;
		cout << "\n#-------->To End Show, Enter anything : ";
		get(a);
		system("cls");
	} while (true);
}

//___________________________________________________________________________________________//

///////////////////////////// user function ////////////
// customer search
void c_search()
{
	do
	{
		system("cls");
		cout << "#--------------------> Car Search Department <-------------------#\n\n";

		if (car_index == 0)
		{
			cout << "#------> There is no  cars in till now!!\n";
			cout << "\n#--------------------------------------------#";
			Sleep(3000);
			break;
		}

		string c_choice;
		cout << "If you want to search with Car Type              Enter       1 \n";
		cout << "If you want to search with Desired Rental Date   Enter       2 \n";
		cout << "If you want to search for Availabel Cars         Enter       3 \n";
		cout << "If you want to exit                              Enter   anything else.\n\n";
		cout << "\nEnter your choice ------->  ";
		get(c_choice);
		if (c_choice == "1")
		{
			system("cls");
			cout << "#--------------------> search with Car Type <-------------------#\n\n";

			string type;
			bool found = false;
			cout << "To Search for car from type--> ";
			for (int i = 0; i < num_of_CarType; i++)
			{
				cout << left << setw(10) << carTypeArray[i] << " Enter number " << i + 1 << "\n";
				cout << "                               ";
			}
			cout << "\n\n#-----> Enter your choice : ";
			get(sti);
			if (sti == "1" || sti == "2" || sti == "3" || sti == "4" || sti == "5" || sti == "6" || sti == "7")
			{
				system("cls");
				int a = stoi(sti);
				type = carTypeArray[a - 1];
			}
			else
			{
				cout << "\a";
				cout << "#--->Invalid Choise.\n";
				Sleep(3000);
				continue;
			}
			cout << "#--------------------> Search for cars from " << type << " Type <-------------------#\n\n";
			for (int ctr = 0; ctr < car_index; ctr++)
			{
				if (arr_car[ctr].type == type && arr_car[ctr].statue == 1)
				{
					if (found == false)
					{
						cout << left << setw(10) << "#Type" << setw(15) << "#Hour Cost" << setw(15) << "#Day cost" << setw(15) << "#Week Cost" << setw(20) << "#Current Branch" << setw(10) << "#L.P.N" << endl << endl;
					}
					found = true;
					cout << left << setw(10) << arr_car[ctr].type << setw(15)
						<< arr_car[ctr].cost.c_hour << setw(15)
						<< arr_car[ctr].cost.c_day << setw(15)
						<< arr_car[ctr].cost.c_week << setw(20)
						<< arr_car[ctr].cr_branch <<
						setw(10) << arr_car[ctr].L_P_N << endl << endl;
				}
			}
			if (found == false)
			{
				cout << "\a";
				cout << "#---->There is no cars from this type now\n";
				Sleep(3000);
				continue;
			}
			else
			{
				cout << "\n\nEnter anything to Exit : ";
				string temp;
				getline(cin, temp);
			}
		}
		else if (c_choice == "2")
		{

			date dt;
			getDesiredDate(dt);
			if (!check)
			{
				Sleep(3000);
				continue;
			}
			system("cls");
			cout << "         #---> Avaliable Cars Before " << dt.rc_day << "/" << dt.rc_month << "/" << dt.rc_year << " are <---#\n\n";
			bool found = false;
			for (int ctr = 0; ctr < car_index; ctr++)
			{

				int differ = getDifference(arr_car[ctr].dat.rtn_day, arr_car[ctr].dat.rtn_month, arr_car[ctr].dat.rtn_year, dt.rc_day, dt.rc_month, dt.rc_year);
				if (arr_car[ctr].statue == 1 || arr_car[ctr].statue == 0 && differ > 0)
				{

					if (found == false)
					{
						cout << left << setw(10) << "#Type" << setw(15) << "#Hour Cost" << setw(15) << "#Day cost" << setw(15) << "#Week Cost" << setw(20) << "#Current Branch" << setw(10) << "#L.P.N" << endl << endl;
					}
					found = true;
					cout << left << setw(10) << arr_car[ctr].type << setw(15)
						<< arr_car[ctr].cost.c_hour << setw(15)
						<< arr_car[ctr].cost.c_day << setw(15)
						<< arr_car[ctr].cost.c_week << setw(20);
					if (arr_car[ctr].statue == 1)
					{
						cout << arr_car[ctr].cr_branch;
					}
					else
					{
						cout << arr_car[ctr].rtn_branch;
					}
					cout << setw(10) << arr_car[ctr].L_P_N << endl << endl;
				}
			}
			if (found == false)
			{
				cout << "\a";
				cout << "#----->There is no avaliable cars at this date\n";
				Sleep(3000);
				continue;
			}
			else
			{
				cout << "\n\nEnter anything to Exit : ";
				string temp;
				getline(cin, temp);
			}

		}
		else if (c_choice == "3")
		{
			system("cls");
			cout << "#--------------------> Search for avaliable cars <-------------------#\n\n";

			bool found = false;
			for (int ctr = 0; ctr < car_index; ctr++)
			{
				if (arr_car[ctr].statue == 1)
				{
					if (found == false)
					{
						cout << left << setw(10) << "#Type" << setw(15) << "#Hour Cost" << setw(15) << "#Day cost" << setw(15) << "#Week Cost" << setw(20) << "#Current Branch" << setw(10) << "#L.P.N" << endl << endl;
					}
					found = true;
					cout << left << setw(10) << arr_car[ctr].type << setw(15)
						<< arr_car[ctr].cost.c_hour << setw(15)
						<< arr_car[ctr].cost.c_day << setw(15)
						<< arr_car[ctr].cost.c_week << setw(20)
						<< arr_car[ctr].cr_branch <<
						setw(10) << arr_car[ctr].L_P_N << endl << endl;
				}
			}

			if (found == false)
			{
				cout << "\a";
				cout << "#------>There is no avaliable cars now\n";
				Sleep(3000);
				continue;
			}
			else
			{
				cout << "\n\nEnter Any thing to end show : ";
				string temp;
				getline(cin, temp);
			}
		}
		else
		{
			cout << "\n\n#-------------------------> Thank You <------------------------#\n";
			Sleep(3000);
			break;
		}
	} while (true);
}

// reserve
void reserve(string usr)
{
	string hir;
	do
	{
		system("cls");
		cout << "#---------------------------------> Reserve Department <-----------------------#\n\n";

		if (car_index == 0)
		{
			cout << "#------> There is no  cars in till now!!\n";
			cout << "\n#--------------------------------------------#";
			Sleep(3000);
			break;
		}
		while (true)
		{
			bool result;
			string c_name, c_lpn, rn_branch;
			date dt = {};
			int cr_idx;
			cout << "#-------> Enter the car Licence Plat Number       :  ";
			get(c_lpn);
			result = car_search(c_lpn, cr_idx);

			if (result == false)
			{
				cout << "\a";
				cout << "\n#---------->> There is no car with such licence plat number\n\n";
				break;
			}
			else if (result == true && arr_car[cr_idx].statue == 0)
			{
				cout << "\a";
				cout << "#---------->> Sorry this car is not availabel now \n";
				break;
			}
			else if (result == true && arr_car[cr_idx].statue == 1)
			{
				c_name = arr_car[cr_idx].type;

				getReverseBranch(rn_branch);
				if (!check)
				{
					cout << "\a";
					cout << "\n#-----> You entered too wrong information, try again\n";
					Sleep(3000);
					break;
				}

				getReverseSdate(rn_branch, dt);

				if (!check)
				{
					cout << "\a\n#-----> You entered too wrong information, try again\n";
					Sleep(3000);
					break;
				}

				getReverseE_date(rn_branch, dt);

				if (!check)
				{
					cout << "\a\n#-----> You entered too wrong information, try again\n";
					Sleep(3000);
					break;
				}

				if (dt.rc_day == dt.rtn_day
					&& dt.rc_month == dt.rtn_month
					&& dt.rc_year == dt.rtn_year)
				{
					getReverseNumHours(rn_branch, dt);
					if (!check)
					{
						cout << "\a\n#----> You entered too wrong information, try again\n";
						Sleep(3000);
						break;
					}
				}

				int  t_cost;
				confirmReversertl(rn_branch, dt, cr_idx, t_cost);

				if (check)
				{
					int cu_idx;
					string cust_id;
					cust_search_usr(usr, cust_id, cu_idx);
					// changeing the statue of the car from available to non availabel ;

					arr_car[cr_idx].statue = 0;
					arr_car[cr_idx].cr_branch = "\0";
					arr_car[cr_idx].dat.rc_day = dt.rc_day;
					arr_car[cr_idx].dat.rc_month = dt.rc_month;
					arr_car[cr_idx].dat.rc_year = dt.rc_year;
					arr_car[cr_idx].dat.rtn_day = dt.rtn_day;
					arr_car[cr_idx].dat.rtn_month = dt.rtn_month;
					arr_car[cr_idx].dat.rtn_year = dt.rtn_year;

					arr_car[cr_idx].rtn_branch = rn_branch;
					arr_car[cr_idx].cust_id = arr_cust[cu_idx].id;
					arr_car[cr_idx].dat.num_hours = dt.num_hours;
					// make this car  in the cuurent rentals of the customer 
					add_rental(cu_idx, c_lpn, c_name, cust_id, 1, dt, t_cost);
					cout << "\n#----------->thank  you for  dealing with us \n\n";

				}

			}
			break;
		}
		cout << "\n#-----------> If you want to hire another car press \"y\" or \"Y\""
			<< "\n------------> To Exit press anything else\n";
		get(hir);

	} while (hir == "y" || hir == "Y");
}

// show user profile
void user_profile(string id, int i)
{
	string ch;

	system("cls");
	cout << "#--------------------> Your Profile <-------------------#\n\n";
	cout << "#Name               : " << arr_cust[i].f_name << " " << arr_cust[i].l_name << "\n";
	cout << "#ID                 : " << arr_cust[i].id << "\n";
	cout << "#Phone Number       : " << arr_cust[i].ph_number << "\n";
	cout << "#Age                : " << arr_cust[i].age << "\n";
	cout << "#Credit Card Number : " << arr_cust[i].cr_number << "\n";
	cout << "#Email              : " << arr_cust[i].us_name << "\n";
	cout << "#Password           : " << arr_cust[i].pass << "\n\n";
	cout << "                                      #-->Rentals<--#             " << "\n\n";
	cout << left << setw(15) << "#Type" << setw(15) << "#L.P.N" << setw(20) << "#Rented from" << "#To " << setw(11) << "  " << setw(20) << "#Rental State" << setw(10) << "#Cost" << endl << endl;
	for (size_t j = 0; j < rtl_idx; j++)
	{
		if (id == arr_rtl[j].customer_id)
		{
			cout << " " << left << setw(15) << arr_rtl[j].car_type << setw(15) << arr_rtl[j].car_LPN << setw(20) << setw(2) <<
				arr_rtl[j].dat.rc_day << "/" << setw(2) << arr_rtl[j].dat.rc_month << "/" << setw(14)
				<< arr_rtl[j].dat.rc_year << setw(2) <<
				arr_rtl[j].dat.rtn_day << "/" << setw(2) << arr_rtl[j].dat.rtn_month << "/"
				<< arr_rtl[j].dat.rtn_year << setw(5) << "  ";
			if (arr_rtl[j].statue)
			{
				cout << setw(20) << "Current Rental" << arr_rtl[j].rental_cost << "\n\n";
			}
			else
			{
				cout << setw(20) << "Previous Rental" << arr_rtl[j].rental_cost << "\n\n";
			}
		}
	}
	cout << "\n#-----> Enter anything to Exit : ";
	get(ch);

}

// change user password
void change_pass(int custo_idx)
{
	string chic;
	do
	{
		system("cls");
		cout << "#------------------> Changing Password <-----------------------#\n\n";
		string old_pass, new_pass, confirm_pass;
		cout << "#----> Enter the old password      :";
		getPassword(old_pass);

		if (arr_cust[custo_idx].pass == old_pass)
		{
			cout << "\n#----> Enter the new pass          : ";
			getPassword(new_pass);
			if (all_of(new_pass.begin(), new_pass.end(), [](char ch) {return (!isspace(ch)); }) // check if each character in the st string is number or only
				&& new_pass.size() <= 20 && new_pass.size() >= 8) // check if the size of st string equal 5 or not 
			{
				cout << "\n#----> Confirm new pass again    : ";
				getPassword(confirm_pass);
				if (new_pass == confirm_pass)
				{
					arr_cust[custo_idx].pass = new_pass;
					cout << "#--------------------------------------------------------------#\n";
					cout << "\n#----> The password is succsseflly changed.\n";
					Sleep(3000);
					break;
				}
				else
				{
					cout << "#--------------------------------------------------------------#\n";
					cout << "\a";
					cout << "\n#--------> Your confirm password is incorrect\n";
				}
			}
			else
			{

				cout << "\a";
				cout << "#---------------------------> INVALID Password <---------------------------#\n";
				cout << "\n#-------> The Password can't be less than 8 or more than 20 characters.\n";
			}
		}
		else
		{
			cout << "#--------------------------------------------------------------#\n";
			cout << "\a";
			cout << "\n#------> The password is in correct \n";
		}
		cout << "#-------------------------------------------------------------------------------#\n";
		cout << "\n#------> If you want to change password again enter (y/Y) and any thing to exit\n";
		get(chic);

	} while (chic == "y" || chic == "Y");
}
