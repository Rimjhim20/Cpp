// ect
//     Base class Pointer pointing to derived class object
// • Base class pointer can point on derived class object
// • But only those functions which are in base class,
//     can be called
// • If derived class is having overrides functions they will not be called unless base class functions
//         are declared as virtual
// • Derived class pointer cannot point on base class object



//  Example 1 class Base
// {
// public:
//     void fun1()
//     {
//         cout <<“fun1 of Base "<<endl;
//     }
// };



// Example 2 class Derived : public Base
// {
// public:
//     void fun2()
//     {
//         cout <<“fun2 of Derived "<<endl;
//     }
// };
// class Rectangle
// {
// public:
//     void area()
//     {
//         cout <<“Area of Rectangle "<<endl;
//     }
// };
// class Cuboid : public Rectangle
// {
// public:
//     void volume()
//     {
//         cout <<“Volume of Cuboid "<<endl;
//     }
// };



// Example 3 class BasicCar

// #include <iostream>
//      using namespace std;
//  class BasicCar{
// {
// public:
//     void start()
//     {
//         cout << "Car started" << endl;
//     }
// };
// class AdvanceCar : public BasicCar
// {
// public:
//     void playMusic()

//     {
//         cout << "Music Playing" << endl;
//     }
// };
//int main(){
//     AdvanceCar a;
//     BasicCar *ptr=&a;
//     ptr->start(); //we can only start function
//    ptr->playMusic(); //error


  //  BasicCar b;
  //  AdvanceCar *q=&b; //error
//}




// #include <iostream>
//      using namespace std;
//  class Base{
//      public:
//      void fun1(){
//          cout<<"fun1 of base"<<endl;
//      }
//  };

//  class Derived:public Base{
//      public:
//      void fun2(){
//          cout<<"fun2 of derived"<<endl;
//      }
//  };

//  int main(){
//     //  Derived d;
//     //  Base *ptr=&d;
//     //  ptr-> fun1(); //this function called bcz it is in base class
//     //  ptr->fun2();  //error-'class Base' has no member named 'fun2'; did you mean 'fun1'?   
       
//        Base b;
//        Derived *ptr=&b;//error- i can't assign object of base class to pointer of derived class
//        return 0;
//  }