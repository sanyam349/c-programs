#include <iostream>
using namespace std;

class SumArray {
    int *arr, size;
public:
    SumArray(int *a, int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = a[i];
        }
    }
    
    SumArray(const SumArray &obj) {
        int sum = 0;
        for (int i = 0; i < obj.size; i++) {
            if (obj.arr[i] > 0) sum += obj.arr[i];
        }
        cout << "Sum of positive numbers: " << sum << endl;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    SumArray obj1(arr, n);
    SumArray obj2 = obj1;
    return 0;
}
