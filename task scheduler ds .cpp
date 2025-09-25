#include <iostream>
using namespace std;
class Node {
public:
string task_name;
int priority;
int exe_time;
Node* next;
Node(string tn, int p, int e) {
task_name = tn;
priority = p;
exe_time = e;
next = NULL;
}
void display() {
cout << "Task Name: " << task_name << endl;
cout << "Priority: " << priority << endl;
cout << "Execution Time: " << exe_time << endl;
}
};
int main() {
Node* header = NULL;
Node* prev = NULL;
Node* current = NULL;
Node* temp = NULL;
int n;
string tn;
int p;
int e;

cout << "How many tasks do you want to add: ";
cin >> n;
for (int i = 0; i < n; i++) {
cout << "Enter task name: ";
cin >> tn;
cout << "Enter task priority (higher number means higher priority): ";
cin >> p;
cout << "Enter execution time (in seconds): ";
cin >> e;
temp = new Node(tn, p, e);
if (header == NULL) {
header = temp;
} else {
if (header->priority < temp->priority) { // if new node has higher priority than header
temp->next = header;
header = temp;
} else {
prev = header;
current = prev->next;
while (current != NULL && current->priority >= temp->priority) {
prev = current;
current = current->next;
}
prev->next = temp;
temp->next = current;
}
}
}
cout << "\n-------------------------------------------\n" << endl;
cout << "The Priority List is as follows\n" << endl;
Node* t = header;
while (t != NULL) {
t->display();
t = t->next;
}
return 0;
