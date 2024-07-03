#include <iostream>
using namespace std;

    class Parents{
        public:
        void printName(){
            cout << "Parents" << endl;
        }
        
        virtual void Parent()
        {
            cout << " virtual Parent" << endl;
        }

    };

    class student : public Parents{
        public:
        void printName(){
            cout << "student" << endl;
            }

            void Parent()
        {
            cout << " virtual Parent" << endl;
        }
    };

int main() {

        student s1;
        s1.printName();
        s1.Parent();

        Parents p1;
        p1.printName();
    
    return 0;
}