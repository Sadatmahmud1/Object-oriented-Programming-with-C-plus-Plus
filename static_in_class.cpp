#include <iostream>
using namespace std;

class A {
    public:
        static int x; // Static variable declaration
        int y;

        void fun() {
            cout << "Value of x static" << endl;
            cout << "x : " << x << endl;
        }

        void fun2() {
            cout << "Value of y non static" << endl;
            cout << "y : " << y << endl;
        }
};

// Definition of static variable
int A::x = 0;

int main() {
    A obj;
    A obj1;
    obj.x = 100;
    obj1.x = 300;
    obj.y = 50;
    obj1.y = 70;
    obj.fun();
    obj1.fun();

    obj.fun2();
    obj1.fun2();
    return 0;
}
