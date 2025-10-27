/*TITLE: Array operations (with Template library) 
PROBLEM STATEMENT: Design a program with a template for sorting the 
accepted array and displaying it using integer or float type data Implement any sorting type using Generic Programming.*/
#include <iostream> 
using namespace std; 
template <typename T> 
void sortArray(T arr[], int size) { 
for (int i = 0; i < size - 1; i++) { 
int minIndex = i; 
// Find the index of the minimum element 
for (int j = i + 1; j < size; j++) { 
if (arr[j] < arr[minIndex]) { 
minIndex = j; 
} 
} 
// Swap the found minimum with the first unsorted element 
if (minIndex != i) { 
T temp = arr[i]; 
arr[i] = arr[minIndex]; 
arr[minIndex] = temp; 
} 
} 
} 
template <typename T> 
void displayArray(T arr[], int size) { 
for (int i = 0; i < size; i++) { 
cout << arr[i] << " "; 
} 
cout << endl; 
} 
int main() { 
int choice; 
int size; 
cout << "Choose data type:\n"; 
cout << "1. Integer\n"; 
cout << "2. Float\n"; 
cout << "Enter choice (1 or 2): "; 
cin >> choice; 
cout << "Enter the number of elements: "; 
cin >> size; 
if (choice == 1) { 
int* arr = new int[size]; 
cout << "Enter " << size << " integer elements:\n"; 
for (int i = 0; i < size; i++) { 
cin >> arr[i]; 
} 
cout << "\nOriginal Integer Array: "; 
displayArray(arr, size); 
sortArray(arr, size); 
cout << "Sorted Integer Array: "; 
displayArray(arr, size); 
delete[] arr; 
} 
else if (choice == 2) { 
float* arr = new float[size]; 
cout << "Enter " << size << " float elements:\n"; 
for (int i = 0; i < size; i++) { 
cin >> arr[i]; 
} 
cout << "\nOriginal Float Array: "; 
displayArray(arr, size); 
sortArray(arr, size); 
cout << "Sorted Float Array: "; 
displayArray(arr, size); 
delete[] arr; 
} 
else { 
cout << "Invalid choice! Please run the program again.\n"; 
} 
return 0; 
}
