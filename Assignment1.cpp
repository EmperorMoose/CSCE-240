/*
* Title: Assignment one
* Author: A. Pierce Matthews
* Function: Prompts the user to input a students information, then displays that students standing.
* Input: Two strings, One double
* Output: The name of the student (first name, last name) and the year of schooling that student is enrolled in.
*
* Created on August 26, 2011, 8:53 AM
* Last modified on December 11 2016, by Pierce Matthews
* Copyright protection information
*/

#include <iostream>
#include <string>

using namespace std;


int main(int argc, char** argv) {

	/*
	This is the student class. It stores the firstName, lastName, and years variables. Corresponding to the first and last names of the student, and the years attended at USC
	*/
	class Student { string firstName, lastName; double years;
					public:
						string returnFirst() 
							{ return firstName; }; 
						string returnLast() 
							{ return lastName; }; 
						/*This method takes the inputted number of years, and outputs the standing of the student.*/
						string returnYear()
						{
							if (years == 0)
								return "Freshman";
							else if (years > 1 && years <= 2)
								return "Sophomore";
							else if (years > 2 && years <= 3)
								return "Junior";
							else
								return "Senior";
						};
						/*This is the constructor for the student object*/
						Student(string fname, string lname, double x)
						{
							firstName = fname;
							lastName = lname;
							years = x;
						};
					};

	//Variables to store the user input in.
	string fname;
	string lname;
	double y;
	
	//Asking the user for input. 
	cout << "Please enter the first name of the student \n";
	cin >> fname;

	cout << "Please enter the last name of the student \n";
	cin >> lname;

	cout << "Please enter the years attended at USC \n";
	cin >> y;

	//Creates the student object.
	Student student(fname, lname, y);

	//Outputs the students name and standing.
	cout << student.returnLast() << ", " << student.returnFirst() << " USC Standing: " << student.returnYear() << "\n";
	
	return 0;
}