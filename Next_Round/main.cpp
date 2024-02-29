#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int arr[a];
    int count = 0;

    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    if (arr[b - 1] <=0) {
        cout << count;
        return 0;
    }
    for (int i = 0; i < a; i++) {
        if (arr[i] >= arr[b - 1]) {
            count++;
        }
    }
    cout << count;
    return 0;
}
