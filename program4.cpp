#include <iostream>
using namespace std;

class SumValues {
public:
    SumValues(int a, int b) {
        cout << "Sum of integers: " << a + b << endl;
    }
    SumValues(float a, float b) {
        cout << "Sum of floats: " << a + b << endl;
    }
    SumValues(char a, char b) {
        cout << "Sum of chars (ASCII values): " << (int)a + (int)b << endl;
    }
};

int main() {
    SumValues obj1(5, 10);
    SumValues obj2(3.5f, 2.5f);
    SumValues obj3('A', 'B');
    return 0;
}
