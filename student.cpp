#include <iostream>
#include <string>
#include "student.h" 
#include "degree.h"

using namespace std;




void student::setID(string studentID) {
	this->studentID = studentID;
	return;

}

string student::GetID() const{
	return studentID; 
}

void student::setFirstName(string firstName) {
	this->firstName = firstName;
	return;

}

string student::GetFirstName() const {
	return firstName;
}

void student::setLastName(string lastName) {
	this->lastName = lastName;
	return;

}

string student::GetLastName() const {
	return lastName;
}

void student::setEmail(string email) {
	this->emailAdress = email;
	return;

}

string student::GetEmail() const {
	return emailAdress;
}

void student::setAge (int age) {
	this->age = age;
	return;

}

int student::GetAge() const {
	return age;
}

void student::setEndOfCourse(int index1, int index2, int index3) {
	this->endOfCourse[0] = index1;
	this->endOfCourse[1] = index2;
	this->endOfCourse[2] = index3;
	return;

}

int student::GetEndOfCourse(int index) const {
	return endOfCourse[index];
}

student::~student() {
	cout << "Deleting Student" << endl; 
	delete this; 
	return; 
}

student::student() {
	studentID = "00";
	firstName = "NA";
	lastName = "NA";
	emailAdress = "NA";
	age = 0; 
	endOfCourse[1] = 0;
	endOfCourse[2] = 0;
	endOfCourse[3] = 0;
		return;
}
