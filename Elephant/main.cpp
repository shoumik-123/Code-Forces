#include <iostream>
using namespace std;

int main() {
    int n, count;
    cin >> n ;
    count = n / 5;
    if (n % 5 != 0){
        n = n % 5;
        if (n == 1 || n == 2 || n == 3 || n == 4 ){
            count++;
        }
    }
    cout << count;
    return 0;
}
