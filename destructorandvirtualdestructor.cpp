//Destructor ---> it is a member function of class that is useful for releasing the resources acquired by the object of class
//in destructor --> Derived destructor called first then base detstructor..in reverese order of constructor i.e constructor called top to bottom whereas destructor cald from bottom to top ---> 
// #include <iostream>
// using namespace std;

// class Base{
//     public:
//     Base(){
//         cout<<"Base Constructor"<<endl;
//     }
//      virtual ~Base(){
// cout<<"Base Destructor"<<endl;
//      }
// };

// class Derived:public Base{
//     public:
//     Derived(){
//         cout<<"Derived Constructor"<<endl;
//     }
//     ~ Derived(){
//          cout<<"Derived Destructor"<<endl;
//     }
// };

// int main(){
//     Base *p=new Derived();
//     delete p;
// }

// output-
// Base Constructor
// Derived Constructor
// Derived Destructor
// Base Destructor


// #include <iostream>
// using namespace std;
// class Demo
// {
// public:
//     Demo()
//     {
//         cout << "Constructor of Demo" << endl;
//     }
//     ~Demo()
//     {
//         cout << "Destructor of Demo" << endl;
//     }
// };

// void fun()
// {
//     Demo *p=new Demo(); //when we dynamically create object using new in heap then only constructor called to call destructor also we have to delete p; When we make object not dynamically then its created instack and automatically deleted so we see both constructor and destructor in this case.
// delete p; //heap memory must be explicity deleted
// }
// int main()
// {
//     fun();
// }




// #include <iostream>
// using namespace std;
// class Demo
// {
//     int *p;

// public:
//     Demo()
//     {
//         p = new int[10];
//         cout << "Constructor of Demo" << endl;
//     }
//     ~Demo()
//     {
//         delete[] p;
//         cout << "Destructor of Demo" << endl;
//     }
// };

// void fun()
// {
//     Demo *p = new Demo(); //when we dynamically create object using new in heap then only constructor called to call destructor also we have to delete p; When we make object not dynamically then its created instack and automatically deleted so we see both constructor and destructor in this case.
//     delete p;             //heap memory must be explicity deleted
// }
// int main()
// {
//     fun();
// }


//Virtual Destructor


// #include <iostream>
// using namespace std;

// class Base{
//     public:
//     Base(){
//         cout<<"Base Constructor"<<endl;
//     }
//      virtual ~Base(){
// cout<<"Base Destructor"<<endl;
//      }
// };

// class Derived:public Base{
//     public:
//     Derived(){
//         cout<<"Derived Constructor"<<endl;
//     }
//     ~ Derived(){
//          cout<<"Derived Destructor"<<endl;
//     }
// };

// int main(){
//     Base *p=new Derived();
//     delete p;
// }

// output-
// Base Constructor
// Derived Constructor
// Derived Destructor
// Base Destructor


#include <iostream>
using namespace std;

class Base{
    public:
    
    virtual  ~Base(){
cout<<"Base Destructor"<<endl;
     }
};

class Derived:public Base{
    public:
    
      ~ Derived(){
         cout<<"Derived Destructor"<<endl;
    }
};
void fun()
{
    Base *p=new Derived();
      delete p;
}
int main(){
    fun();
}

//note- we use virtual before ~Base to call derived destructor also