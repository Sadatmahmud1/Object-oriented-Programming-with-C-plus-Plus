#include <iostream>

using namespace std;
class student
{
private:
  
public:
    string name;
    double* CGPA_ptr;
    
    // paramitarised constructer
    student(string name, double CGPA){
    this->name = name;
       CGPA_ptr = new double;
       *CGPA_ptr = CGPA;

    }


      // copy constructer
    student( student &obj){

        cout<<"I am copy constructer"<<endl;
           this-> name= obj.name;
            CGPA_ptr = new double;
           *CGPA_ptr= *obj.CGPA_ptr;
 
    }

    void getinfo(){
        cout<<name<<endl;
        cout<<*CGPA_ptr<<endl;
    }

};

int main() {
  student s1("sadat",9.8);
  
  
  student s2(s1); // defult copy constructer
  *(s2.CGPA_ptr) = 9.99;
  s2.getinfo();   
  s1.getinfo();
    
    return 0;
}