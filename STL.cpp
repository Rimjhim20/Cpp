//Program to Store Items in a File using Vector class

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> v={2,4,6,8,10};
//     v.push_back(20);
//     v.push_back(30);
//     for(int x:v)
//     cout<<x<<endl;
// }

//output-
// 2
// 4
// 6
// 8
// 10
// 20
// 30


// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> v={2,4,6,8,10};
//     v.push_back(20);
//     v.push_back(30);
//     v.pop_back();
//     for(int x:v)
//     cout<<x<<endl;
// }
//output-
// 2
// 4
// 6
// 8
// 10
// 20


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v={2,4,6,8,10};
//     v.push_back(20);
//     v.push_back(30);
//     vector<int>:: iterator itr;
//     cout<<"Using Iterator"<<endl;
//     for(itr=v.begin(); itr!=v.end();itr++)
//     //cout<<itr<<endl; //error-itr is pointer type so we have to derefrence itr to get value.
//       cout<<*itr<<endl; // if we write ++*itr then it will increment each value of output by 1
//       cout<<"using for each loop"<<endl;
//       for(int x:v)
//       cout<<x<<endl;
// };


// output-
// Using Iterator
// 2
// 4
// 6
// 8
// 10
// 20
// 30
// using for each loop
// 2
// 4
// 6
// 8
// 10
// 20
// 30



// #include <iostream>
// #include <list>
// using namespace std;
// int main(){
//     list<int> v={2,4,6,8,10};
//     v.push_back(20);
//     v.push_back(30);
//     list<int>:: iterator itr;
//     cout<<"Using Iterator"<<endl;
//     for(itr=v.begin(); itr!=v.end();itr++)
//     //cout<<itr<<endl; //error-itr is pointer type so we have to derefrence itr to get value.
//       cout<<++*itr<<endl; // if we write ++*itr then it will increment each value of output by 1
//       cout<<"using for each loop"<<endl;
//       for(int x:v)
//       cout<<x<<endl;
// };
//output-
// Using Iterator
// 3
// 5
// 7
// 9
// 11
// 21
// 31
// using for each loop
// 3
// 5
// 7
// 9
// 11
// 21
// 31


// #include <iostream>
// #include <forward_list>
// using namespace std;
// int main(){
//     forward_list<int> v={2,4,6,8,10};
//     v.push_front(20);
//     v.push_front(30);
//   forward_list<int>:: iterator itr;
//     cout<<"Using Iterator"<<endl;
//     for(itr=v.begin(); itr!=v.end();itr++)
//     //cout<<itr<<endl; //error-itr is pointer type so we have to derefrence itr to get value.
//       cout<<++*itr<<endl; // if we write ++*itr then it will increment each value of output by 1
//       cout<<"using for each loop"<<endl;
//       for(int x:v)
//       cout<<x<<endl;
// };


//output-
// Using Iterator
// 31
// 21
// 3
// 5
// 7
// 9
// 11
// using for each loop
// 31
// 21
// 3
// 5
// 7
// 9
// 11



// #include <iostream>
// #include <set>
// using namespace std;
// int main(){
//    set<int> v={2,4,6,8,10,10,2,4};
//     v.insert(20);
//     v.insert(30);
//  set<int>:: iterator itr;
//     cout<<"Using Iterator"<<endl;
//     for(itr=v.begin(); itr!=v.end();itr++)
//     //cout<<itr<<endl; //error-itr is pointer type so we have to derefrence itr to get value.
//       cout<<*itr<<endl; // if we write ++*itr then it will increment each value of output by 1
//       cout<<"using for each loop"<<endl;
//       for(int x:v)
//       cout<<x<<endl;
// };

//output-
// Using Iterator     
// 2
// 4
// 6
// 8
// 10
// 20
// 30
// using for each loop
// 2
// 4
// 6
// 8
// 10
// 20
// 30


//Map Classes
// #include <iostream>
// #include <map>
// using namespace std;

// int main(){
//     map<int,string>m;
//     m.insert(pair<int,string>(1,"john"));
//     m.insert(pair<int,string>(2,"Ravi"));
//     m.insert(pair<int,string>(3,"Khan"));

//     map<int,string>::iterator itr;
//     for(itr=m.begin();itr!=m.end();itr++)
//     {
//         cout<<itr ->first<<" "<<itr->second<<endl;
//     }

    
//     map<int,string>::iterator itr1;
//     itr1=m.find(2);
//     cout<<"Value found is"<<endl;
//     cout<<itr1 ->first<<" "<<itr1 ->second<<endl;
// }

//output-
// 1 john
// 2 Ravi
// 3 Khan
// Value found is
// 2 Ravi



//Write a program to store an retrieve list of item in a file using vector class.
//Class items should have 1.Name 2.Price 3.Quantity
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Item
{
private:
    string name;
    float price;
    int qty;

public:
    Item() {}
    Item(string n, float p, int q);
    friend ifstream &operator>>(ifstream &fis, Item &i);
    friend ofstream &operator<<(ofstream &fos, Item &i);
    friend ostream &operator<<(ostream &os, Item &i);
};
int main()
{
    int n;
    string name;
    float price;
    int qty;
    cout << "Enter number of Item:";
    cin >> n;
    vector<Item *> list;
    cout << "Enter All Item " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Item Name , price and quantity";
        cin >> name;
        cin >> price;
        cin >> qty;
        list.push_back(new Item(name, price, qty));
    }
    ofstream fos("Items.txt");
    vector<Item *>::iterator itr;
    for (itr = list.begin(); itr != list.end(); itr++)
    {
        fos << **itr;
    }
    Item item;
    ifstream fis("Items.txt");

    for (int i = 0; i < 3; i++)
    {
        fis >> item;
        cout << "Item " << i << endl
             << item << endl;
    }
}
Item::Item(string n, float p, int q)
{
    name = n;
    price = p;
    qty = q;
}
ofstream &operator<<(ofstream &fos, Item &i)
{
    fos << i.name << endl
        << i.price << endl
        << i.qty << endl;
    return fos;
}
ifstream &operator>>(ifstream &fis, Item &i)
{
    fis >> i.name >> i.price >> i.qty;
    return fis;
}
ostream &operator<<(ostream &os, Item &i)
{
    os << i.name << endl
       << i.price << endl
       << i.qty << endl;
    return os;
}

//output:-
