#include <iostream>
#include <cmath>

using namespace std;

class Complex {
public:
    Complex(double re = 0, double im = 0) : re_(re), im_(im) {}

    double re() const { return re_; }
    double im() const { return im_; }

    void set_re(double re) { re_ = re; }
    void set_im(double im) { im_ = im; }

    void print() const {
        cout << re_ << (im_ < 0 ? "" : "+") << im_ << "i\n";
    }

    Complex add(const Complex& other) const {
        return Complex(re_ + other.re_, im_ + other.im_);
    }

    Complex add(double real) const {
        return Complex(re_ + real, im_);
    }

private:
    double re_, im_;
};

int main() {
    Complex a(1.0, -2.0);
    Complex b(3.14);

    b.set_im(-5);

    Complex c = a.add(b);

    c.print();

    Complex d = a.add(2.5);

    d.print();

    return 0;
}
