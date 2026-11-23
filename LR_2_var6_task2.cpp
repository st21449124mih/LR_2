#include <iostream>

using namespace std;

int main() {
    double x, y;

    cout << "Enter x and y: ";
    cin >> x >> y;

    if (x >= 0.0 && x <= 2.0 && y >= 0.0 && y <= 1.0) {
        cout << "Point is inside the shaded area." << endl;
    } else {
        cout << "Point is outside the shaded area." << endl;
    }

    return 0;
}
