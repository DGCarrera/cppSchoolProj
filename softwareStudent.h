#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"

using namespace std;


#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

class softwareStudent : public student {
public:
	Degree GetDegreeProgram() const;
	void setDegreeProgram(Degree degreeType);
	void print();

private:
	Degree degreeType = SOFTWARE;
};

#endif
