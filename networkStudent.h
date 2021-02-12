#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"

using namespace std;


#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

class networkStudent : public  student {
public:
	Degree GetDegreeProgram() const;
	void setDegreeProgram(enum Degree degreeType);
	void print(); 
private:
	Degree degreeType = NETWORKING ;
};

#endif
