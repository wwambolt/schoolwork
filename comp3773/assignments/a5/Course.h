/*
 * File:    Course.h
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    March 27, 2019
 * Purpose: Create courses, print info about the course, and add/remove
 *          students from courses.
 * 
 * Notes:   
 * 
 */

#ifndef COUR_H
#define COUR_H

#include <string>
#include <vector>
using namespace std;

#include "Student.h"
#include "Registrar.h"

class Student;

class Course
{
    public:
        friend class Registrar;

        // Course Code (a string, e.g. COMP 3773)
        string course_code;

        // create a new Course object (given a course code)
        Course(const string &c);

        // printCode -- print the course code
        void printCode(void);

        /* printCourseList -- print a list of the Students enrolled in this
           Course */
        void printStudentList(void);

    private:
        /* List of Students enrolled in this course (list of pointers
           to Student objects). */
        vector<Student *> student_list_;

        /* allow its friend the Registrar to add or delete a Student from the
           list of students enrolled. (That is, this is a private method.) */
        bool addStudent(Student * stud);
        bool removeStudent(Student * stud);
        
};

#endif