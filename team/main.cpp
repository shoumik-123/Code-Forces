#include <iostream>
using namespace std;

int main() {
    int numbOfLoop , countNumb = 0 , firstIn , secondIn , thirdIn;
    cin >> numbOfLoop;
    for(int i = 0 ; i< numbOfLoop ; i++){
        cin >> firstIn >> secondIn >> thirdIn ;
        if((firstIn == 0 || firstIn == 1 ) && (secondIn == 0 || secondIn == 1) && (thirdIn == 0 || thirdIn == 1 )){
            if((firstIn == 1 && secondIn ==1) || (firstIn == 1 && thirdIn == 1) || (secondIn ==1 && thirdIn == 1)){
                countNumb = countNumb +1;
            }
        }
    }
    cout << countNumb;
    return 0;
}