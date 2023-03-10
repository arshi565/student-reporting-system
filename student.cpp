#include "Student.h"

Student::Student(std::string name, int rollNumber) : name(name), rollNumber(rollNumber) {
    marks.resize(2);
    for (int i = 0; i < 2; i++) {
        marks[i].resize(3);
        for (int j = 0; j < 3; j++) {
            marks[i][j].resize(0);
        }
    }
}

void Student::addMarks(int semester, std::string subject, int marks) {
    int subjectIndex = -1;
    if (subject == "English") {
        subjectIndex = 0;
    } else if (subject == "Maths") {
        subjectIndex = 1;
    } else if (subject == "Science") {
        subjectIndex = 2;
    }
    if (subjectIndex != -1) {
        this->marks[semester - 1][subjectIndex].push_back(marks);
    }
}

double Student::calculatePercentage(int semester) const {
    double totalMarks = 0;
    double maxMarks = 300; // 100 marks per subject
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < marks[semester - 1][i].size(); j++) {
            totalMarks += marks[semester - 1][i][j];
        }
    }
    return (totalMarks / maxMarks) * 100;
}

double Student::getSubjectMarks(int semester, std::string subject) const {
    int subjectIndex = -1;
    if (subject == "English") {
        subjectIndex = 0;
    } else if (subject == "Maths") {
        subjectIndex = 1;
    } else if (subject == "Science") {
        subjectIndex = 2;
    }
    if (subjectIndex != -1) {
        double totalMarks = 0;
        for (int i = 0; i < marks[semester - 1][subjectIndex].size(); i++) {
            totalMarks += marks[semester - 1][subjectIndex][i];
        }
        return totalMarks / marks[semester - 1][subjectIndex].size();
    } else {
        return -1;
    }
}

int Student::getRollNumber() const {
    return rollNumber;
}

std::string Student::getName() const {
    return name;
}
