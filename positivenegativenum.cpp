#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num > 0) {
        cout << num << " is a positive number." << endl;
    } else if(num < 0) {
        cout << num << " is a negative number." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    return 0;
}
/*OUTPUT
Enter a number: 149
149 is a positive number. */
