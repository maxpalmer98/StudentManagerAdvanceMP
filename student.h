#include <string>
#include <vector>
#ifndef _STUDENT_H_
#define _STUDENT_H_

class student
{
private:
std::string first;
std::string last;
std::vector <double> grades;
public:
student();
void setName(std::string &, std::string &);
std::string fullName();
void addGrade(double);
double getScore();
};

#endif
