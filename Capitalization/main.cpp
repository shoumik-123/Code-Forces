#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    char ch = s[0];
    int asciiValue = static_cast<int>(ch);

    if (asciiValue >= 97 && asciiValue <= 122){
        ch = static_cast<char>(asciiValue-32);
        s[0]=ch;
        cout << s;
    } else
        cout << s;
    return 0;
}
