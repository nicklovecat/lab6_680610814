#include<iostream>
using namespace std;

int main(){
    int number;
    int evenCount = 0;
    int oddCount = 0;

    do {
        cout << "Enter an integer: ";
        cin >> number;

        if (number == 0) {
            break;
        }

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

    } while (true);

    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;

    return 0;
}