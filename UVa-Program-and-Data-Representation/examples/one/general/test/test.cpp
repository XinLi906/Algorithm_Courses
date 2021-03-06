#include "test.h"
using namespace std;

int test::idcount = 0;

test::test(): id(idcount++), value(0) {
    cout << "calling test(); object created is " << *this
         << "; address is " << this << endl;
}

test::test(int v): id(idcount++), value(v) {
    cout << "calling test(" << v << "); object created is " << *this
         << "; address is " << this << endl;
}

test::test(const test& x): id(x.id), value(x.value) {
    cout << "calling test(const test&) on " << *this
         << "; address is " << this << endl;
}

test::~test() {
    cout << "calling ~test() on " << *this << endl;
}

test& test::operator=(const test& other) {
    cout << "calling operator=(" << other << ")" << endl;
    test *tmp = new test(other);
    return *tmp;
}

ostream& operator<<(ostream& out, const test& f) {
    out << "test[id=" << f.id << ", v=" << f.value << "]";
}

