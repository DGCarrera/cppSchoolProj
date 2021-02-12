#include <iostream>
#include <string>
#include "degree.h"
using namespace std; 

#ifndef STUDENT_H
#define STUDENT_H

class student{

public:
	void setID(string studentID);
	void setFirstName(string firstName); 
	void setLastName(string lastName);
	void setAge(int age);
	void setEmail(string email);
	void setEndOfCourse(int index1, int index2, int index3);
	string GetID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmail() const;
	int GetAge() const; 
	int GetEndOfCourse(int index) const;
	student();
	virtual void print() = 0;
	virtual Degree GetDegreeProgram() const =0;
	~student(); 

protected:
	string studentID; 
	string firstName; 
	string lastName; 
	string emailAdress;
	int age; 
	int endOfCourse[3]; 
	   

};

#endif 
