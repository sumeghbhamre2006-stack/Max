/*PROBLEM STATEMENT: 
Parenthesis Checker: 
Write a program using a stack for push, pop, peek, and isEmpty operations. Write isBalanced() Function that Iterates through the input expression, Pushes opening brackets onto the stack. For closing brackets, it checks the top of the stack for a matching opening bracket. Ensures that all opening brackets are matched by the end of the traversal. Main Function: Accepts a string expression from the user. Uses isBalanced() to determine if the parentheses in the expression are balanced.
*/
#include <iostream> 
using namespace std; 
class Checker { 
char stack[100]; 
int top; 
int N; 
public: 
Checker() { 
top = -1; 
N = 100; 
} 
int isEmpty() { 
if (top == -1) 
return 1; 
else 
return 0; 
} 
int isFull() { 
if (top == N - 1) 
return 1; 
else 
return 0; 
} 
void push(char ch) { 
if (isFull()) 
cout << "Stack overflow\n"; 
else { 
top++; 
stack[top] = ch; 
} 
} 
char pop() { 
if (isEmpty()) { 
cout << "Stack underflow\n"; 
return '\0'; 
} else { 
char temp = stack[top]; 
top--; 
return temp; 
} 
} 
char peek() { 
if (isEmpty()) 
return '\0'; 
else 
return stack[top]; 
} 
int isBalanced(string exp) { 
for (int i = 0; i < exp.length(); i++) { 
char ch = exp[i]; 
if (ch == '(' || ch == '{' || ch == '[') 
push(ch); 
else if (ch == ')' || ch == '}' || ch == ']') { 
if (isEmpty()) 
return 0; 
char t = peek(); 
if ((ch == ')' && t == '(') || (ch == '}' && t == '{') || (ch == ']' && t == '[')) 
pop(); 
else 
return 0; 
} 
} 
if (isEmpty()) 
return 1; 
else 
return 0; 
} 
}; 
int main() { 
cout<<"B24CE1081\n"; 
Checker c; 
string expr; 
cout << "Enter an expression: "; 
cin >> expr; 
if (c.isBalanced(expr)) 
cout << "Expression is Balanced" << endl; 
else 
cout << "Expression is NOT Balanced" << endl; 
return 0; 
} 
