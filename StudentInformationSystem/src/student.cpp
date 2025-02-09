#include <iostream>
#include "../include/student.h"

using namespace std;

Student::Student(int _id, string _name, int _examNote) {
    id = _id;
    name = _name;
    examNote = _examNote;
}
void Student::setID(int _id) {
    id = _id;
}
void Student::setName(string _name) {
    name = _name;
}
void Student::setExamNote(int _examNote) {
    examNote = _examNote;
}
int Student::getID() {
    return id;
}

void Student::print() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Exam note: " << examNote << endl;
}

void Student::writeinformation() {
    cout << "Student ID: " << id << "\nName: " << name << "\nExam Note: " << examNote << endl;
}



