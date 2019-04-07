/*
 * File:    Student.h
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    March 27, 2019
 * Purpose: Create students, print info about the students, and add/remove
 *          courses from student objects.
 * 
 * Notes:   
 * 
 */

#ifndef STUD_H
#define STUD_H

#include <string>
#include <vector>
using namespace std;

#include "Registrar.h"
#include "Course.h"

class Course;

class Student
{
    public:
        friend class Registrar;

        // Student Name (a string)
        string name;

        // Student Number (a constant int, automatically generated)
        int stud_num_;

        // create a new Student object (given a name)
        Student(const string &s);

        /* print the Student's name and student number
           (e.g. "Stu Dent (#10345)") */
        void printStudentInfo(void);

        // print a list of the Student's Courses
        void printCourseList(void);

    private:
        static int count_;

        // List of courses this student is enrolled in (list of pointers to
        // Course objects).
        vector<Course *> course_list_;

        // allows its friend the Registrar to add or delete courses from the
        // list of enrolled courses. (That is, this is a private method.)
        bool addCourse(Course *);
        bool removeCourse(Course*);

};

#endif