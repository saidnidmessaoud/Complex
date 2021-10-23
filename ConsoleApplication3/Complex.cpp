#include "Complex.h"
#include <iostream>
#include<math.h>

using namespace std;
using namespace arith;

/*Complex Complex::init(double r, double im)
{
    this->re =r;
    this->img =im;
    return *this;
}*/

arith::Complex::Complex(double r, double im)
{
    this->re = r;
    this->img = im;
}

arith::Complex::Complex()
{
    this->re = 0;
    this->img = 0;
}

void arith::Complex::afficher()
{




    if (this->img > 0) {
        cout << this->re << "+" << this->img << "i";
    }



    else if (this->img == 0)
    {
        cout << this->re;



    }

    else {
        cout << this->re << "" << this->img << "i";
    }



}

double arith::Complex::module()
{
    double res;
    res= sqrt(pow (this->re , 2) + pow(this->img , 2));
    return res;
}

Complex arith::Complex::conjugue()
{
    Complex a;
    a.re = this->re;
    a.img = -(this->img);
    return a;
}

Complex arith::Complex::add(Complex a)
{
    Complex sum;
    sum.re = a.re + this->re;
    sum.img = a.img + this->img;
    return sum;
}

Complex arith::Complex::sub(Complex a)
{
    Complex sub;
    sub.re = a.re - this->re;
    sub.img = a.img - this->img;
    return sub;
}



Complex arith::Complex::pro(Complex a)
{
    Complex pro;
    pro.re = a.re * this->re - a.img * this->img;
    pro.img = a.re * this->img + a.img * this->re;
    return pro;
}

Complex arith::Complex::div(Complex a)
{
    Complex div;
    div.re = (a.re * this->re + a.img *this->img) /pow(this->re ,2) + pow(this->img, 2);
    div.img = -(a.re * this->img + a.img * this->re) / pow(this->re, 2) + pow(this->img, 2);
    return div;
}
