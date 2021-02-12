#pragma once
#include "student.h"
#include "softwareStudent.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include <iostream>
#include <string>
using namespace std;

#ifndef ROSTER_H
#define ROSTER_H

const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		 "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		 "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		 "A5,David,Rutherford,gotek52@gmail.com,28,30,30,30,SOFTWARE" };

class roster {

public:
	void add(string studentID, string firstName, string lastName, string emailAdress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string program);
	void remove(string studentID);
	void printDaysInCourse(string studentID);
	void printAll();
	void printInvalidEmails();
	void printByDegreeProgram(int degreeProgram);
	string iterateDIC(int obji );
	~roster();


private:
	securityStudent* john = new securityStudent;
	networkStudent* suzan = new networkStudent;
	softwareStudent* jack = new softwareStudent;
	securityStudent* erin = new securityStudent;
	softwareStudent* david = new softwareStudent;
	student *ptr[5]= {john, suzan, jack, erin, david};

};




#endif
