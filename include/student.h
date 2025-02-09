#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    int examNote;

public:
    Student(int _id, string _name, int _examNote);
    void setID(int id);
    void setName(string name);
    void setExamNote(int examNote);
    void writeinformation();
    int getID();
    string getName();
    int getExamNote();
    void print();
};

#endif
