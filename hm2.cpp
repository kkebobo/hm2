#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    if (a == 0.0)
        if (b == 0.0)
            cout << "infinitely many solutions";
        else
            cout << "no solutions";
    else
        cout << -b / a;
}
