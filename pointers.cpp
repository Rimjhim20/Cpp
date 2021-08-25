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


// #include <iostream>
//     using namespace std;
// int main()
// {
//     int x=10;
//     int &y=x; //reference must be initialise at the time of declaration

//     cout << x <<endl;
//     y++;
//     x++;
//     cout<<x<<endl;
//      cout<<&x<<" "<<&y;
// }


//Dynamic Allocation

//creating array in heap
// #include <iostream>
// using namespace std;
// int main(){
//     int *p=new int[5];
//     p[0]=12;
//     p[1]=13;
//     cout<<p[1]<<endl;
//     delete []p;
//     p=nullptr;  //for making pointer null use nullptr
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int size;
//     cout<<"Enter number of elements\n";
//     cin>>size;
//     int A[size];
//     cout<<"Size of A is:"<<sizeof A <<endl;
   
//     return 0;
// }


//using heap memory Alocation and pointer
// #include <iostream>
// using namespace std;

// int main(){
//     int *p=new int[20];
//     delete []p;

//     p=new int[40];
   
//     return 0;
// }