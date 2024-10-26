#include <iostream>
using namespace std;

class SwapNumbers {
    int a, b;
public:
    SwapNumbers(int x, int y) : a(x), b(y) {
        cout << "Before swap: a = " << a << ", b = " << b << endl;
        int temp = a;
        a = b;
        b = temp;
        cout << "After swap: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    SwapNumbers obj(x, y);
    return 0;
}
