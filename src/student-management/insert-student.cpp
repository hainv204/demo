#include <iostream>
#include "../../include/student-struct.h"
#include "../../include/majors.h"
using namespace std;
void insertStudent()
{
    Student newStudent;
    cout << "Enter student ID: ";
    cin >> newStudent.id;
    cout << "Enter student name: ";
    cin >> newStudent.name;
    cout << "Enter student major (1-Computer Science, 2-Mathematics, 3-Physics): ";
    int majorChoice;
    cin >> majorChoice;
}