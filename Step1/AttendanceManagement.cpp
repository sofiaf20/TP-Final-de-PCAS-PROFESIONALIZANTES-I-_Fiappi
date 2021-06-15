#include "AttendanceManager.hpp"

AttendanceManagement::AttendanceManagement()
{
}

AttendanceManagement::~AttendanceManagement()
{
}
void AttendanceManagement::setAttendance(Student* student,Course* course,string datetime, bool state)
{
    ofstream archivo;
    archivo.open("Attendance.csv",ios::out);
   if(archivo.is_open()){
    
    archivo<< student->getIdentifier() <<", "
    << student->getName() <<", "
    << course->getIdentifier() << ", "
    << course->getName() << ", "
    << datetime << ", "
    << "present: " << state << ", "
    <<  endl;
    
   }
   archivo.close();
}
