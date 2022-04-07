#include <iostream>
#include <thread>

using namespace std;

//Callable object - thread entry point
void hello(){
    cout << "Hello Thread!" << endl;
}

int main(){
    thread t{ hello };
    t.join();
}