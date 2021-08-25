// Loops
// • Loops are iterative statements
// • Block of statements are repeatedly executed as long as condition is true
// • Condition given in loop must become false after some finite iterations otherwise its a
// infinite loop
// • Values used in condition must update inside the body of finite loop
// • Four types of loops
// •
// • pre-tested loop while()
// • post-tested loop do..while()
// • counter controlled loop for()
// • for each loop for Collections for()

// Program to Test all Loops
// #include <iostream>
//using namespace std;
// int main()
// {
//     int a = 0;
//     while (a < 10)
//     {
//         cout << "a " << a;
//         a++;
//     }
//     int b = 0;
//     do
//     {
//         cout << "b " << b;
//         b++;
//     } while (b < 10);
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "i " << i;
//     }
//     return 0;
// }

// Program for Infinite Loop
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 0;
//     ;
//     for (;;)
//     {
//         cout << " Hello";
//         i++;
//     }
// }

// Program to Find Sum of First n Natural Numbers
// #include <iostream>
// using namespace std;
// int main()
// {
// int n,sum=0;
// cout<<"Enter a no. ";
// cin>>n;
// ;for(int i=1;i<=n;i++)
// {
// sum=sum+i;
// }
// cout<<"Sum to First "<<n<<" Natural no.s is "<<sum;
// return 0;
// }

// Program to find Factors of a Number
// #include <iostream>
//     using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a no. ";
//     cin >> n;
//     ;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//             cout << i << " ";
//     }
//     return 0;
// }


// Program to Check if a Number if Prime

// #include <iostream>
//     using namespace std;
// int main()
// {
//     int n, count = 0;
//     cout << "Enter a no. ";
//     cin >> n;
    
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//             count++;
//     }

//     if (count == 2)
//         cout << "It's a Prime\n";
//     else
//         cout << "It's not a Prime\n";
//     return 0;
// }



// Program to Display digits of a Number

// #include <iostream>
//using namespace std;
// int main()
// {
//     int n, r;
//     cout << "Enter a no. ";
//     cin >> n;
//     while (n != 0)
//     {
//         r = n % 10;
//         n = n / 10;
//         cout << r << " ";
//     }
//     cout << endl;
// }


// Program for Sum of Digits of a Number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, r, sum = 0;
//     cout << "Enter a no. ";
//     cin >> n;
//     while (n != 0)
//     {
//         r = n % 10;
//         n = n / 10;
//         sum = sum + r;
//     }
//     cout << sum;
//     cout << endl;
// }

// Program to find GCD(greatest common divisor or highest common factor )

// #include <iostream>
//     using namespace std;
// int main()
// {
//     int m, n;
//     cout << "Enter two no.s " << endl;
//     cin >> m >> n;
//     while (m != n)
//     {
//         if (m > n)
//             m = m - n;
//         else
//             n = n - m;
//     }
//     cout << "GCD is " << m;
//     return 0;
// }

// Program to Reverse a number

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, num, digit, rev = 0;
//     cout << "Enter a positive number: ";
//     cin >> num;
//     n = num;
//     do
//     {
//         digit = num % 10;
//         rev = (rev * 10) + digit;
//         num = num / 10;
//     } while (num != 0);
//     cout << " The reverse of the number is: " << rev << endl;
//     if (n == rev)
//         cout << " The number is a palindrome";
//     else
//         cout << " The number is not a palindrome";
//     return 0;
// }