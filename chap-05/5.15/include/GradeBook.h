#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
#include <stdio.h>
using namespace std;

class GradeBook
{
    public:
        explicit GradeBook(string);
        void setCourseName(string);
        string getCourseName()const;
        void displayMessage()const;
        void inputGrades();
        void displayGradeReport()const;

    private:
        string courseName;
        unsigned int aCount;
        unsigned int bCount;
        unsigned int cCount;
        unsigned int dCount;
        unsigned int fCount;
};

#endif // GRADEBOOK_H
