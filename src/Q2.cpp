#include <iostream>
#include <cstdlib>

using namespace std;

int main () {

    char a[10];

    cout << "Array value of a is: " << a << endl;
    cout << "Logical address of a is: " << &a << endl;
    cout << "Value of pointer of a is: " << (void*) &a[1] << endl;

    cout << endl;
    system("pause");
    return 0;
}