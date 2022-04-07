#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;

class test {
    private:
        test(const test&){  //Copy constructor
            cout << "Copy constructor is accessed" << endl; 
        } 
        test& operator=(const test&){   //Copy assignment operator
            cout << "Copy assignment operator" << endl;
        }
        
    public:
        test(){
            cout << "Default constructor" << endl;
        }

};

int main() {
    test t1, t2;
    t1 = t2;
}