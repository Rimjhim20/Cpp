// #include <iostream>
// using namespace std;

// float fun()
// {
//     return 2.34f;
// }
// int main()
// {
//   // //auto x=2*5.7+'a'; //auto make it similar to its matching datatype which is double here
// double d=12.3;
// int i=9;
// auto x=2*d+i;
// cout<<x;
// }

// //output - 108.4
//output - 33.6


// #include <iostream>
// using namespace std;
// float fun()
// {
//     return 2.34f;
// }
// int main()
// {

// auto x=fun();
// cout<<x;
// }
//output-2.34

//Final Keyword --. this keyword is used to restrict inheritance and function overriding
//Restricted inheritance example

// #include <iostream>
// using namespace std;
//  class Parent final
// {
  
// };
// class Child:Parent{
   
// };




//Restricted Overriding example
// #include <iostream>
// using namespace std;
//  class Parent
// {
//    virtual void show() final
//     {

//     };
// };
// class Child:Parent{
//     void show(){ //error- declaration of show overrides a final function.

//     }
// };








// Ellipsis
// • Used for defining variable argument functions
// • ... is used as symbol of ellipsis
// • Printf and scanf of C language are example of ellipsis



// int sum(int n,...)
// {
// va_list list;
// va_start(list,n);
// int x;
// int s=0;
// for(int i=0;i<n;i++)
// {
// x=va_arg(list,int);
// s+=x;
// }
// return s;
// }
// int main()
// {
// cout<<sum(3,10,20,30)<<endl;
// cout<<sum(5,1,2,3,4,5)<<endl;
// }

//output- 60 15