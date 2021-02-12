#include <iostream>
#include <string>
#include "student.h" 
#include "degree.h"
#include "securityStudent.h"

using namespace std;

Degree securityStudent::GetDegreeProgram() const {
	return degreeType; 
}

void securityStudent::setDegreeProgram(Degree degreeType) {
	cout << "Degree program set to Security." << endl;
	degreeType = SECURITY;
	return; 
}



void securityStudent::print() {
	cout << "Id: " << this->GetID() << "\t" << "First Name: " << this->GetFirstName() << "\t" << "Last Name: " << this->GetLastName() << "\t" << "Email: " << this->GetEmail() << "\t" << "Age: " << this->GetAge() << "\t" << "daysInCourse: {" << this->GetEndOfCourse(0) << ", " <<this->GetEndOfCourse(1) << ", " << this->GetEndOfCourse(2) << "}" << "\t" << "Degree Program: SECURITY "  << endl;
	cout << endl;
	return;


}
