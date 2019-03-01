#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

    float a[20];
    float (&r) [20] = a;

    cout << "Value of a is: " << a << endl;
    cout << "Logical address of a is: " << &a << endl;
    cout << "Value of reference is: " << r << endl;

    cout << endl;
    system("pause");
    return 0;
}