// Streams
// we use to  accessing data from outside the world 
// • I/O Streams are used for input and output data to and from the program
// • C++ provides class for accessing input output operations
// • Iostream is a base class for all classes
// • Istream is for input
// • Cin is the object of istream
// • ostream is for output
// • Cout is an object of ostream
// •
// • ifstream is a --> file input stream
// • ofstream is a --> file output stream

// Writing in a File
// #include <iostream>
// #include <fstream>

// using namespace std;
// int main()
// {
//     ofstream of("My.txt", ios::trunc);  //trunc-->tuncate
//     of << "John" << endl;
//     of << 25 << endl;
//     of << "CS" << endl;
//     of.close();
// }



// Reading from File int main()
// Writing in a File
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ifstream ifs;
// ifs.open("My.txt");
// if(ifs) cout<<"File is opened"<<endl;
//     string name;
//     int roll;
//     string branch;
//     ifs >> name >> roll >> branch;
//     cout << name << endl
//          << roll << endl
//          << branch << endl;
//     ifs.close();
// }




// Serialization
// • Serialization is a process of string and retrieving state of an object
// • Class must have a default constructor class Student
// {
// private:
//     string name;
//     int roll;
//     string branch;

// public:
//     Student() {}
//     Student(string n, int r, string b)
//     {
//         name = n;
//         roll = r;
//         branch = b;
//     }
//     friend ofstream &operator<<(ofstream &ofs, Student s);
//     friend ifstream &operator>>(ifstream &ifs, Student &s);
//     friend ostream &operator<<(ostream &os, Student &s);
// };
// ofstream &operator<<(ofstream &ofs, Student s)
// {
//     ofs << s.name << endl;
//     ofs << s.roll << endl;
//     ofs << s.branch << endl;
//     return ofs;
// }
// ifstream &operator>>(ifstream &ifs, Student &s)
// {
//     ifs >> s.name;
//     ifs >> s.roll;
//     ifs >> s.branch;
//     return ifs;
// }
// ostream &operator<<(ostream &os, Student &s)
// {
//     os << "Name " << s.name << endl;
//     os << "Roll " << s.roll << endl;
//     os << "Branch " << s.branch << endl;
//     return os;
// }
// int main()
// {
//     ofstream ofs("My.txt");
//     Student s1("John", 10, "CS");
//     ofs << s1;
//     ofs.close();
//     Student s2;
//     ifstream ifs("Test.txt");
//     ifs >> s1;
//     cout << s1;
// }



//Q. wap to store an retrieve list of item in a file use serialization
//Class items should have --> 1.name 2.price 3.Quantity
// Program to Store Items in a File

// #include <iostream>
// #include <fstream>
//     using namespace std;
// class Item
// {
// private:
//     string name;
//     float price;
//     int qty;

// public:
//     Item() {}
//     Item(string n, float p, int q);
//     friend ifstream &operator>>(ifstream &fis, Item &i);
//     friend ofstream &operator<<(ofstream &fos, Item &i);
//     friend ostream &operator<<(ostream &os, Item &i);
// };
// int main()
// {
//     int n;
//     string name;
//     float price;
//     int qty;
//     cout << "Enter number of Item:";
//     cin >> n;
//     Item *list[n];
//     cout << "Enter All Item " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter " << i + 1 << " Item Name , price and quantity";
//         cin >> name;
//         cin >> price;
//         cin >> qty;
//         list[i] = new Item(name, price, qty);
//     }
//     ofstream fos("Items.txt");
//     for (int i = 0; i < n; i++)
//     {
//         fos << *list[i];
//     }
//     Item item;
//     ifstream fis("Items.txt");
//     for (int i = 0; i < 3; i++)
//     {
//         fis >> item;
//         cout << "Item " << i << item << endl;
//     }
// }
// Item::Item(string n, float p, int q)
// {
//     name = n;
//     price = p;
//     qty = q;
// }
// ofstream &operator<<(ofstream &fos, Item &i)
// {
//     fos << i.name << endl
//         << i.price << endl
//         << i.qty << endl;
//     return fos;
// }
// ifstream &operator>>(ifstream &fis, Item &i)
// {
//     fis >> i.name >> i.price >> i.qty;
//     return fis;
// }
// ostream &operator<<(ostream &os, Item &i)
// {
//     os << i.name << endl
//        << i.price << endl
//        << i.qty << endl;
//     return os;
// }



//Manipulator --> it use useful for formatting string  
//Ex- endl is manipulator

//For Integer -> hex,oct,dec
//Float -> fixed ,scientific
//other--> set(),left,right