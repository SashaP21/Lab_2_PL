#ifndef _4_COMPLEX_H
#define _4_COMPLEX_H

#include <string>

class Complex {
    double re;
    double im;
public:
    Complex();
    Complex(double x, double y);
    void set_re(double re);
    void set_im(double im);
    double get_re();
    double get_im();
    double abs();
    double arg();
    std::string to_string();
    std::string to_string_trig();
    std::string to_string_exp();
    Complex add(Complex z);
    Complex sub(Complex z);
    Complex mult(Complex z);
    Complex div(Complex z);
};

#endif //_4_COMPLEX_H