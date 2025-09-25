/*Designing of Complex Number calculator 
Implement a class Complex which represents the Complex Number. Implement the following functions Using Operator Overloading: 
1. Constructors ( Include all constructor types) 2. Overload operator + to add two complex numbers using member function 
3. Overload operator * to multiply two complex numbers using friend function 
4. Overload operators << and >> to output and accept Complex Numbers*/
#include<iostream>
using namespace std;
class complex {
private: 
    float real;
    float imj;
public:
    complex() : real(0.0f), imj(0.0f) {
      }
   complex(float a, float b) : real(a), imj(b) {
        count++; 
    }
    complex(const complex& other) : real(other.real), imj(other.imj) {
        count++;
    }
    static int count;
    complex operator +(const complex& num) const;
   friend complex operator *(const complex& num1, const complex& num2);
   friend istream &operator>>(istream &inp, complex &ob);
    friend ostream &operator<<(ostream &out, const complex &ob);
};
int complex::count = 0;
complex operator *(const complex& num1, const complex& num2) {
    float r = (num1.real * num2.real) - (num1.imj * num2.imj);
    float i = (num1.real * num2.imj) + (num1.imj * num2.real);
    return complex(r, i);
}
complex complex::operator +(const complex& num) const {
    return complex(real + num.real, imj + num.imj);
}
istream &operator>>(istream &inp, complex &ob) {
    cout << "Enter real part: ";
    inp >> ob.real;
    cout << "Enter imaginary part: ";
    inp >> ob.imj;
    return inp;
}
ostream &operator<<(ostream &out, const complex &ob) {
   out << ob.real;
    if (ob.imj >= 0) {
        out << " + i" << ob.imj;
    } else {
        out << " - i" << -ob.imj; 
    }
    out << endl;
    return out;
}
int main() {
     complex n1; 
     cout << "--- Complex Number Operations ---\n";
     cout << "\nInput for Complex Number 1:\n";
    cin >> n1; 
     complex n2; 
    cout << "\nInput for Complex Number 2:\n";
    cin >> n2;
   complex n3, n4;
   cout << "\nComplex Number 1 (N1): " << n1;
    cout << "Complex Number 2 (N2): " << n2;
    cout << "\n--- Addition ---\n";
    n3 = n1 + n2;
    cout << "N1 + N2 = " << n3;
    cout << "\n--- Multiplication ---\n";
    n4 = n1 * n2;
    cout << "N1 * N2 = " << n4;
    cout << "\nTotal Complex Objects Created: " << complex::count << endl;
   return 0;
}

