#include <iostream>

using namespace std;

class person{
    public:
    string name;
    int age;


    person(string name, int age){
       this-> name = name;
       this-> age = age ;
    }

    person(){
        cout << "Parent constructor called" << endl;
    }

    ~person(){
        cout << "Parent destructor called" << endl;
    }
};

class student : public person{
    
    public:
    int roll = 20;
    student(){
        cout << "Child constructor called" << endl;
    }
    student(string name, int age, int roll) : person( name, age){
            this-> name = name;
            this-> age = age;
            this-> roll = roll;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
    }
    
    ~student(){
        cout << "Child Destructor called" << endl;
    }

};

int main() {

student s1;
s1.name = "Sadat";
s1.age = 20;
s1.roll = 2;

student s2("tyson",80,12);

s1.getInfo();
s2.getInfo();
    
    return 0;
}