#include<iostream>
#include<iomanip>
using namespace std;
void min_max(int* arr, int size, int* mi, int* ma) {
    *mi = arr[0];
    *ma = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < *mi) *mi = arr[i];
        if (arr[i] > *ma) *ma = arr[i];
    }
    cout << "min " << *mi << endl;
    cout << "max " << *ma << endl;
}
int main() {
    int t[] = { 2, 5, 1, 0, 7, 6, 9, 12 };
    int p;
    int d;
    min_max(t, 8, &p, &d);
    return 0;
}