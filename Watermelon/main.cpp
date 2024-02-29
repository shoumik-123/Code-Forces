#include <iostream>
using namespace std;

int main(){

    int numb;
    cin >> numb;
    if(numb <= 2){
        cout << "No";
    }
    else if(numb % 2 == 0 && (((numb / 2) % 2 == 0) || ((numb / 2 -1 ) % 2 == 0))){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}