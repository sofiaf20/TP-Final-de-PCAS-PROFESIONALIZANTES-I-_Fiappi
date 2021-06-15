#ifndef COURSEMAPPER_H
#define COURSEMAPPER_H

#include <iostream>
#include <string>
#include "Course.hpp"
using namespace std;

class CourseMapper{
    public:
    bool insert(Course* course);
    bool update(int identifier);
    bool delete(int identifier);
}

#endif //COURSEMAPPER_H