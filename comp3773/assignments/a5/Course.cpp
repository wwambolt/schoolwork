/*
 * File:    Course.cpp
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    March 27, 2019
 * Purpose: Create courses, print info about the course, and add/remove
 *          students from courses.
 * 
 * Notes:   
 * 
 */

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include "Course.h"

Course::Course(const string &c)
{
    course_code = c;
}

void Course::printCode(void)
{
    cout << course_code << endl;
}

void Course::printStudentList(void)
{
    std::vector<Student *>::iterator it;

    for(auto it = student_list_.begin(); it != student_list_.end()
        ; it++)
    {
        (* it)->printStudentInfo();
    }
}

bool Course::addStudent(Student * stud)
{
    student_list_.push_back(stud);
    return true;
}

bool Course::removeStudent(Student * stud)
{
    std::vector<Student *>::iterator it;
    it = find (student_list_.begin(), student_list_.end(), stud);
    if (it != student_list_.end())
    {
        student_list_.erase(it);
        return true;
    }
    return false;
}