#include <iostream>
using namespace std;

class A {
    public:
    A() { cout << "constructer called" << endl; }
    ~A() { cout << "distructer called" << endl; }
};



int main() {
   if(true){
    static A a;
   }
   cout<<"main function called\n";
    return 0;
}
