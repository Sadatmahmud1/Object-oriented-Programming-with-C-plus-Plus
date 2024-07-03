#include <iostream>
using namespace std;
 class shape{ // abstruct class
    virtual void draw() = 0; // pure virtual function
};

class circle{
    public:
    void draw(){
        cout<<"circle"<<endl;
    }
};

int main() {

circle c1;
  c1.draw();
    
    return 0;
}