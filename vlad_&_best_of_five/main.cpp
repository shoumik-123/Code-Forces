#include <iostream>
using namespace std;

int main() {
    int numbOfLoop;
    cin >> numbOfLoop;
    for(int i = 0 ; i< numbOfLoop ; i++){
        string inputValue;

        cin >> inputValue;

        if(inputValue.length() == 5){
            int countA = 0;
            int countB = 0;

            for( int j = 0 ; j < inputValue.length() ; j++){
                if(inputValue[j] == 'A'){
                    countA = countA + 1;
                }
                if(inputValue[j] == 'B'){
                    countB = countB + 1;
                }
            }
            if(countA > countB){
                cout << "A" << "\n";
            }
            if(countB > countA){
                cout << "B" << "\n";
            }
        }
    }
    return 0;
}