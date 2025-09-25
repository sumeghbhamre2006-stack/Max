/*Educational Institution System 
Design an educational Institution that maintains a database of all staff members where the database is segregated into a number of
classes having hierarchical relationships. Define all classes with suitable data members and required member functions to build the 
database and fetch individual details . */

#include <iostream>
using namespace std;

class Staff {
protected:
    string staffName, department;
    int staffID;
public:
    void acceptDetails();
    void displayDetails();
};

void Staff::acceptDetails() {
    cout << "Enter Name of staff: ";
    cin >> staffName;
    cout << "Enter Department of staff: ";
    cin >> department;
    cout << "Enter the ID of staff: ";
    cin >> staffID;
}

void Staff::displayDetails() {
    cout << "\tDetails of " << staffName << "\n";
    cout << "Name of staff: " << staffName << "\n";
    cout << "Department of staff: " << department << "\n";
    cout << "ID of staff: " << staffID << "\n";
}

class Teacher : protected Staff {
    string subject;
    int experienceYears;
public:
    void acceptDetails();
    void displayDetails();
};

void Teacher::acceptDetails() {
    Staff::acceptDetails();
    cout << "Enter Subject of teacher " << staffName << ": ";
    cin >> subject;
    cout << "Enter Experience of teacher " << staffName << " in years: ";
    cin >> experienceYears;
}

void Teacher::displayDetails() {
    Staff::displayDetails();
    cout << "Subject of teacher: " << subject << "\n";
    cout << "Experience of teacher: " << experienceYears << " years\n";
}

class HelpStaff : protected Staff {
    string designation;
    int age;
public:
    void acceptDetails();
    void displayDetails();
};

void HelpStaff::acceptDetails() {
    Staff::acceptDetails();
    cout << "Enter Designation of " << staffName << ": ";
    cin >> designation;
    cout << "Enter Age of " << staffName << ": ";
    cin >> age;
}

void HelpStaff::displayDetails() {
    Staff::displayDetails();
    cout << "Designation of staff: " << designation << "\n";
    cout << "Age of staff: " << age << " years\n";
}

int main() {
    int numTeachers, numHelpStaff;
    cout << "Enter number of teaching staff: ";
    cin >> numTeachers;
    Teacher teachers[numTeachers];

    for (int i = 0; i < numTeachers; i++) {
        teachers[i].acceptDetails();
    }

    cout << "Enter number of helping staff: ";
    cin >> numHelpStaff;
    HelpStaff helpStaff[numHelpStaff];

    for (int i = 0; i < numHelpStaff; i++) {
        helpStaff[i].acceptDetails();
    }

    cout << "Details of teaching staff are:\n";
    for (int i = 0; i < numTeachers; i++) {
        teachers[i].displayDetails();
    }

    cout << "Details of supporting staff are:\n";
    for (int i = 0; i < numHelpStaff; i++) {
        helpStaff[i].displayDetails();
    }

    return 0;
}
