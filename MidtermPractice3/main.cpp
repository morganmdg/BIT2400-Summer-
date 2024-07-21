#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main()
{
    Student student;
    student.displayCourses();

    int courseSlotToUse;
    string courseToAdd;

    cout << "Enter a course slot to overwrite \n";
    cin >> courseSlotToUse;
    cout << "Enter a course code: \n";
    cin >> courseToAdd;

    student.addCourse(courseToAdd, courseSlotToUse);

    student.displayCourses();
}
