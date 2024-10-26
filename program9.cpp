#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

class E : public C {
public:
    void showE() {
        cout << "Class E" << endl;
    }
};

int main() {
    D objD;
    E objE;
    objD.showA();
    objD.showB();
    objD.showD();
    objE.showA();
    objE.showC();
    objE.showE();
    return 0;
}
