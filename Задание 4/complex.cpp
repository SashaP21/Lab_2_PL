#include <cmath>
#include <string>
#include <sstream>
#include "complex.h"

using std::string;
using std::stringstream;

Complex::Complex() {
    re = 0;
    im = 0;
}

Complex::Complex(double x, double y) {
    this->re = x;
    this->im = y;
}

void Complex::set_re(double re) {
    this->re = re;
}

void Complex::set_im(double im) {
    this->im = im;
}

double Complex::get_re() {
    return re;
}

double Complex::get_im() {
    return im;
}

double Complex::abs() {
    return sqrt(re * re + im * im);
}

double Complex::arg() {
    if (re > 0 && im > 0 || re > 0 && im < 0)
        return atan(im / re);
    else if (re < 0 && im > 0)
        return atan(im / re) + M_PI;
    else if (re < 0 && im < 0)
        return atan(im / re) - M_PI;
    else if (re == 0 && im > 0)
        return M_PI / 2;
    else if (re == 0 && im < 0)
        return M_PI / -2;
    else if (re > 0 && im == 0 || re == 0 && im == 0)
        return 0;
    else
        return M_PI;
}

string Complex::to_string() {
    stringstream ss;
    ss << re;

    if (im != 0)
        ss << ((im > 0) ? " + " : " - ") << "i * " << fabs(im);

    return ss.str();
}

string Complex::to_string_trig() {
    stringstream ss;

    double phi = arg();

    ss << "cos(" << phi << ")" << " + i*sin(" << phi << ")";

    return ss.str();
}

string Complex::to_string_exp() {
    stringstream ss;

    double phi = arg();
    double ro = abs();

    ss << ro << "*e^" << ((phi > 0) ? "i*" : "-i*") << phi;

    return ss.str();
}

Complex Complex::add(Complex z) {
    Complex res(re + z.get_re(), im + z.get_im());

    return res;
}

Complex Complex::sub(Complex z) {
    Complex res(re - z.get_re(), im + z.get_im());

    return res;
}

Complex Complex::mult(Complex z) {
    Complex res {
        re * z.re - im * z.im,
        re * z.im + im * z.re
    };

    return res;
}

Complex Complex::div(Complex z) {
    Complex res {
        (re * z.re + im * z.im) / (z.re * z.re + z.im * z.im),
        (-re * z.im + im * z.re) / (z.re * z.re + z.im * z.im)
    };

    return res;
}
