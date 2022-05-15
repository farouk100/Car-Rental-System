#pragma once
#include<iostream>
#include<string>
#include<fstream>  // file libaray
using namespace std;

/////////////////////// Joint struct between the car and the customer rental ////////////////////////

struct date                    //struct for the date (Rental start date & Rental end date)
{

	int rc_day, rc_month, rc_year,   //rc --> recieve     // Rental start date (day / month / year)
		rtn_day, rtn_month, rtn_year,     // Rental end date (day / month / year)
		num_hours;                // Rental start & end hour (if he will rent for 1 day)
};

//__________________________________________________________________________________________//


///////////////////////////////////////////All car variables//////////////////////////////////

// dont forget the struct "date"


struct  cst        //struct for the cost (hour - day - week)
{
	int c_hour,   //cost of hour
		c_day,    //cost of day
		c_week;   //cost of week
};

struct cars   // the main struct of the car which include all the car data
{
	string type,             // the type of the car
		L_P_N,            // the licence plate number of the car
		cr_branch,        // the current branch of the car
		rtn_branch,       // the return branch of the car (if the car is rented)
		cust_id;          // the  ID of the customer who rents the car

	bool statue;             // the state of the car (1 --> means it is free to rental)
							 //                      (0 --> means it is already rented)

	date dat;     // variable from type "date" which we declare earlier

	cst cost;     // variable from type "cst" which we declare earlier

};

#define car_size 100             // the car array size

cars arr_car[car_size] = {};     // the "main" car array which we will deal with in the program 

fstream f_car;                   // "f_car" is an object from "fstream" class 
								 // we use it to deal with "car.txt" file

int car_index;                   // we can consider it the actual size of the car array!!

//__________________________________________________________________________________________//


//////////////////////////////////////All customer variables//////////////////////////////////

struct customer        // the main struct of the customer which include all the customer data
{
	string f_name,               // the first name (must be only 1 name)
		l_name,                  // the rest of the name (could be more than 1 name)
		id,                      // the customer national ID
		cr_number,               // the customer credit card number
		ph_number,               // the customer ohone number
		us_name, pass;           // the customer user name and password

	int age;                    // the customer age

};
#define cs_size 100              // the customer array size

customer arr_cust[cs_size] = {}; // the "main" customer array which we will deal with in the program

fstream f_cust;                  // "f_cust" is an object from "fstream" class 
								 // we use it to deal with "customer.txt" file

int cust_idx;                    // we can consider it the actual size of the customer array!!

//__________________________________________________________________________________________//


//////////////////////////////////////All Rental variables////////////////////////////////////

struct rentals           // the main struct of rental which include all the customers rentals
{
	int cust_index; // the index of the customer who rent a car in "arr_cust" array so we have access to all of its data
	string car_LPN,    // the licence plate number of the car
		car_type,   // the type of car
		customer_id;

	bool statue;  // the state of the rental (1 --> means it is current & 0 --> means it is previous)

	date dat;    // variable from type "date" which we declare earlier
	int rental_cost;  // the total cost of rental that the customer pay
};

#define rtl_size 100     // the rental array size

rentals arr_rtl[rtl_size] = {};  // the "main" rental array which we will deal with in the program

fstream f_rentals;               // "f_rentals" is an object from "fstream" class 
								 // we use it to deal with "rentals.txt" file


int  rtl_idx;      // we can consider it the actual size of the rental array!!

//__________________________________________________________________________________________//


//////////////////////////////////////All admin variables//////////////////////////////////

//                    ----> very important note <-----
// We are the only ones who make modifications to the admin file,
//whether adding or deleting,
//and then we must change "adm_size" 

struct admins // the main struct of the admin which include all the admin data
{
	string usr_name,   // the admin user name
		password;   // the admin password 
};

#define adm_size 6        // the rental array size

admins arr_admin[adm_size] = {};    // the "main" admin array which we will deal with in the program

fstream f_admin;     // "f_admin" is an object from "fstream" class 
					   // we use it to deal with "admin.txt" file


//__________________________________________________________________________________________//


fstream index;      // "index" is an object from "fstream" class 
				   // we use it to deal with "index.txt" file
				  // include the "car_index"  & "cust_idx" & "rtl-idx" respectly  

//__________________________________________________________________________________________//

string sti; //(using when read integer from any file as string then convert it to integar )

//__________________________________________________________________________________________//


//////////////////////////////////////////variables in input validation//////////////////////////////////

#define num_of_CarType  7   // number of avaliabe different car types ------> "note if you modify this constant you should add new type in the (car_types) file"

string carTypeArray[num_of_CarType];         // array of strings to store these types

fstream carType;                             // the file of car types ----> "note we can only modify in this file by hand"

	 // *******************************************************************************************//
int num_trails;  // number of trials that the user can input 

bool check;   // for input validation

	 // *******************************************************************************************//

// To store number of days in all months from January to Dec.
const int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

////////////////////////////////////////////////////////////////////////////////////////

#define num_of_Branches 9                // number of avaliabe different Branches ------> "note if you modify this constant you should add new type in the (car_types) file"

string brancheArray[num_of_Branches];         // array of strings to store these branches

fstream branche;                             // the file of branches ----> "note we can only modify in this file by hand"
