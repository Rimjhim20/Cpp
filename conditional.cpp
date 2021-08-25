// Conditional Statements
// • If and else is used for writing conditional statement
// • If condition is true then if block is executed
// • If condition is false then else block is executed
// • 0 - means false
// • 1- means true or non0zero value is also true
// If can be nested inside if as well as else statement
// Nesting of is is also written as else-if ladder

// Program to Demonstrate Simple Conditional Statement

// #include <iostream>
//     using namespace std;
// int main()
// {
//     int roll;
//     cout << "Enter your Roll No." << endl;
//     cin >> roll;
//     if (roll > 0)
//     {
//         cout << "Valid Roll No." << endl;
//     }
//     else
//     {
//         cout << "Invalid Roll No." << endl;
//     }
//     return 0;
// }

// Program to perform Validation

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "Enter two numbers: " << endl;
//     cin >> a >> b;
//     if (b == 0)
//     {
//         cout << "Invalid denominator" << endl;
//     }
//     else
//     {
//         c = a / b;
//         cout << c << endl;
//     }
//     return 0;
// }

// Program to Demonstrate Compound Conditional Statement

// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout << "Enter your age: " << endl;
//     cin >> age;
//     if (age >= 12 && age <= 50)
//     {
//         cout << "Young" << endl;
//     }
//     else
//     {
//         cout << "Not Young" << endl;
//     }
//     if (age < 12 || age > 50)
//     {
//         cout << "Eligible for the offer" << endl;
//     }
//     else
//     {
//         cout << "Not eligible for the offer" << endl;
//     }
//     return 0;
// }

// Program to Find Greatest of 3 Numbers
// #include <iostream>
//using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "Enter 3 no.s" << endl;
//     cin >> a >> b >> c;
//     if (a > b && a > c)
//     {
//         cout << a << endl;
//     }
//     else if (b > c)
//     {
//         cout << b << endl;
//     }
//     else
//     {
//         cout << c << endl;
//     }
//     return 0;
// }

// Program for else if Ladder
// #include <iostream>
// using namespace std;
// int main()
// {
//     int day;
//     cout << "Enter Day no. :" << endl;
//     cin >> day;
//     if (day == 1)
//         cout << "Mon" << endl;
//     else if (day == 2)
//         cout << "Tue" << endl;
//     else if (day == 3)
//         cout << "Wed" << endl;
//     else if (day == 4)
//         cout << "Thur" << endl;
//     else if (day == 5)
//         cout << "Fri" << endl;
//     else if (day == 6)
//         cout << "Sat" << endl;
//     else if (day == 7)
//         cout << "Sun" << endl;
//     else
//         cout << "Invalid Day no. !" << endl;
//     return 0;
// }

// Program to Demonstrate Short Circuit

// #include <iostream>
//     using namespace std;
// int main()
// {
//     int a = 10, b = 5, i = 5;
//     if (a > b && ++i <= b)  //if a>b flase then that case after && not execute bcz 1 condition is sufficient for proving its false
//     {
//     }
//     cout << i << endl;
//     if (a < b || ++i <= b)  //if a<b true then if will not execute statement written after || bcz 1 condition is sufficient for proving its true
//     {
//     }
//     cout << i << endl;
// }

// Dynamic Declaration
// #include <iostream>
//     using namespace std;
// int main()
// {
//     int a = 10, b = 5;
//     if (true)
//     {
//         int c = a + b;
//         cout << c << endl;
//     }
//     {
//         int d = a - b;
//         if (true)
//         {
//             cout << d << endl;
//         }
//     }
//     if (int e = a * b)
//     {
//         cout << e << endl;
//     }
// }

// Switch
// • Switch is a branch and control statement
// • Switch can have 0 or more cases
// • Each case is defined with a label
// • Depending on the value of expression in switch corresponding case black is executed
// • Is a case block is not available then default block is executed
// • Default block is optional
// • Every case block must terminate with break
// • If breaks are not mentioned then cases will fall thru
// • Switch is used for menu-driven programs

// Program to Demonstrate switch case
// #include <iostream>
//     using namespace std;
// int main()
// {
//     int day;
//     cout << "Enter a day no. :" << endl;
//     cin >> day;
//     switch (day)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;
//     default:
//         cout << "Invalid day no." << endl;
//     }
//     return 0;
// }

// Menu Driven Program using Switch Case

// #include <iostream>
//     using namespace std;
// int main()
// {
//     cout << "Menu" << endl;
//     cout << "1. Add\n"
//          << "2. Sub\n"
//          << "3. Mul\n"
//          << "4. Div\n";
//     int option;
//     cout << "Enter your choice no." << endl;
//     cin >> option;
//     int a, b, c;
//     cout << "Enter two numbers" << endl;
//     cin >> a >> b;
//     switch (option)
//     {
//     case 1:
//         c = a + b;
//         break;
//     case 2:
//         c = a - b;
//         break;
//     case 3:
//         c = a * b;
//         break;
//     case 4:
//         c = a / b;
//         break;
//     }
//     cout << c << endl;
//     return 0;
// }

// Program to Calculate Discounted Bill Amount

// #include<iostream>
// using namespace std;
// int main()
// {
// float billAmount;
// float discount=0.0;
// cout<<"Enter Bill Amount:";
// cin>>billAmount;
// if(billAmount>=500)
// discount=billAmount*20/100;
// else if(billAmount>=100 && billAmount<500)
// discount=billAmount*10/100;
// cout<<"Bill Amount is:"<<billAmount<<endl;
// cout<<"Discount is :"<<discount<<endl;

// cout<<"Discounted Amount is:"<<billAmount-
// discount<<endl;

// }

// Program to to check if its a Leap Year

// #include <iostream>
// using namespace std;

// int main()
// {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;
//     if (year % 4 == 0)
//     {
//         if (year % 100 == 0)
//         {
//             if (year % 400 == 0)
//                 cout << year << " is a leap year.";
//             else
//                 cout << year << " is not a leap year.";
//         }
//         else
//             cout << year << " is a leap year.";
//     }
//     else
//         cout << year << " is not a leap year.";
//     return 0;
// }