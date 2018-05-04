#include <vector>
#include <string>
#include <iostream>
#include "student.h"

student::student()
{
  first = " ";
  last = " ";
  grades[0] = 0;
}

void student::setName(std::string &firstName, std::string &lastName)
{
  first = firstName;
  last = lastName;
}
    
std::string student::fullName()
{
  std::string f;
  f = first;
  f.append(" ");
  f.append(last);
  return f;
}

void student::addGrade(double grade)
{
  grades.push_back(grade);
}

double student::getScore()
{
  
  double gradeSum;
  double gradeAverage;
  for(int i = 0; i < grades.size(); i++)
  {
    gradeSum += grades[i];
  }
  gradeAverage = gradeSum / grades.size() - 1;
  return gradeAverage;
}


