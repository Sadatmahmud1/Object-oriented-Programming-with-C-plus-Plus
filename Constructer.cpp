#include <iostream>

using namespace std;
class teacher
{
private:
    string name;
    int id;
    int password;
public:

    // Non paramitarised constructer
    teacher(){
        cout<<"teacher constructor"<<endl;
    }

    // copy constructer
    teacher( teacher &t){
        cout<<"copy constructer"<<endl;
           this-> name=t.name;
           this-> id=t.id;
           this-> password=t.password;
    }
    // paramitarised constructer
    teacher(string name, int id, int password){

    this->name = name;
    this->id = id;
    this->password = password;

    }

    void getinfo(){
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<password<<endl;
    }

};

int main() {
  teacher t1("sadat",1234, 8000);
  t1.getinfo();
  
  teacher t(t1); // defult copy constructer
  t.getinfo();   
    
    return 0;
}