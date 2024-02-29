#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string s;
    cin >> s;
    istringstream iss(s);
    int count = 0;
    int number;
    char plus;
    int arr[]= {};
    while (iss >> number) {
        count++;
        if (!(iss >> plus)) {
            // If no '+' character was found, break the loop
            break;
        }
    }


    for (int i = 0; i < count; ++i) {
        iss >> arr[i];
        if (i < 4) {
            iss >> plus;
        }
    }
    cout<<arr;

    return 0;
}
