#include <math.h>

#include <iostream>
using namespace std;

// 1 > f(x) = x^3 + x^2 - 3x - 3
// 2 > xr = (x1 + x2)/2
// 3 > if f(x1)*f(xr) < 0 ; xr = x2
// if f(x1)*f(xr) > 0 ; xr = x1
// if f(x1)*f(xr) = 0 ; xr = terminated
void printOutMath(double x) {
    cout << "f(x) = " << pow(x, 3) << " + " << pow(x, 2)
         << " - " << (3 * x) << " - "
         << "3" << endl
         << endl;
}
void printOutComp(double x, double y) {
    cout << "xr = "
         << x << " + " << y << endl
         << "     -------------" << endl
         << "           2" << endl
         << "xr = ";
}
double nonLinear(double x, double y) {
    double solution;
    return solution = (x + y) / 2;
}
double cubicSeq(double x) {
    double solution;
    return solution = (pow(x, 3)) + (pow(x, 2)) - (3 * x) - 3;
}
int main(int argc, char const *argv[]) {
    double xr, x1, x2;
    cin >> x1 >> x2;
    int n = 19;
    for (int i = 0; i < n; i++) {
    }

    for (int i = 0; i < n; i++) {
        cubicSeq(x1);
        xr = nonLinear(x1, x2);
        double comparison = cubicSeq(xr) * cubicSeq(x1);
        if (comparison < 0) {
            x2 = xr;
        } else if (comparison > 0) {
            x1 = xr;
        } else {
            break;
        }
        // cout << "phase " << i + 1 << ". "
        //      << "xr = " << xr << "; f(xr) = "
        //      << cubicSeq(xr) << endl;
        cout << i + 1 << endl;
        printOutMath(xr);
        cout << "fx) = " << cubicSeq(xr) << endl
             << endl;
        printOutComp(x1, x2);
        cout << nonLinear(x1, x2) << endl;
    }

    system("pause");
}
