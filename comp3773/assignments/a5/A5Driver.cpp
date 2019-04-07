/*
 * File:    A5Driver.cpp
 * Author:  William Wambolt 100097716
 * Version: 1.0
 * Date:    March 27, 2019
 * Purpose: Driver class to test modules.
 * 
 * Notes:   
 * 
 */

#include <iostream>
using namespace std;

#include "Registrar.h"

int
main()
{
    // The main program follows the following steps:

    // 1.  create a Registrar object
    Registrar * reg = new Registrar();

    // 2.  create and add at least three courses to the Registrar
    Course * cour_1 = new Course("COMP 0666");
    Course * cour_2 = new Course("MATH 1337");
    Course * cour_3 = new Course("BUSI 8008");
    Course * cour_4 = new Course("CHEM 8584");
    Course * cour_5 = new Course("PSYC 1123");
    Course * cour_6 = new Course("WGST 3343");
    reg->addCourse(cour_1);
    reg->addCourse(cour_2);
    reg->addCourse(cour_3);
    reg->addCourse(cour_4);
    reg->addCourse(cour_5);
    reg->addCourse(cour_6);

    // 3.  create and add at least five students to the Registrar
    Student * stud_1 = new Student("Chief Masters");
    Student * stud_2 = new Student("Artyom Metro");
    Student * stud_3 = new Student("J.C. Jensen");
    Student * stud_4 = new Student("Cmdr. Sheepherder");
    Student * stud_5 = new Student("Link Zelda");
    reg->addStudent(stud_1);
    reg->addStudent(stud_2);
    reg->addStudent(stud_3);
    reg->addStudent(stud_4);
    reg->addStudent(stud_5);

    // 4.  enroll one student in three courses
    reg->enroll(1, "COMP 0666");
    reg->enroll(1, "MATH 1337");
    reg->enroll(1, "BUSI 8008");

    // 5.  enroll one student in two courses
    reg->enroll(2, "CHEM 8584");
    reg->enroll(2, "PSYC 1123");

    // 6.  enroll three students in one course each
    reg->enroll(3, "COMP 0666");
    reg->enroll(4, "WGST 3343");
    reg->enroll(5, "WGST 3343");

    /* 7.  for each student a.print their name and number and the list of
           courses they're enrolled in */
    cout << "Students and their courses:" << endl
         << "***************************" << endl;
    stud_1->printStudentInfo();
    stud_1->printCourseList();
    cout << endl;

    stud_2->printStudentInfo();
    stud_2->printCourseList();
    cout << endl;

    stud_3->printStudentInfo();
    stud_3->printCourseList();
    cout << endl;

    stud_4->printStudentInfo();
    stud_4->printCourseList();
    cout << endl;

    stud_5->printStudentInfo();
    stud_5->printCourseList();
    cout << endl << endl;

    /* 8.  for each course a.print its code and the list of students enrolled
           in it */
    cout << "Courses and their students:" << endl
         << "***************************" << endl;
    cour_1->printCode();
    cour_1->printStudentList();
    cout << endl;

    cour_2->printCode();
    cour_2->printStudentList();
    cout << endl;

    cour_3->printCode();
    cour_3->printStudentList();
    cout << endl;

    cour_4->printCode();
    cour_4->printStudentList();
    cout << endl;

    cour_5->printCode();
    cour_5->printStudentList();
    cout << endl;

    cour_6->printCode();
    cour_6->printStudentList();
    cout << endl << endl;

    // 9.  drop (any) one student from (any) one course
    cout << "Student #1 dropped COMP 0666" << endl
         << "****************************" << endl;
    reg->drop(1, "COMP 0666");

    /* 10. print the name and number of that student and the list of courses
           they're enrolled in */
    stud_1->printStudentInfo();
    stud_1->printCourseList();
    cout <<  endl << endl;

    /*11. print the code and list of students for the course that student
          dropped */
    cout << "COMP 0666 not enrolling Student #1" << endl
         << "**********************************" << endl;
    cour_1->printCode();
    cour_1->printStudentList();

    return 0;
}