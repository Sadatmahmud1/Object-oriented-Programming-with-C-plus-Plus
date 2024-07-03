#include <iostream>
using namespace std;

    class Print{
        public:
        void show(int x){
            cout <<"Intger: "<< x << endl;
        }
        void show(char ch){
            cout <<"Char: "<< ch << endl;
        }


    };

int main() {

    Print p1;
    p1.show('e');
    
    return 0;
}