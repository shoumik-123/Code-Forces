#include <iostream>
using namespace std;

int main() {
    int numbOfLoop;
    cin >> numbOfLoop;
    for(int i = 0 ; i< numbOfLoop ; i++){
        string inputValue;

        cin >> inputValue;

        int countChar = 0;
        if(inputValue.length() > 10){
            countChar = inputValue.length() - 2;
            cout << inputValue[0] << countChar << inputValue[inputValue.length()-1] << "\n";
        }
        else{
            cout << inputValue << "\n";
        }
    }
    return 0;
}