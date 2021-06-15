#ifndef STUDENTMAPPER_H
#define STUDENTMAPPER_H

#include <iostream>
#include <string>
#include "Student.hpp"
using namespace std;

class StudentMapper{
    public:
    bool insert(Student* student);
    bool update(int identifier);
    bool delete(int identifier);
}

#endif //STUDENTMAPPER_H