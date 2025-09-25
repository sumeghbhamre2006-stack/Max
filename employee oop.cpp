#include <iostream>
using namespace std;

class Employee {

    string fullName;
    string empID;
    string department;
    string joiningDate;
    string address;
    int phoneNumber;

public:

    inline void welcome() {
        cout << "\n------Welcome to the Employee Information System------\n";
    }

    Employee(string name, string id, string dept, string doj, string addr, int phone);
    Employee(Employee &emp);
    Employee();
    ~Employee();

    static int totalCount;

    void display();
};

int Employee::totalCount = 0;

Employee::Employee(string name, string id, string dept, string doj, string addr, int phone) {
    totalCount++;
    cout << "\nThis is Parameterized Constructor" << endl;
    fullName = name;
    empID = id;
    department = dept;
    joiningDate = doj;
    address = addr;
    phoneNumber = phone;
}

Employee::Employee() {
    totalCount++;
    cout << "\nThis is Default Constructor" << endl;
    fullName = "Swapnil";
    empID = "0001";
    department = "sales";
    joiningDate = "N/A";
    address = "latur";
    phoneNumber = 0;
}

Employee::Employee(Employee &emp) {
    totalCount++;
    cout << "\nThis is Copy Constructor" << endl;
    fullName = emp.fullName;
    empID = emp.empID;
    department = emp.department;
    joiningDate = emp.joiningDate;
    address = emp.address;
    phoneNumber = emp.phoneNumber;
}

Employee::~Employee() {
    cout << "\nDetails of Employee " << totalCount << " Destroyed!!" << endl;
    totalCount--;
}

void Employee::display() {
    cout << "\nName: " << fullName;
    cout << "\nEmployee ID: " << empID;
    cout << "\nDepartment: " << department;
    cout << "\nDate of Joining: " << joiningDate;
    cout << "\nAddress: " << address;
    cout << "\nPhone Number: " << phoneNumber;
    cout << "\nNo. of Employees is: " << totalCount << endl;
}

int main() {
    string name;
    string id;
    string dept;
    string doj;
    string addr;
    int phone;

    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter the Department of Employee: ";
    cin >> dept;
    cout << "Enter Employee's Date of Joining: ";
    cin >> doj;
    cout << "Enter Employee's Address: ";
    cin >> addr;
    cout << "Enter Employee's Phone Number: ";
    cin >> phone;

    Employee emp1(name, id, dept, doj, addr, phone);
    emp1.welcome();
    emp1.display();

    Employee emp2;
    emp2.welcome();
    emp2.display();

    Employee emp3(emp1);
    emp3.welcome();
    emp3.display();

    Employee *emp4 = new Employee;
    emp4->welcome();
    emp4->display();

