#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"

void addStudent(std::vector<Student>& students) {
    std::string name;
    int rollNumber;
    std::cout << "Enter name of the student: ";
    std::getline(std::cin, name);
    std::cout << "Enter roll number of the student: ";
    std::cin >> rollNumber;
    std::cin.ignore
