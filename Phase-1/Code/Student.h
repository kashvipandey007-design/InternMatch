#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>
#include <string>

using namespace std;

class Student : public Person
{
private:
    string course;
    int semester;
    vector<string> skills;

public:
    Student()
    {
        course = "";
        semester = 0;
    }

    Student(string n, string e, string c, int s)
        : Person(n, e)
    {
        course = c;
        semester = s;
    }

    void addSkill(string skill)
    {
        skills.push_back(skill);
    }

    string getCourse()
    {
        return course;
    }

    int getSemester()
    {
        return semester;
    }

    vector<string> getSkills()
    {
        return skills;
    }
};

#endif