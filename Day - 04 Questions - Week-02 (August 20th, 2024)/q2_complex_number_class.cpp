#include <iostream>
using namespace std;

class Complex {
    private:
    int real;
    int imag;
    public:
    Complex (int r, int i) {
        real = r;
        imag = i;
    }
    Complex () : real(0), imag(0) {}
    // Complex (int r = 0, int i = 0) {
    //     real = r;
    //     imag = i;
    // }
    // Complex (int r = 0, int i = 0) : real(r), imag(i) {}
    void display () {
        cout << real;
        if (imag >= 0) cout << " + " << imag << "i" << endl;
        else cout << " - " << imag*(-1) << "i" << endl;
    }
    
    Complex operator + (Complex other) {
        return Complex(real+other.real, imag+other.imag);
    }
    
    Complex operator - (Complex other) {
        return Complex(real-other.real, imag-other.imag);
    }
};

int main() {    
    Complex x(3, 4);
    Complex y(1, 2);
    // Complex z;
    // z = x+y;
    // z.display();
    cout << "Sum: ";
    Complex(x+y).display();
    cout << "Difference: ";
    Complex(x-y).display();

    return 0;
}
