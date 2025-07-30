#include<iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    if(x > 0 && y > 0) {
        cout << "Point (" << x << ", " << y << ") is in Quadrant I." << endl;
    } else if(x < 0 && y > 0) {
        cout << "Point (" << x << ", " << y << ") is in Quadrant II." << endl;
    } else if(x < 0 && y < 0) {
        cout << "Point (" << x << ", " << y << ") is in Quadrant III." << endl;
    } else if(x > 0 && y < 0) {
        cout << "Point (" << x << ", " << y << ") is in Quadrant IV." << endl;
    } else if(x == 0 && y == 0) {
        cout << "Point is at the origin." << endl;
    } else if(x == 0) {
        cout << "Point lies on the Y axis." << endl;
    } else if(y == 0) {
        cout << "Point lies on the X axis." << endl;
    }
    return 0;
}
/*OUTPUT
Enter x coordinate: 04
Enter y coordinate: -11
Point (4, -11) is in Quadrant IV. */
