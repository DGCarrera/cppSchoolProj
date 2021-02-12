#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"

using namespace std;


#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

class securityStudent : public student {
public:
	Degree GetDegreeProgram() const; 
	void setDegreeProgram(Degree degreeType);
	void print();

private:
	Degree degreeType = SECURITY;
};

#endif
