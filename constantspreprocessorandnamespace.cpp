
//Constant Qualifier
// #include <iostream>
//  using namespace std;
// int main(){
//     const int x=10;
    //x=30;or x++;  //we can't assign to variable 'x' with cont-qualifier

    //  // int *ptr=&x;  //can't initialize with value of type 'const int
     // const int *ptr=&x; 
    // ++*ptr;   //Read-only variable is not assignable
    // cout<<*ptr<<" "<<x<<endl;
    
   // }


// #include <iostream>
//  using namespace std;
// int main(){
// int x=10;
// int *const ptr=&x;
// ++*ptr;  //Read-only variable is not assignable
// int y=20;

// ptr=&y; //can't assign to variable ptr with const-qualifier
// cout<<*ptr<<" "<<X<<endl;

//     }

// #include <iostream>
//  using namespace std;

//  class Demo
//  {
//      public:
//       int x=10;
//      int y=20;

//      void Display() const
//      {
//   x++;  //error- can't assign to non-static data member within const function 'Display
//   cout<<x<<" "<<y<<endl;
//      }
//  };

//  int main()
//  {
//      Demo d;
//      d.Display();
//  }

// #include <iostream>
//  using namespace std;
// void fun(const int &a,int &b){
//     cout<<a<<" "<<b <<endl;
// //a++
// }
// int main(){
//     int x=10;
//     int y=20;

//     fun(x,y);
//     cout<<"Main" <<x<<" "<<y<<endl;
// }


// PreProcessor Directives
// • They are instructions to compiler
// • They are processed before compilation
// • They are used for defining symbolic constant
// • They are used for defining functions
// • They also support conditional definition


// #include <iostream>
// using namespace std;
// #define max(x,y) (x>y?x:y)
// #define msg(x) #x
// #ifndef PI
// #define PI 3.1425
// #endif
// int main()
// {
// cout<<PI;
// cout<<max(10,12)<<endl;
// cout<<msg(hello)<<endl;
// }


//Namespaces --> to avoid name conflict


#include <iostream>
using namespace std;


namespace First 
{
void fun(){

    cout<<"First"<<endl;
}
};

namespace Second
{
void fun(){

    cout<<"Second"<<endl;
}
};

int main(){
First::fun();
std::cout<<"hjk"<<endl;
}