#include <iostream>
using namespace std;

class Base {
protected:
    int a, b;
public:
    Base(int x, int y) : a(x), b(y) {}
};

class Derived1 : public Base {
public:
    Derived1(int x, int y) : Base(x, y) {}
    void displayA() {
        cout << "Value of a: " << a << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2(int x, int y) : Base(x, y) {}
    void displayB() {
        cout << "Value of b: " << b << endl;
    }
};

int main() {
    Derived1 obj1(3, 5);
    Derived2 obj2(3, 5);
    obj1.displayA();
    obj2.displayB();
    return 0;
}
