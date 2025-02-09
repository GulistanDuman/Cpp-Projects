#include <iostream>
#include "../include/student.h"
#include <list>
using namespace std;

void showMenu() {
    cout <<" * * * * * * * * *  *"<< endl;
    cout <<" * *              * *"<< endl;
    cout <<" * *  MAIN MENU   * *"<< endl;
    cout <<" * *              * *"<< endl;
    cout <<" * * * * * * * * *  *"<< endl;
    cout << "1. Add student" << endl;
    cout << "2. Show students" << endl;
    cout << "3. Delete student according to id" << endl;
    cout << "4. Search student " << endl;
    cout << "5. Exit" << endl;
}

void addStudent(list <Student> *List) {
    int id;
    string name, surname, fullName;
    int examNote;
    
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter fullName: ";
    cin >> name >> surname;
    fullName = name + " " + surname;
    cout << "Enter exam note: ";
    cin >> examNote;
    
    Student s(id, fullName, examNote);
    List->push_back(s);
}


void showList(list <Student> *List) {
    list<Student>::iterator it;
    cout << endl << "- - - - Student List - - - -" << endl;
    for(it = List->begin(); it != List->end(); it++) {
        it->writeinformation();
    } 
    cout << endl;
}

void deleteStudent(list <Student> *List) {
    int id;
    cout << "Please enter the id of student to be deleted : " ;
    cin >> id;
    list<Student>::iterator it;
    for(it = List->begin(); it != List->end(); it++) {
        if (it -> getID() == id) 
            break;
    }
    if (it == List->end()) 
        cout << "Student not found" << endl;
    else
    List->erase(it);  
}

void studentSearch(list <Student> *List) {
    cout << "Searching student..." << endl;
    int id;
    cout << "Enter the id of the student you want to search: ";
    cin >> id;
    list<Student>::iterator it;
    for(it = List->begin(); it != List->end(); it++) {
        if (it->getID() == id) 
            break;
    }
    if (it == List->end()) 
        cout << "Student not found" << endl;
        else {
            cout << endl << "The student information you are looking for: " << endl;
            it->writeinformation();
            cout << endl;
        }
}
void writeinformation() {
    int id, examNote;
    string fullName;

    cout << "Student ID: " << id << "\nName: " << fullName << "\nExam Note: " << examNote << endl;
}

int main() {
    
    list <Student> *studentList = new list<Student>();

    int choosen = 0;
    do {
        showMenu();
        cout << "Your choice: ";
        cin >> choosen;

        if (choosen == 1) {
            addStudent(studentList);
        } 
        else if (choosen == 2) {
            showList(studentList);
        } 
        else if (choosen == 3) {
            deleteStudent(studentList);
        } 
        else if (choosen == 4) {
            studentSearch(studentList);
        } 
        else if (choosen == 5) {
            cout << "Exiting..." << endl;
        } 
        else {
            cout << "Invalid choice" << endl;
        }
    } while (choosen != 5);

    delete studentList;

    return 0;
}
