// Exception handling
// • Exceptions are Runtime errors
// • Try and catch blacks are used for handling exceptions
// • If exceptions are not handled then program may crash
// • Exceptions must give a message to the user, giving correct reason on cause of exception
// •
// • A try block can have Multiple catch blocks
// • Catch-All can catch all exception
// • Catch-All must be a last block
// • If classes in inheritance are used in catch block then child class should come first
// #include <iostream>
// using namespace std;
// int division(int a,int b)throw(int)
// {
// if(b==0)
// throw 1;
// return a/b;
// }
// int main()
// {
// int x=10,y=2,z;
// try
// {
// z=division(x,y);
// cout<<z<<endl;
// }
// catch(int e)
// {
// cout<<"Division by zero "<<e<<endl;
// }
// cout<<"Bye"<<endl;
// }

// Program to Demonstrate user defined Exception

// #include<iostream>
// using namespace std;
// class StackOverFlow:exception{};
// class StackUnderFlow:exception{};
// class Stack
// {
// private:
// int *stk;
// int top=-1;
// int size;
// public:
// Stack(int sz)
// {
// size=sz;
// stk=new int[size];
// }
// void push(int x)
// {
// if(top==size-1)
// throw StackOverFlow();
// top++;
// stk[top]=x;
// }
// int pop()
// {
// if(top==-1)
// throw StackUnderFlow();
// return stk[top--];
// }
// };
// int main()
// {
// Stack s(5);

// s.push(2);
// s.push(3);
// s.push(4);
// s.push(10);
// s.push(9);
// s.push(8);
// }

