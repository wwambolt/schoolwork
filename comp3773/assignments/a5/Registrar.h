/*
 * File:    Registrar.h
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

#ifndef REGI_H
#define REGI_H

#include <vector>
#include <string>
using namespace std;

#include "Student.h"
#include "Course.h"

class Student;
class Course;

class Registrar
{
    public:
        // create a Registrar object
        Registrar();

        /* destroy the Registrar object (releasing all dynamic resources used 
           -- all those courses and students) */
        ~Registrar();

        /* addCourse -- add a newly created course (using a pointer to a
           Course object) */
        void addCourse(Course *);

        /* addStudent -- add a newly created student (using a pointer to a
           Student object) */
        void addStudent(Student *);

        /* enroll -- enroll a student in a course (given student number
           and code) */
        void enroll(int s_num, string c_code);

        /* drop -- drop a student from a course (given student number
           and code) */
        void drop(int s_num, string c_code);

        // findCourse -- find a course by code
        Course * findCourse(string c_code);

        // findStudent -- find a student by student number
        Student * findStudent(int s_num);

    private:
        // List of all Students (list of pointers to Student objects)
        vector<Student *> list_all_students;

        // List of all Courses (list of pointers to Course objects)
        vector<Course *> list_all_courses;

};

#endif