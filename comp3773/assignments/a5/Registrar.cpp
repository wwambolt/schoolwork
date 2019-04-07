/*
 * File:    Registrar.cpp
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    March 27, 2019
 * Purpose: Create a registrar object, add courses and students to the
 *          list of all students, enroll students into/drop them from
 *          courses, and search for courses and students in the lists.
 * 
 * Notes:   
 * 
 */

#include <iostream>
#include <vector>

#include "Registrar.h"

Registrar::Registrar()
{

}

Registrar::~Registrar()
{
    list_all_courses.clear();
    list_all_students.clear();
}

void Registrar::addCourse(Course * cour)
{
    list_all_courses.push_back(cour);
}

void Registrar::addStudent(Student * stud)
{
    list_all_students.push_back(stud);
}

Course * Registrar::findCourse(string c_code)
{
    std::vector<Course *>::iterator it;

    for (it = list_all_courses.begin(); it != list_all_courses.end(); it++)
    {
        //cout << (* it)->course_code << endl;
        if ( (* it)->course_code == c_code) // Found
        {
            //cout << "Course " << (* it)->course_code <<  " found" << endl;
            return * it;
        }
    }
    return NULL;
}

Student * Registrar::findStudent(int s_num)
{
    std::vector<Student *>::iterator it;

    for (it = list_all_students.begin(); it != list_all_students.end(); it++)
    {
        if ( (* it)->stud_num_ == s_num) // Found
        {
            //(* it)->printStudentInfo();
            return * it;
        }
    }
    return NULL;
}

void Registrar::enroll(int s_num, string c_code)
{
    Student * student = Registrar::findStudent(s_num);
    Course * course = Registrar::findCourse(c_code);

    if (student && course)
    {
        student->addCourse(course);
        course->addStudent(student);
    }
}

void Registrar::drop(int s_num, string c_code)
{
    Student * student = Registrar::findStudent(s_num);
    Course * course = Registrar::findCourse(c_code);

    if (student && course)
    {
        student->removeCourse(course);
        course->removeStudent(student);
    }
    
}