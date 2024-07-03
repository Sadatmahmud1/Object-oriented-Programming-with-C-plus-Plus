#include <iostream>

using namespace std;

class Teacher{
    public:
    string subject;
    int  salary;


};

class student{
    
    public:
    string name;
    int roll;
    

};

class TA : public Teacher, public student{
    public:
    string id;
  
   void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Roll: " << roll << endl;
        cout << "Salary: " << salary << endl;
        cout << "ID: " << id << endl;
    }

};

int main() {

TA s1;
s1.name = "Sadat";
s1.salary = 20000;
s1.roll = 2;
s1.subject = "Masters in Computer Science";
s1.id = "1234567890";

s1.getInfo();

    
    return 0;
}