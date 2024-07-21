#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main()
{

    Student student;
    student.displayCourses();

    int slotAdd;
    string courseAdd;

    cout << "Enter course slot to override (#) : " << endl;
    cin >> slotAdd;

    cout << "Enter course code to override:  " << endl;
    cin >> courseAdd;

    student.addCourses(courseAdd, slotAdd);
    student.displayCourses();

}
