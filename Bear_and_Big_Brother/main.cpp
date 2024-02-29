#include <iostream>
using namespace std;

int main() {
    int a ,b ,year;
    cin >> a >> b ;

    year = 0 ;


    if (a < b || a == b){
        label:
        if ( a > b){
            cout << year;
        }
        if (a < b || a == b){
            a = a * 3;
            b = b * 2;
            year++;
            goto label;
        }
    }


    return 0;
}
