// Inheritance
// • It is a process of acquiring features of an existing class into a new class
// • It is used for achieving reusability
// • features of base class will be available in derived class
// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//     int a;
//     void display()
//     {
//         cout << "Display of Base " << a << endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     void show()
//     {
//         cout << "Show of Derived" << endl;
//     }
// };
// int main()
// {
//     Derived d;
//     d.a = 100;
//     d.display();
//     d.show();
// }

// Example of inheritance class Rectangle
// {
// private:
//     int length;
//     int breadth;

// public:
//     Rectangle();
//     Rectangle(int l, int b);
//     Rectangle(Rectangle &r);
//     int getLength() { return length; }
//     int getBreadth() { return breadth; }
//     void setLength(int l);
//     void setBreadth(int b);
//     int area();
//     int perimeter();
//     bool isSquare();
//     ~Rectangle();
// };
// class Cuboid : public Rectangle
// {
// private:
//     int height;

// public:
//     Cuboid(int h)
//     {
//         height = h;
//     }
//     int getHeight() { return height; }
//     void setHeight(int h) { height = h; }
//     int volume() { return getLength() * getBreadth() * height; }
// };
// int main()
// {
//     Cuboid c(5);
//     c.setLength(10);
//     c.setBreadth(7);
//     cout << "Volume is " << c.volume() << endl;
// }
// Rectangle::Rectangle()
// {
//     length = 1;
//     breadth = 1;
// }
// Rectangle::Rectangle(int l, int b)
// {
//     length = l;
//     breadth = b;
// }
// Rectangle::Rectangle(Rectangle &r)
// {
//     length = r.length;
//     breadth = r.breadth;
// }
// void Rectangle::setLength(int l)
// {
//     length = l;
// }
// void Rectangle::setBreadth(int b)
// {
//     breadth = b;
// }
// int Rectangle::area()
// {
//     return length * breadth;
// }
// int Rectangle::perimeter()
// {
//     return 2 * (length + breadth);
// }
// bool Rectangle::isSquare()
// {
//     return length == breadth;
// }
// Rectangle::~Rectangle()
// {
//     // cout<<"Rectangle Destroyed";
// }

// Constructors in inheritance
// • Constructors of base class is executed first then the constructor of derived class is executed.
// • By default, non - parameterised constructor of base class is executed.
// • parameterised constructor of base class must be called from derived class constructor


//    Explain using base and derived class
// #include <iostream>
//  using namespace std;
// class Base
// {
// public:
//     Base() { cout << "Non-param Base or Default constructor" << endl; }
//     Base(int x) { cout << "Param of Base(Parameterized) " << x << endl; }
// };
// class Derived : public Base
// {
// public:
//     Derived() { cout << "Non-Param Derived" << endl; }
//     Derived(int y) { cout << "Param of Derived " << y << endl; }
//     Derived(int x, int y) : Base(x)    //Calling Parametrized constructor of base class from derived class constructor
//     {
//         cout << "Param of Derived " << y << endl;
//     }
// };
// int main()
// {
//     Derived d(5, 10);
// }

//********Note- Default constructor of Base(parent) executed first
//              then Default Derived(child) executed 
//*If we pass argument then base class default executed then it comes to derived class and execute param of derived
          

// Access Specifiers
// • Private - Accessible only inside a class
// • Protected - Accessible inside a class and inside derived classes
// • Public - accessible inside class, inside derived class and upon object class Base
// {
// private:
//     int a;

// protected:
//     int b;

// public:
//     int c;
//     void funBase()
//     {
//         a = 10;
//         b = 5;
//         c = 15;
//     }
// };
// class Derived : public Base
// {
// public:
//     void funDerived()
//     {
//         a = 10;
//         b = 5;
//         c = 15;
//     }
// };
// int main()
// {
//     Base b;
//     b.a = 10;
//     b.b = 5;
//     b.c = 20;
// }

// Ways of inheritance
//         A class can be inherited in flowing ways
//             Publicly -
//     All members of base will have same accessibility in derived class
//     Protectedly -
//     All members of base will become protected in derived class
//     Privately -
//     All members of base will become private in derived class
//     class Parent
// {
// private:
//     int a;

// protected:
//     int b;

// public:
//     int c;
//     void funParent()
//     {
//         a = 10;
//         b = 5;
//         c = 15;
//     }
// };
// class Child : private Parent
// {
// private:
// protected:
// public:
//     void funChild()
//     {
//         //a=10;
//         b = 5;
//         c = 15;
//     }
// };
// class GrandChild : public Child
// {
// public:
//     void funGrandChild()
//     {
//         //a=10;
//         //b=5;
//         //c=20;
//     }
// };
// int main()
// {
//     // Child c;
//     //c.a=10;
//     //c.b=5;
//     //c.c=20;
// }

// Program to Demonstrate Inheritance

// #include <iostream>
//     using namespace std;
// class Employee
// {
// private:
//     int eid;
//     string name;

// public:
//     Employee(int e, string n)
//     {
//         eid = e;
//         name = n;
//     }
//     int getEmployeeID() { return eid; }
//     string getName() { return name; }
// };
// class FulltimeEmployee : public Employee
// {
// private:
//     int salary;

// public:
//     FulltimeEmployee(int e, string n, int sal) : Employee(e, n)
//     {
//         salary = sal;
//     }
//     int getSalary() { return salary; }
// };
// class ParttimeEmployee : public Employee
// {
// private:
//     int wage;

// public:
//     ParttimeEmployee(int e, string n, int w) : Employee(e, n)
//     {
//         wage = w;
//     }
//     int getWage() { return wage; }
// };

// int main()
// {

//     ParttimeEmployee p1(1, "John", 300);
//     FulltimeEmployee p2(2, "Raj", 5000);
//     cout << "Salary of " << p2.getName() << " is
//                                             "<<p2.getSalary()<<endl;
//         cout
//          << "Daily wage of " << p1.getName() << " is
//                                                 "<<p1.getWage()<<endl;
// }



