#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>

using namespace std;


bool isEven (int n){
    return (n % 2 == 0);
}

void func(int*& ptrArg){
    *ptrArg *= 2;
    int var = *ptrArg;
    cout << "This is var: " << (var *= 2) << endl;

}

void arrPractice (){
    int arr[5] = {10, 3, -3, 33, 4};

    for(int* i = arr; i < arr + std::size(arr); i++)
        cout << *i << " debug" << endl;
}

int main() {
    vector<int> v{4, 2, 3, 5, 1};
    
    cout << "Elements of vector: ";
    
    for(auto i : v)
        cout << i << ", ";
    cout << endl;

    // auto nEven = count_if(v.begin(), v.end(), isEven);  //Without lambda
    auto nEven = count_if(v.begin(), v.end(), 
        [] (int n) {    //This is a one liner lambda function; if 2 or more, then: [] (int n) -> int {...; return (integer variable);}
            return (n % 2 == 0);
        });

    // auto x{47};
    // auto y = [&x](){
    //      return x * 2;
    //     };
    // auto ptr{&x};
    // int ** ptrToPtr = &ptr;
    // int *** ptrtoptrtoptr = &ptrToPtr;
    // cout << ***ptrtoptrtoptr << endl;
    // cout << "Value of ptr without ampersand: " << ptr << "\nValue of ptr with ampersand(address): " << &ptr << " " << ptrToPtr << " " << &ptrToPtr << " " << *ptrToPtr << " " << **ptrToPtr << endl;
    // func(ptr);
    // cout << *ptr << endl;


    // cout << (y() > 200) << " " << x << endl;
    // cout << "There are " << nEven << " even numbers in the v vector" << endl;

    arrPractice();
}