#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, b, c, y;

    cout << "Enter x, b, c: ";
    cin >> x >> b >> c;

    if (x < 2.0) {
        double num = x - 9.0 * b * x;
        double den = x - 2.0 * b * pow(x, 2);

        if (den == 0.0) {
            cout << "Error: division by zero!" << endl;
            return 1;
        }
        y = num / den;
    } else {
        double num = x - 2.0 * c * x;
        double den = x - 5.0 * c * pow(x, 3);

        if (den == 0.0) {
            cout << "Error: division by zero!" << endl;
            return 1;
        }
        y = num / den;
    }

    cout << "Y = " << y << endl;
    return 0;
}
