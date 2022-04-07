#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <random>

using namespace std;

class test {
    public:
        test(const test&) = delete;
        test& operator=(const test&) = delete;
        test(test&&) noexcept = default;
        test& operator=(test&&) noexcept = default;


        test() = default;
};

int main() {
    test t1, t2;
    test t4(std::move(t2));
    t2 = (std::move(t4));
}