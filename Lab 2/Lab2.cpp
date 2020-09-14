/*
Hankel Haldin
Lab 2 Exploring Output
Due: 9/14/2020
Printing class schedule and star pattern to console
*/

#include <iostream> //For cout and endl keywords
#include <string> //Allows use of strings
#include <iomanip> //Used for setprecision for this program to control spacing between output

//Eliminates the need to use scope resolution operator (::) on standard library keywords
using namespace std;

/******************
Function Prototypes
******************/

//Prototypes for schedules by day
void Monday_Schedule();
void Tuesday_Schedule();
void Wednesday_Schedule();
void Thursday_Schedule();
void Friday_Schedule();

//Prototype for star pattern
void Star_Pattern();

/**********************
Identifier declarations
***********************/

//Identifier declarations for days of the week M-F.
const string M = "Monday";
const string T = "Tuesday";
const string W = "Wednesday";
const string TH = "Thursday";
const string F = "Friday";

//Identifier declarations for classes. Includes meeting times.
const string ALGEBRA = "8:00 - 9:30am	College Algebra";
const string RELIGION = "12:00 - 1:30pm	Intro to Religion";
const string C_LECTURE = "1:30 - 2:30pm	C++ Lecture";
const string MICRO_ECON = "8:00 - 9:30am	Microeconomics";
const string C_LAB = "1:00 - 3:00pm	C++ Lab";
const string COLLEGE_EXP = "8:00 - 9:30am	College Experience";

//Identifier declarations for star pattern.
const string PATTERN1 = "     *           *           *           *";
const string PATTERN2 = "*          *           *           *     ";

int main()
{
	//Banner message for class schedule
	cout << "********\n";
	cout << "Class Schedule Fall 2020" << endl;
	cout << "********\n";

	//Calls to schedule functions defined below.
	Monday_Schedule();
	Tuesday_Schedule();
	Wednesday_Schedule();
	Thursday_Schedule();
	Friday_Schedule();

	//Banner message for star pattern
	cout << "********\n";
	cout << "Star Pattern" << endl;
	cout << "********\n";

	//Calls star pattern function
	Star_Pattern();

	return 0;
}


/************************
Definitions for functions
*************************/

void Monday_Schedule()
{
	//Outputs Monday with classes and their times.
	cout << M << setw(int(ALGEBRA.length()) + int(8)) << ALGEBRA << endl;
	cout << M << setw(int(RELIGION.length()) + int(8)) << RELIGION << endl;
	cout << M << setw(int(C_LECTURE.length()) + int(8)) << C_LECTURE << endl;
	cout << " " << endl; //Space before next block of output.
}

void Tuesday_Schedule()
{
	//Outputs Tuesday with classes and their times.
	cout << T << setw(int(MICRO_ECON.length()) + int(7)) << MICRO_ECON << endl;
	cout << T << setw(int(C_LAB.length()) + int(7)) << C_LAB << endl;
	cout << " " << endl; //Space before next block of output.
}

void Wednesday_Schedule()
{
	//Outputs Wednesday with classes and their times.
	cout << W << setw(int(ALGEBRA.length()) + int(5)) << ALGEBRA << endl;
	cout << W << setw(int(RELIGION.length()) + int(5)) << RELIGION << endl;
	cout << " " << endl; //Space before next block of output.
}

void Thursday_Schedule()
{
	//Outputs Thursday with classes and their times
	cout << TH << setw(int(MICRO_ECON.length()) + int(6)) << MICRO_ECON << endl;
	cout << " " << endl; //Space before next block of output
}

void Friday_Schedule()
{
	//Outputs Friday with classes and their times.
	cout << F << setw(int(COLLEGE_EXP.length()) + int(8)) << COLLEGE_EXP << endl;
	cout << " " << endl; //Space before next block of output
}

//Definition of the Star_Pattern function.
void Star_Pattern()
{
	/************************************************************************************************************************
	*This function is composed of 2 patterns that repeat four times each.
	*Instead of having to count out the pattern each time, the function allows you call it and reproduce the following block.
	*************************************************************************************************************************/
	cout << PATTERN1 << endl;
	cout << PATTERN2 << endl;
	cout << PATTERN1 << endl;
	cout << PATTERN2 << endl;
	cout << PATTERN1 << endl;
	cout << PATTERN2 << endl;
	cout << PATTERN1 << endl;
	cout << PATTERN2 << endl;
}