#include <iostream>
#include <string>
#include "student.h" 
#include "degree.h"
#include "networkStudent.h"


using namespace std;

Degree networkStudent::GetDegreeProgram() const {
	return degreeType;
}

void networkStudent::setDegreeProgram(enum Degree degreeType) {
	cout << "Degree program set to Networking." << endl;
	degreeType = NETWORKING;
	return;
}

void networkStudent::print() {


	cout << "Id: " << this->GetID() << "\t" << "First Name: " << this->GetFirstName() << "\t" << "Last Name: " << this->GetLastName() << "\t" << "Email: " << this->GetEmail() << "\t" << "Age: " << this->GetAge() << "\t" << "daysInCourse: {" << this->GetEndOfCourse(0) << ", " <<this->GetEndOfCourse(1) << ", " << this->GetEndOfCourse(2) << "}" << "\t" << "Degree Program: NETWORK "  << endl;
	cout << endl;
		return;

}




