#include <iostream>
#include <vector>
#include "complex.h"

using std::cout;
using std::endl;
using std::vector;

int main()
{
    Complex c1(2, -3);
    Complex c2(4, 3);

    cout << c1.to_string_trig() << endl;

    Complex c3 = c1.add(c2);
    cout << "c1 + c2 = " << c3.to_string() << endl;

    c3 = c1.div(c2);
    cout << "c1 / c2 = " << c3.to_string_exp() << endl;

    cout << "c1.abs() = " << c1.abs() << endl;
    cout << "c2.arg() = " << c2.arg() << endl;

    Complex c4 = c2.sub(c1);
    cout << "c2.sub(c1) = " << c4.to_string() << endl;

    Complex c5 = c2.mult(c1);
    cout << "c2.mult(c1) = " << c5.to_string() << endl;

    cout << "c1 im = " << c1.get_im() << endl;
    cout << "c1 re = " << c1.get_re() << endl;

    c1.set_im(8);
    c1.set_re(5);

    cout << "new c1 im = " << c1.get_im() << endl;
    cout << "new c1 re = " << c1.get_re() << endl;
}
