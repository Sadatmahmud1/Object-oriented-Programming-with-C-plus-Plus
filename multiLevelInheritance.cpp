#include <iostream>

using namespace std;

class person{
    public:
    string name;
    int age;


};

class student : public person{
    
    public:
    int roll;
    

};

class GraduateStudent : public student{
    public:
    string masters;
  
   void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
        cout << "Masters: " << masters << endl;
    }

};

int main() {

GraduateStudent s1;
s1.name = "Sadat";
s1.age = 20;
s1.roll = 2;
s1.masters = "Masters in Computer Science";

s1.getInfo();

    
    return 0;
}