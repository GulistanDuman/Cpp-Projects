#include <iostream>
#include <queue>
#include <list>
using namespace std;

class Human {
protected:
    string name;
    int age;
    bool isDisable;
public:
    Human(string name, int age, bool isDisable = false) 
        : name(name), age(age), isDisable(isDisable) {}

    void print() const {
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "isDisable: " << (isDisable ? "Yes" : "No") << endl;
        if (isDisable) {
            cout << "This person is disabled" << endl;
        } else {
            cout << "This person is not disabled" << endl;
        }
    }

    friend class Patient; 
};

class Patient : public Human {
    int patientNo;
    int priority;
public:
    Patient(int patientNo, const Human& h) 
        : Human(h.name, h.age, h.isDisable), patientNo(patientNo), priority(0) {
        calculatePriority();
    }

    void calculatePriority() {
        if (isDisable) {
            priority += 30;
        }
        if (age > 65) {
            priority += age - 65;
        }
    }

    void print() const {
        Human::print();
        cout << "Patient No: " << patientNo << endl
             << "Priority: " << priority << endl;
    }

    int getPriority() const { return priority; }
    int getAge() const { return age; }
    int getPatientNo() const { return patientNo; }
};


struct ComparePatients {
    bool operator()(const Patient &a, const Patient &b) {
        if (a.getPriority() == b.getPriority()) {
            if (a.getAge() == b.getAge()) {
                return a.getPatientNo() > b.getPatientNo(); 
            }
            return a.getAge() < b.getAge(); 
        }
        return a.getPriority() < b.getPriority(); 
    }
};

class RegistPatient {
    list<Patient> registqueue;
    priority_queue<Patient, vector<Patient>, ComparePatients> examinationqueue;

public:
    void regist(Human& h) {
        Patient patient(registqueue.size() + 1, h);
        registqueue.push_back(patient); 
        examinationqueue.push(patient); 
    }

    void printregistorder() {
        cout << "### Regist Patient ###" << endl;
        if (registqueue.empty()) {
            cout << "No patient is registered." << endl;
        } else {
            for (auto it = registqueue.begin(); it != registqueue.end(); it++) {
                it->print();
                if (next(it) != registqueue.end())
                    cout << "----------------" << endl;
                else
                    cout << endl;
            }
        }
        cout << "### End of the Patient Regist ###" << endl;
    }

    void printexaminationorder() {
        cout << "### Examination Queue ###" << endl;
        if (examinationqueue.empty()) { 
            cout << "There is no patient waiting for examination." << endl;
        } else {
            priority_queue<Patient, vector<Patient>, ComparePatients> temp = examinationqueue;
            while (!temp.empty()) {
                Patient patient = temp.top();
                patient.print();
                temp.pop();
                if (!temp.empty())
                    cout << "----------------" << endl;
                else
                    cout << endl;
            }
        }
        cout << "### End of the Patient Examination Queue ###" << endl;
    }

    void callPatient() {
        if (examinationqueue.empty()) {
            cout << "There is no patient waiting for examination." << endl;
        } else {
            cout << " Patient is called for examination: " << endl;
            Patient patient = examinationqueue.top();
            patient.print();
            examinationqueue.pop(); 
        }
        cout << endl;
    }
};

int main() {
    Human Humans[] = {
        Human("John", 20),
        Human("Alice", 30, true),
        Human("Bob", 75, true), 
        Human("Charlie", 50),
        Human("Max", 15),
        Human("Elon", 45, true),
        Human("Steve", 45, true),  
        Human("Gigi", 19)
    }; 

    RegistPatient banko;
    
    for (Human& h : Humans) {
        banko.regist(h);
    }

    banko.printregistorder();
    cout << endl;
    banko.printexaminationorder();
    cout << endl;

    banko.callPatient();
    banko.callPatient();
    banko.callPatient();
    banko.callPatient();
    banko.callPatient();
    banko.callPatient();
    banko.callPatient();
    banko.callPatient();
    banko.callPatient();

    
    return 0; 
}
