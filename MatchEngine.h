#ifndef MATCHENGINE_H
#define MATCHENGINE_H

#include "Student.h"
#include "Internship.h"

using namespace std;

class MatchEngine
{
public:

    static int calculateScore(Student student, Internship internship)
    {
        int score = 0;

        vector<string> studentSkills = student.getSkills();
        vector<string> internshipSkills = internship.getSkills();

        for (string studentSkill : studentSkills)
        {
            for (string internshipSkill : internshipSkills)
            {
                if (studentSkill == internshipSkill)
                {
                    score++;
                }
            }
        }

        return score;
    }
};

#endif