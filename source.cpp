#include <iostream>
#include <string>
#include <vector>

using namespace std;


void func(int i){
    cout << "func(int) called \n";
}

void func(int *i){
    cout << "func(int *) called\n";
}

int main() {
    int x{7}; //Equivalent to int x = 7;
    string s{"Let us begin"}; //Equivalent to string s("Let us begin");
    cout << "x = " << x << endl;
    cout << "s = \"" << x << "\"" << endl;

    vector<int> v{4, 2, 3, 5, 1};
    string hello{'H', 'e', 'l', 'l', 'o'};

    for(auto& it : v)
        it += 2;

    cout << "v= ";
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << ", ";

    cout << endl << "hello = \""<< hello << "\"" << endl;

    // func(NULL);
    // func(nullptr);
}