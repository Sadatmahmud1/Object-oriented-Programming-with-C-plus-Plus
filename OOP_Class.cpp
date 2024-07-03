#include <iostream>
#include <string>
using namespace std;

//  class
class teacher
{
    // Acces modifire
private:
    double  salary ;
    float pi = 3.1416;
    
    // Acces modifire
public:
 string name;
 string dept;
 int    id;
 string password;
 string email;
 float  radious = 200;

 float area = pi*radious;

 // Methods
 void changeDept(string newDept){
    dept = newDept;
 }

//setter function
 double setSalary(double s){
    salary = s;
 }

// geter finction
 double getSalary(){
  
  return salary;
 }

};


int main() {

// object of a class
teacher t1;
t1.name = "Rahim";
t1.dept = "CSE";
t1.id = 123456789;
t1.email = "sadatmahmud@gmail.com";
t1.password = "1234";
t1.setSalary(120000);
t1.changeDept("EEE");
cout<<t1.getSalary()<<endl;
cout<<t1.area;
    
    return 0;
}