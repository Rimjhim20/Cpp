// Operator overloading
// • Operators can be overloaded on our classes
// • We can define operator for our own classes
// • Operators can be overloaded using member functions or friend functions
// • Global functions can also access private and protected members of an object if they are
//                                                                  declared as friend inside a class

//                                                              class Complex
// {
// private:
//     int real;
//     int img;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         img = i;
//     }
//     void display()
//     {
//         cout << real <<“+ i”<< img << endl;
//     }
//     Complex operator+(Complex c)
//     {
//         Complex temp;
//         temp.real = real + c1.real;
//         temp.img = img + c1.img;
//         return temp;
//     }
// };
// int main()
// {
//     Complex c1(5, 3), c2(10, 5), c3;
//     c3 = c1 + c2;
//     c3.display();
// }

// Operator Overloading using Friend Functions
// #include <iostream>
//     using namespace std;
// class Complex
// {
// private:
//     int real;
//     int img;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         img = i;
//     }
//     void display()
//     {
//         cout << real <<“+ i”<< img << endl;
//     }
//     friend Complex operator+(Complex c1, Complex c2);
// };
// Complex operator+(Complex c1, Complex c2)
// {
//     Complex temp;
//     temp.real = c1.real + c2.real;
//     temp.img = c1.img + c2.img;
//     return temp;
// }
// int main()
// {
//     Complex c1(5, 3), c2(10, 5), c3;
//     c3 = c1 + c2;
//     c3.display();
// }

// Stream operator overloading
//     Input stream cin>>(extraction)
//     operator can be overloaded upon a class
//     output stream cout <<(insertion)
//     operator can be overloaded upon a class
// #include <iostream>
//     using namespace std;
// class Complex
// {
// private:
//     int real;
//     int img;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         img = i;
//     }
//     friend ostream &operator<<(ostream &out, Complex &c);
// };
// ostream &operator<<(ostream &out, Complex &c)
// {
//     out << c.real << "+i" << c.img << endl;
//     return out;
// }
// int main()
// {
//     Complex c(10, 5);
//     cout << c << endl;
//     operator<<(cout, c);
// }

// Program with a Class Rational Number

// #include <iostream>
//     using namespace std;
// class Rational
// {
// private:
//     int p;
//     int q;

// public:
//     Rational()
//     {
//         p = 1;
//         q = 1;
//     }
//     Rational(int p, int q)
//     {
//         this->p = p;
//         this->q = q;
//     }
//     Rational(Rational &r)
//     {
//         this->p = r.p;
//         this->q = r.q;
//     }
//     int getP() { return p; }
//     int getQ() { return q; }
//     void setP(int p)
//     {
//         this->p = p;
//     }
//     void setQ(int q)
//     {
//         this->q = q;
//     }
//     Rational operator+(Rational r)
//     {
//         Rational t;
//         t.p = this->p * r.q + this->q * r.p;
//         t.q = this->q * r.q;
//         return t;
//     }
//     friend ostream &operator<<(ostream &os, Rational &r);
// };

// ostream &operator<<(ostream &os, Rational &r)
// {
//     os << r.p << "/" << r.q;
//     return os;
// }
// int main()
// {
//     Rational r1(3, 4), r2(2, 5), r3;
//     r3 = r1 + r2;
//     cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;
// }