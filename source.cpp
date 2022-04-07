#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <random>

using namespace std;

int main() {
    mt19937 mt;     //Create random number engine instance

    cout << "10 random integers between 0 and 100:" << endl;
    uniform_int_distribution<int> uid(0,100);       //We want ints in the range 0 to 100

    for (int i = 0; i < 10; i++){
        cout << uid(mt) << ", ";        //Get the next random number
    }
}