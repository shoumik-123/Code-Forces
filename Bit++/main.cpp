#include <iostream>
using namespace std;

int main() {
    int n, X = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "x++" || s == "X++"){
            X++;
        }
        else if (s == "++x" || s == "++X"){
            ++X;
        }
        else if (s == "x--" || s == "X--"){
            X--;
        }
        else if (s == "--x" || s == "--X"){
            --X;
        }
    }
    cout << X;

    return 0;
}
