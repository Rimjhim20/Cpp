// Pointer
// • Pointer is address variable
// • It can store the address of data
// • Pointer are used for accessing heap memory
// • 5 Arithmetic operations are allowed pointer
// • p++ - move pointer to next element
// • p - - move pointer to previous element
// • p+k gives address of kth element form pointer location to right
// • p-k gives address of kth element from pointer location to left
// • q-p gives number of elements between 2 pointers p and q
// • Pointers can be of many levels
// • Double pointer is used for accessing 2D arrays
// Program to Demonstrate Pointer Syntax
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int *p = &a;
//     cout << a << endl;
//     cout << &a << endl;
//     cout << p << endl;
//     cout << *p << endl;
//     return 0;
// }

// Program to Demonstrate Pointer Arithmetic

// #include <iostream>
//     using namespace std;
// int main()
// {
//     int A[5] = {2, 4, 6, 8, 10};
//     int *p = A, *q = &A[4];
//     cout << *p << endl;
//     cout << endl;
//     p++;
//     cout << *p << endl;
//     cout << endl;
//     p--;
//     cout << *p << endl;
//     cout << endl;
//     cout << p << endl;
//     cout << p + 2 << endl;
//     cout << endl;
//     cout << *p << endl;
//     cout << *(p + 2) << endl;
//     cout << endl;
//     cout << q - p << endl;
//     cout << p - q << endl;
//     return 0;
// }

// Reference
// • Reference is a Alias of variable
// • It must be initialised when declared
// • It doesn’t take any memory
// • It cannot be modified to refer other variable
// • Syntax for reference declaration is
// • Int &y=x;
