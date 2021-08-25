// Arrays
// • Array is a collection of similar data elements under one name, each element is
// accessible using its index
// • Memory for array is allocated contagiously
// • For-each loop is used for accessing array
// • N-dimension arrays are supported by C++
// • Two-Dimensional Arrays are sued for Matrices
// • Array can be created in Stack or Heap Section of memory

// Program to Demonstrate Declaration and Initialization of an Array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[5];
//     cout << A << endl;
//     int B[5] = {2, 4};
//     cout << B << endl;
//     int C[] = {2, 4, 6, 8, 10};
//     cout << C[4] << endl;
//     return 0;
// }

// Program to find Sum of all elements in an Array

// #include <iostream>
//using namespace std;
// int main()
// {
//     int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9, 11};
//     int sum = 0;
//     for (int i = 0; i <= 10; i++)
//         sum = sum + A[i];
//     cout << "The sum is " << sum << endl;
// }

// Program to find maximum element from an Array

// #include <iostream>
//using namespace std;
// int main()
// {
//     int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9, 11};
//     int max =A[0];
//     for (int i = 0; i <= 10; i++)
//     {
//         if (A[i] > max)
//             max = A[i];
//     }
//     cout << max << endl;
// }

// Program for Linear Search

// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9};
//     int key;
//     cout << "Enter a Key element ";
//     cin >> key;
//     for (int i = 0; i < 10; i++)
//     {
//         if (key == A[i])
//         {
//             cout << "The Key element is found at " << i << endl;
//             exit(0);
//         }
//     }
//     cout << "Key element not found" << endl;
//     return 0;
// }

// Program for adding and subtracting Matrices using 2D Arrays

// #include <iostream>
// using namespace std;
// int main()
// {
//     int A[2][3] = {3, 3, 3, 3, 3, 3};
//     int B[2][3] = {1, 1, 1, 1, 1, 1};
//     int C[2][3];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             C[i][j] = A[i][j] - B[i][j];
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     return 0;
// }

// Program to Find Average of Numbers

// #include <iostream>
//     using namespace std;
// int main()
// {
//     int n, i;
//     float num[100], sum = 0.0, average;
//     cout << "Enter the numbers of elements: ";
//     cin >> n;
//     for (i = 0; i < n; ++i)
//     {
//         cout << i + 1 << ". Enter number: ";
//         cin >> num[i];
//         sum += num[i];
//     }
//     average = sum / n;
//     cout << "Average = " << average;
//     return 0;
// }

// Program to Multiply Matrices

// #include <iostream>
//     using namespace std;
// int main()
// {
//     int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
//     cout << "Enter rows and columns for first matrix: ";
//     cin >> r1 >> c1;
//     cout << "Enter rows and columns for second matrix: ";
//     cin >> r2 >> c2;
//     if (c1 != r2)
//     {
//         cout <<"Cant be Multiplied";
//         return 0;
//     }
//     // Storing elements of first matrix.
//     cout << endl
//          << "Enter elements of matrix 1:" << endl;
//     for (i = 0; i < r1; ++i)
//         for (j = 0; j < c1; ++j)
//         {
//             cout << "Enter element a" << i + 1 << j + 1 << " : ";
//             cin >> a[i][j];
//         }
//     // Storing elements of second matrix.
//     cout << endl
//          << "Enter elements of matrix 2:" << endl;
//     for (i = 0; i < r2; ++i)
//         for (j = 0; j < c2; ++j)
//         {
//             cout << "Enter element b" << i + 1 << j + 1 << " : ";
//             cin >> b[i][j];
//         }

//     // Multiplying matrix a and b and storing in array mult.
//     for (i = 0; i < r1; ++i)
//         for (j = 0; j < c2; ++j)
//         {
//             mult[i][j] = 0;
//             for (k = 0; k < c1; ++k)
//             {
//                 mult[i][j] += a[i][k] * b[k][j];
//             }
//         }

//     // Displaying the multiplication of two matrix.
//     cout << endl
//          << "Output Matrix: " << endl;
//     for (i = 0; i < r1; ++i)
//         for (j = 0; j < c2; ++j)

//         {
//             cout << " " << mult[i][j];
//             if (j == c2 - 1)
//                 cout << endl;
//         }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int A[2][3];

//     for (auto&x  : A) //if we dont know datatype then use auto to automatically detect datatype
//     {
//         for (auto& y : x)
//         { //pass refernce for using  for each loop
//             cin >> y;
//         }
//         cout << endl;
//     }
//     for (auto &x : A) //if we dont know datatype then use auto to automatically detect datatype
//     {
//         for (auto &y : x)
//         { //pass refernce for using  for each loop
//             cout << y << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     system("cls");
//     int A[2][3]={2,4,2,3,4,3};

//     for (auto& x:A){
//         for(auto& y:x){
//             cout<<y<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }