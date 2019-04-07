Assignment 5
Create Student, Course, and Registrar classes. 

The Registrar class keeps a list of all Students and all Courses.  Each Student keeps a list of

the Courses they're enrolled in, and each Course keeps a list of the Students enrolled in it.  The main program interacts primarily with the

Registrar class.  Create a main program that creates three courses and five students as part of testing the behaviour of the Registrar class.

Details

The Student class records:

•Student Number (a constant int, automatically generated)

•Student Name (a string)

•List of courses this student is enrolled in (list of pointers to Course objects).

  The Course class records: •Course Code (a string, e.g. COMP 3773)

•List of Students enrolled in this course (list of pointers to Student objects).

The Registrar class records:

•List of all Students (list of pointers to Student objects)

•List of all Courses (list of pointers to Course objects)

 The Student class allows the following actions:

•create a new Student object (given a name)

•print the Student's name and student number (e.g. "Stu Dent (#10345)")

•print a list of the Student's Courses

•allows its friend the Registrar to add or delete courses from the list of enrolled courses. 

(That is, this is a private method.) The Course class allows the following actions:

•create a new Course object (given a course code)

•printCode -- print the course code •printCourseList -- print a list of the Students enrolled in this Course

•allow its friend the Registrar to add or delete a Student from the list of students enrolled.  (That ism this is a private method.)

The Registrar class allows the following actions:

•create a Registrar object

•addCourse -- add a newly created course (using a pointer to a Course object)

•addStudent -- add a newly created student (using a pointer to a Student object) •enroll -- enroll a student in a course (given student number and code)

•drop -- drop a student from a course (given student number and code) •findCourse -- find a course by code

•findStudent -- find a student by student number •destroy the Registrar object (releasing all dynamic resources used -- all those courses and students)

The main program follows the following steps:

1.create a Registrar object

2.create and add at least three courses to the Registrar

3.create and add at least five students to the Registrar

4.enroll one student in three courses

5.enroll one student in two courses

6.enroll three students in one course each

7.for each student a.print their name and number and the list of courses they're enrolled in

8.for each course a.print its code and the list of students enrolled in it

9.drop (any) one student from (any) one course

10.print the name and number of that student and the list of courses they're enrolled in

11.print the code and list of students for the course that student dropped Use STL lists and algorithms (find, find_if, etc.) as appropriate.  Use pointers to Courses and Students in the lists, and as method arguments

and return types.  (We don't want to create copies of these objects.)

Pass in a single tar archive (not compressed) with the following files (not in a folder):

•Registrar.h and Registrar.cpp

•Student.h and Student.cpp

•Course.h and Course.cpp

•A5Driver.cpp
