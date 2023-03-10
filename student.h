#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
public:
    Student(std::string name, int rollNumber);
    void addMarks(int semester, std::string subject, int marks);
    double calculatePercentage(int semester) const;
    double getSubjectMarks(int semester, std::string subject) const;
    int getRollNumber() const;
    std::string getName() const;
private:
    std::string name;
    int rollNumber;
    std::vector<std::vector<std::vector<int>>> marks; // [semester][subject][marks]
};

#endif
