#include <iostream>
using namespace std;

class SumNatural {
public:
    SumNatural() {
        int n, sum = 0;
        cout << "Enter the value of n: ";
        cin >> n;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    SumNatural obj;
    return 0;
}
