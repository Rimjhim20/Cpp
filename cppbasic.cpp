// #include <iostream>
// using namespace std;

// int main(){
//     string str;
//     cout<<"Enter name";
//     cin>>str;
//     cout<<"Welcome"<<str;
//     return 0;
// }

// Operators
// • Various types of operators are supported by C++
// • They are categorised as
// • unary
// • binary
// • ternary
// • Each operator has its precedence and associativity
// • Higher precedence operators are executed first
// Expression
// • Expression contains operands and operator
// • Expressions results in a single value
// • datatype of result of expression is the largest datatype used in expression

// Compound Arithmetic Operator

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sum = 10, x = 5;
//     sum += x;
//     cout << sum << endl;
//     int fact = 10, y = 5;
//     fact *= y;
//     cout << fact << endl;
//     return 0;
// }

// Program to find root of Quadratic Equation

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     float root1, root2;
//     cout << "Enter 3 values";
//     cin >> a >> b >> c;
//     root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
//     root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
//     cout << root1 << " " << root2 << endl;
//     return 0;
// }

// Program to find Area of Circle

// #include <iostream>
// using namespace std;
// int main()
// {
//     float r, area;
//     cout << "Enter the Radius";
//     cin >> r;
//     area = 3.1425f * r * r;

//     cout << "Area is " << area << endl;
//     return 0;
// }

//Increment ans Decrement Operators

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 5, j;
//     j = i++;
//     cout<< j <<endl;
//     cout<< i <<endl;           //or cout << j << " " << i << endl;
//     int k = 5, l;
//     l = ++k;
//     cout << l << " " << k << endl;
//     int a = 5, b;
//     b = 2 * ++a + 2 * a++;
//     cout << b << " " << a << endl;
//     ;
//     int c = 5, d;
//     d = 2 * c++ + 2 * c++;
//     cout << d << " " << c << endl;
//     return 0;
// }



// Program to Demonstrate Overflow
// #include <iostream>
//     using namespace std;
// int main()
// {
//     char a = 128;
//     cout << (int)a << endl;
//     char b = 127;
//     b++;
//     cout << (int)b << endl;
//     char c = -129;
//     cout << (int)c << endl;
//     char d = -128;
//     d--;
//     cout << (int)d << endl;
//     int e = INT_MAX;
//     e++;
//     cout << (int)e << endl;
//     return 0;
// }

// Bitwise Operators
//     Program to Demonstrate bitwise operators
// #include <iostream>
//     using namespace std;
// int main()
// {
//     int a = 11, b = 7, c;
//if sign bit change to 1 which show no. is negative then make 2'C and add 1.
//     c = a & b; //& is similar to logic gate AND
//     cout << c << endl;
//     int d = 11, e = 7, f;
//     f = d | e; //& is similar to logic gate OR 
//     cout << f << endl;
//     int g = 11, h = 7, i;
//     i = g ^ h;// ^  is similar to logic gate X-OR 
//     cout << i << endl;
//     char j = 5, k;

//sign bit is not changed in left and right shift 
//     k = j << 1; //left shift if x<<i =x*2^i i.e x=5 then 5<<2=5*(2)^2=10
//     cout << (int)k << endl;
//     char l = 20, m;
//     m = l >> 1; //right shift if x>>i =x/2^i i.e x=5 then 5<<(2)^2=5*2=10
//     cout << (int)m << endl;
//     char x = 5, y;
//     y = ~x;
//     cout << (int)y << endl;
//     return 0;
// }

// Program to Calculate Net Salary

// #include <iostream>
//     using namespace std;
// int main()
// {
//     float basic;
//     float percentAllow;
//     float percentDeduct;
//     float netSalary;
//     cout << "Enter Basic Salary:";
//     cin >> basic;
//     cout << "Enter percent of Allowences:";
//     cin >> percentAllow;
//     cout << "Enter percent of Deductions:";
//     cin >> percentDeduct;
//     netSalary = basic + basic * percentAllow / 100 -
//                 basic * percentDeduct / 100;
//     cout << "Net Salary is:" << netSalary << endl;
// }