#include <iostream>
#include "ObjectCell.h"
using namespace std;

int main() {
    ObjectCell<int> m1;
    ObjectCell<double> m2(3.14);
    m1.setValue(37);
    m2.setValue(m2.getValue() * 2);

    cout << "m1 is " << m1.getValue() << endl;
    cout << "m2 is " << m2.getValue() << endl;

    return 0;
}