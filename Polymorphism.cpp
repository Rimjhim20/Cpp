// Function Overriding
// • Redefining a function of base class in derived class
// • Function overriding is used for achieving runtime polymorphism
// • Prototype of a overrides function must be exactly same as base class function
// class Base
// {
// public:
//     void fun()
//     {
//         cout <<“fun of Base "<<endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     void fun()
//     {
//         cout <<“fun of Derived "<<endl;
//     }
// };
// int main()
// {

//     Derived d;
//     d.fun();
// }

// Virtual Functions
// • Virtual functions are used for achieving polymorphism
// • Base class can have virtual functions
// • Virtual functions can be overrides in derived class
// • Pure virtual functions must be overrides by derived class
// class BasicCar
// {
// public:
//     virtual void start() { cout << "BasicCar started" << endl; }
// };
// class AdvanceCar : public BasicCar
// {
// public:
//     void start() { cout << "AdvanceCar Started" << endl; }
// };
// int main()
// {
//     BasicCar *p = new AdvanceCar();
//     p->start();
// }

// Polymorphism
// • Same name different actions
// • Runtime Polymorphism is achieved using function overriding
// • Virtual functions are abstract functions of base class
// • Derived class must override virtual function
// • Base class pointer pointing to derived class object and a override function is called
//     Summary : class car is defined,
//               then sub classes override,
//               then base class method made as virtual the pure virtual class Car
// {
// public:
//     virtual void start() = 0;
// };
// class Innova : public Car
// {
// public:
//     void start() { cout << "Innova Started" << endl; }
// };
// class Swift : public Car
// {
// public:
//     void start() { cout << "Swift Started" << endl; }
// };
// int main()
// {
//     //Car c;
//     Car *p = new Innova();
//     p->start();
//     p = new Swift();
//     p->start();
// }

// Abstract class
// • Class having pure virtual function is a abstract class
// • Abstract class can have concrete also.
// • Object of abstract class cannot be created
// • Derived class can must override pure virtual function, otherwise it will also become a abstract
// class.
// • Pointer of abstract class can be created
// • Pointer of abstract class can hold object of derived class
// • Abstract classes are used for achieving polymorphism
// •
// • Base class can be
// • Concrete
// • Abstract with some concrete and some pure virtual functions
// • All virtual functions
// Explain using base and derived class
// using namespace std;
// class Base
// {
// public:
//     virtual void fun1() = 0;
//     virtual void fun2() = 0;
// };
// class Derived : public Base
// {
// public:
//     void fun1()
//     {
//         cout << "fun1 of Derived" << endl;
//     }
//     void fun2()
//     {
//         cout << "fun2 of Derived" << endl;
//     }
// };
// int main()
// {
//     Derived d;
//     d.fun1();
//     d.fun2();
// }

// Program to Demonstrate Polymorphism

// #include <iostream>
//     using namespace std;
// class Shape
// {
// public:
//     virtual float area() = 0;
//     virtual float perimeter() = 0;
// };
// class Rectangle : public Shape
// {
// private:
//     float length;
//     float breadth;

// public:
//     Rectangle(int l = 1, int b = 1)
//     {
//         length = 1;
//         breadth = b;
//     }
//     float area() { return length * breadth; }
//     float perimeter() { return 2 * (length + breadth); }
// };
// class Circle : public Shape
// {
// private:
//     float radius;

// public:
//     Circle(float r) { radius = r; }
//     float area() { return 3.1425 * radius * radius; }
//     float perimeter() { return 2 * 3.1425 * radius; }
// };
// int main()
// {
//     Shape *s = new Rectangle(10, 5);
//     cout << "Area of Rectangle " << s->area() << endl;
//     cout << "Perimeter of Rectangle " << s->perimeter() << endl;
//     s = new Circle(10);
//     cout << "Area of Circle " << s->area() << endl;
//     cout << "Perimeter of Circle " << s->perimeter() << endl;
// }