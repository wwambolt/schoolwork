/*
 * File:    Student.cpp
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    March 27, 2019
 * Purpose: Create students, print info about the students, and add/remove
 *          courses from student objects.
 * 
 * Notes:   
 * 
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "Student.h"

int Student::count_ = 1;

Student::Student(const string &s)
{
    name = s;
    stud_num_ = count_;
    count_++;
}

void Student::printStudentInfo(void)
{
    // (e.g. "Stu Dent (#10345)")
    cout << this->name << " (#" << this->stud_num_ <<  ")" << endl;
}

void Student::printCourseList(void)
{
    std::vector<Course *>::iterator it;

    for(auto it = course_list_.begin(); it != course_list_.end(); it++)
    {
        cout << (* it)->course_code << endl;
    }
}

bool Student::addCourse(Course * cour)
{
    course_list_.push_back(cour);
    return true;
}

bool Student::removeCourse(Course * cour)
{
    std::vector<Course *>::iterator it;
    it = find (course_list_.begin(), course_list_.end(), cour);
    if (it != course_list_.end())
    {
        course_list_.erase(it);
        return true;
    }
    return false;
}