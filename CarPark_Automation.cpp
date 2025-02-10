#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#define MAX 100
using namespace std;

class Vehicle {
public:
string numberPlate;
string person_name, person_surname, person_phonenum;
time_t entry_time;
}; Vehicle car[MAX];

class car_park {
public:
Vehicle car[MAX];   
string officer_id, officer_password;
int i, income;
car_park(string id, string s) { 
officer_id = id;
officer_password = s;
income=0;
i=-1;
}

void menu() {
    int choice;
    cout << " CAR PARK PROGRAM " << endl;
    cout << " - - - - - - - - - " << endl;
    cout << " 1. New Vehicle " << endl;
    cout << " 2. Vehicle Out " << endl;
    cout << " 3. List Vehicle "<< endl;
    cout << " 4. Report      " << endl;
    cout << " 5. Exit        " << endl;
    
    cout << " Enter your choice: ";
    cin >> choice;
    switch(choice) {
        case 1: new_vehicle(); break;
        case 2: vehicle_out(); break;
        case 3: list_vehicle(); break;
        case 4: report(); break;
        case 5: exit(0); break;
        default: cout << "Invalid choice!" << endl;
        menu();
        break;
    }
}

void new_vehicle() {
    i++;
    cout << "Enter the number plate: ";
    cin >> car[i].numberPlate;
    cout << "Enter the name: ";
    cin >> car[i].person_name;
    cout << "Enter the surname: ";
    cin >> car[i].person_surname;
    cout << "Enter the phone number: ";
    cin >> car[i].person_phonenum;
    car[i].entry_time = time(0);
    cout << "Vehicle added successfully!" << endl;
    menu();
}    
void vehicle_out() {
    string numberPlate;
    cout << "Enter the number plate: ";
    cin >> numberPlate;
    for(int j=0; j<=i; j++) {
        if(car[j].numberPlate == numberPlate) {
            time_t exit_time = time(0);
            double duration = difftime(exit_time, car[j].entry_time);
            double price = ceil(duration/3600)*5;
            cout << "Duration: " << duration << " seconds" << endl;
            cout << "Price: " << price << " TL" << endl;
            income += price;
            for(int k=j; k<i; k++) {
                car[k] = car[k+1];
            }
            i--;
            cout << "Vehicle out successfully!" << endl;
            menu();
        }
    }
    cout << "Vehicle not found!" << endl;
    menu();
}

void list_vehicle() {
    cout << "Number Plate\tName\tSurname\tPhone Number\tEntry Time" << endl;
    for(int j=0; j<=i; j++) {
        cout << car[j].numberPlate << "\t" << car[j].person_name << "\t" << car[j].person_surname << "\t" << car[j].person_phonenum << "\t" << ctime(&car[j].entry_time);
    }
    menu();
}

void report() {
    cout << "Total income: " << income << " TL" << endl;
    menu();
}
};

int main() {
    car_park worker("Burhan", "4rs4liz");   
    string name, password;
    int i=0;
    cout << " CAR PARK PROGRAM: " << endl;
    while(1) {
        cout << "Enter user name : " << endl;
        cin >> name;
        cout << "Enter password : " << endl;
        cin >> password;
        if( name == worker.officer_id && password == worker.officer_password) {
            if(worker.officer_password == password) {
                cout << " Correct Password! " << endl;
                break;
            }
        }
        else {
            cout << "Invalid user name or password!" << endl;
            i++;
            if(i==3) {
                cout << "You entered wrong password 3 times!" << endl;
                break;
            }
        }
    }  
    worker.menu();
    return 0;
}