#include <iostream>
using namespace std;

int main() {

    // Typecasting examples
    int a = 45;
    float b = 45.46;

    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;

    // Typecasting in expressions
    int x = 45;
    int y = 5;

    cout << "The value of x/y is " << x/y << endl;
    cout << "The value of x/y is " << (float)x/y << endl;

    // Float, Double and Long Double Literals
    float d = 34.4f;       // f → float literal
    long double e = 34.4l; // l → long double literal

    cout << "The size of 34.4 is " << sizeof(34.4) << endl;     // double by default
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;   // float
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;   // float
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;   // long double
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;   // long double

    return 0;
}
