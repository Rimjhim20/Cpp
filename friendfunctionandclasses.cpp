// Friend functions and classes
// • Friend functions are global functions
// • They can access member of a class upon their objects
// • A class can be declared as friend on another class
// • All the functions of friend class can access private and protected members of other class
//     class Your;
// class My
// {
// private:
//     int a;

// protected:
//     int b;

// public:
//     int c;
//     friend Your;
// };
// class Your
// {
// public:
//     My m;
//     void fun()
//     {
//         m.a = 10;
//         m.b = 10;
//         m.c = 10;
//     }
// };
// int main()
// {
// }

// Static Members
// • Static data members are members of a class
// • Only one instance of static members is created and shared by all objects
// • They can be accessed directly using class name
// •
// • Static members functions are functions of a class, they can be called using class name, without creating object of a class.
// • They can access only static data members of a class, they cannot access non - static members of a class.class Test
// {
// public:
//     int a;
//     static int count;
//     Test()
//     {
//         a = 10;
//         count++;
//     }
//     static int getCount()
//     {
//         return count;
//     }
// };
// int Test::count = 0;
// int main()
// {
//     Test t1, t2;
//     cout << Test::getCount() << endl;
//     cout << t1.getCount() << endl;
// }

// Example of Static
// #include <iostream>
//     using namespace std;
// class Student
// {
// public:
//     int roll;
//     string name;
//     static int addNo;
//     Student(string n)
//     {
//         addNo++;
//         roll = addNo;
//         name = n;
//     }
//     void display()
//     {
//         cout << "Name " << name << endl
//              << "Roll " << roll << endl;
//     }
// };
// int Student::addNo = 0;
// int main()
// {
//     Student s1("John");
//     Student s2("Ravi");
//     Student s3("Khan");
//     Student s4("Khan");
//     Student s5("Khan");
//     Student s6("Khan");
//     s1.display();
//     s6.display();
//     cout << "Number Admission " << Student::addNo << endl;
// }



//Static member

// #include <iostream>
// using namespace std;

// class Innova
// {
//     public:
//     static int price;
//     static int getPrice(){
//         return price;
//     }
// };

// int Innova :: price=20;

// int main(){
//     Innova i1,i2,i3;
//     cout<<i1.price<<endl;
//     cout<<i3.price<<endl;

//     cout<<Innova:: price<<endl;

// }

// Inner classes

#include <iostream>
using namespace std;

class  Outer
{
    public:

    void func(){
        i.display();
    }
    class Inner{
public:
void display(){
    cout<<"Display of Inner"<<endl;
}
    };
    Inner i;

};

int main(){
    Outer:: Inner i;
}
