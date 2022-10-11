#include <math.h>

#include <iomanip>
#include <iostream>
using namespace std;
// 1 > f(x1). f(x2) < 0
// 2 > xr = (x1 + x2)/2
// 3 > if f(x1)*f(xr) < 0 ; xr = x2
// if f(x1)*f(xr) > 0 ; xr = x1
// if f(x1)*f(xr) = 0 ; xr = xr
// 4 > if |f(x1)*f(xr) |< epsilon
void printOutMath(long double x) {  // referred to cubicSeq(x) formula
    cout << pow(x, 3) << " + " << pow(x, 2)
         << " - " << (3 * x) << " - "
         << "3" << endl;
}
void printOutComp(long double x, long double y) {  // referred to nonLinear(x,y) formula
    cout << "xr = "
         << x << " + " << y << endl
         << "     -------------" << endl
         << "           2" << endl;
}
long double nonLinear(long double x, long double y) {
    double solution;
    return solution = (x + y) / 2;
}
long double cubicSeq(long double x) {
    double solution;
    return solution = (pow(x, 3)) + (pow(x, 2)) - (3 * x) - 3;
}
int main(int argc, char const *argv[]) {
    system("cls");
    int i = 0;
    long double xr, x1 = 1, x2 = 2;
    // long double epsilon = 0.001;
    int start = 0;
    int phase = 12;
    // cin >> x1 >> x2;
    cubicSeq(x1), cubicSeq(x2);
    if (cubicSeq(x1) * cubicSeq(x2) >= 0) {
        return 0;
    }
    long double comparison;

    do {
        cubicSeq(x1);

        xr = nonLinear(x1, x2);

        // step1
        i++;
        cout << endl
             << "iteration " << i << endl
             << endl;
        cout << "f(x1) = ";
        printOutMath(x1);
        cout << "f(x1) = " << cubicSeq(x1) << endl
             << endl;
        cout << "f(x2) = ";
        printOutMath(x2);
        cout << "f(x2) = " << cubicSeq(x2) << endl
             << endl;

        // step2
        printOutComp(x1, x2);
        cout << "xr = " << nonLinear(x1, x2) << endl
             << endl;

        // step3
        cout << "f(x1) = " << cubicSeq(x1) << endl
             << "f(xr) = ";
        printOutMath(xr);
        cout << "f(" << xr << ") = " << setprecision(40) << cubicSeq(xr) << endl
             << endl;

        comparison = cubicSeq(x1) * cubicSeq(xr);
        // if (abs(comparison) < epsilon) {
        //     return -1;
        // }

        if (comparison < 0) {
            x2 = xr;
        } else if (comparison > 0) {
            x1 = xr;
        }

        cout << "|f(x1) * f(xr)| = " << setprecision(40) << abs(comparison) << endl
             << endl;
        if (comparison < 0) {
            cout << "x2 = xr" << endl;
        } else if (comparison > 0) {
            cout << "x1 = xr" << endl;
        }
        cout << "x1 = " << setprecision(100) << x1 << endl
             << "x2 = " << setprecision(100) << x2 << endl
             << endl;

    } while (/* (abs(comparison) >= epsilon && comparison != 0) &&  */ phase--);

    system("pause");
}
