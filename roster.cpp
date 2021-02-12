#include "student.h"
#include "softwareStudent.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "roster.h"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;



roster* classRoster = new roster;
string student_id;
string first_name;
string last_name;
string student_email;
int student_agex = 0;
int student_courseDates1X = 0;
int student_courseDates2X = 0;
int student_courseDates3X = 0;
string student_degree;




int k = 0;

string roster:: iterateDIC(int obji){

	string sid = ptr[obji]->GetID();
	return sid ;

}

 roster::~roster(){

	delete [] ptr;
	delete classRoster;


}

void roster::printInvalidEmails(){
	cout << "Printing invalid emails" << endl << endl;
	for (int i = 0; i < 5; i++) {
	string tempEmail;
	tempEmail = ptr[i]->GetEmail();
//	cout << tempEmail.find(" ") << endl;


	if( tempEmail.find(" ") != string::npos ){
		cout << tempEmail << endl << endl;

	}
	else if( tempEmail.find("@") == string::npos){
		cout << tempEmail << endl << endl;

	}

	else if ( tempEmail.find(".") == string::npos ){
		cout << tempEmail << endl << endl;


	}



	}


	return;

}

void roster::remove(string studentID){
	for(int i = 0; i < 5 ; i++ ){
		if (ptr[i] == NULL ){
			cout << "Student " << studentID << " not found." << endl << endl;
			return;
		}
		else if (ptr[i]->GetID() == studentID ) {
			cout << "Removing student " << studentID << endl << endl;
			ptr[i] = NULL;
			return;
		}

	}
	cout << "Student " << studentID << " not found." << endl << endl;
	return;
}

void roster::printByDegreeProgram(int degreeProgram) {

	cout << "Printing by degree program" << endl << endl ;

	for(int i = 0; i < 5; i++){

	if ( ptr[i]->GetDegreeProgram() == degreeProgram ){
		ptr[i]->print();
	}
}

}

void roster::printAll(){

	for(int i = 0; i < 5 ; i++){
		ptr[i]->print();
	}

}


void roster::printDaysInCourse(string studentID) {
	int answer = 0;


	for (int i=0 ; i < 5 ; i++) {

		if ( ptr[i]->GetID() == studentID){
			int first = ptr[i]->GetEndOfCourse(0);
			int second = ptr[i]->GetEndOfCourse(1);
			int third = ptr[i]->GetEndOfCourse(2);

			answer = (first + second + third) / 3;

			cout << "The average days in course for " << ptr[i]->GetFirstName() << " " <<ptr[i]->GetLastName() << " is " << answer << endl;
			cout << endl;

			}


	}

	return;
}

void roster::add(string studentID, string firstName, string lastName, string emailAdress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string program) {

	cout << "Roster add function initiated" << endl;
	cout << "Adding student " << firstName << endl;
	cout << endl;
	student* studentObject = ptr[k];


	studentObject->setID(studentID);

	studentObject->setFirstName(firstName);

	studentObject->setLastName(lastName);

	studentObject->setEmail(emailAdress);

	studentObject->setAge(age);

	studentObject->setEndOfCourse(daysInCourse1, daysInCourse2, daysInCourse3);


	return;
}




int main() {

	cout <<"Scripting and Programming Applications C876" << endl;
	cout << "Programming language used: C++" << endl;
	cout << "Student ID: 000728375" << endl;
	cout << "Name: David Carrera" << endl << endl;


	vector<string> splitStrings(9);



for(int i = 0; i < 5 ; i++) {


	stringstream ss(studentData[i]);
//	cout << "iteration i number " << i << endl;
for (int j = 0; j < 9 ; j++ ) {
	string item;
	getline(ss, item, ',');
	splitStrings.at(j) = item;
//	cout << item << " iteration number" << j << endl;
	int sLength =  item.length() + 1;
	item.erase(0, sLength );
//	cout << "split string = " << splitStrings.at(j) << " at vector "<< j << endl;

	if (j == 0 ){
	student_id = splitStrings.at(0);
	}

	if (j == 1 ){
	first_name = splitStrings.at(1);
	}

	if (j == 2 ){
	last_name = splitStrings.at(2);
	}

	if (j == 3 ){
	student_email = splitStrings.at(3);
	}

	if (j == 4 ){
	string student_age =  splitStrings.at(4);
	stringstream student_age_s(student_age);
	student_age_s >> student_agex;
	}

	if(j == 5) {
	string	course_dates1 =  splitStrings.at(5);
	stringstream student_courseDates1_s(course_dates1);
	student_courseDates1_s >> student_courseDates1X;
	}

	if(j == 6){
	string	course_dates2 =  splitStrings.at(6);
	stringstream student_courseDates2_s(course_dates2);
	student_courseDates2_s >> student_courseDates2X;
	}

	if(j == 7){
	string course_dates3 =  splitStrings.at(7);
	stringstream student_courseDates3_s(course_dates3);
	student_courseDates3_s >> student_courseDates3X;
	}

	if(j == 8) {
	student_degree = splitStrings.at(8);


	}




}


classRoster->add(student_id, first_name, last_name, student_email, student_agex, student_courseDates1X, student_courseDates2X, student_courseDates3X, student_degree );
k++;



}



classRoster->printAll();
classRoster->printInvalidEmails();

for (int i = 0; i < 5 ; i++){
string tempID = classRoster->iterateDIC(i);
classRoster->printDaysInCourse(tempID);
}

classRoster->printByDegreeProgram(SOFTWARE);
classRoster->remove("A3");
classRoster->remove("A3");


classRoster->~roster();
classRoster->printAll();

};




