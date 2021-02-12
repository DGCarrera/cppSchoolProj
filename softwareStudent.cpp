#include <iostream>
#include <string>
#include "student.h" 
#include "degree.h"
#include "softwareStudent.h"

using namespace std;

Degree softwareStudent::GetDegreeProgram() const {
	return degreeType;
}

void softwareStudent::setDegreeProgram(Degree degreeType) {
	cout << "Degree program set to Software." << endl;
	degreeType = SOFTWARE;
	return;
}

void softwareStudent::print() {
	cout << "Id: " << this->GetID() << "\t" << "First Name: " << this->GetFirstName() << "\t" << "Last Name: " << this->GetLastName() << "\t" << "Email: " << this->GetEmail() << "\t" << "Age: " << this->GetAge() << "\t" << "daysInCourse: {" << this->GetEndOfCourse(0) << ", " <<this->GetEndOfCourse(1) << ", " << this->GetEndOfCourse(2) << "}" << "\t" << "Degree Program: SOFTWARE "  << endl;
	cout << endl;
		return;

}
