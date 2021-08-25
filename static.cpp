// #include <iostream>
// using namespace std;

// class A
// {
//     int p;        //normal data member of class
//     static int q; //static data member
// public:
//     A(); //default Constructor
//     void increment(void);
//     void display(void);
// };

// A::A() //we are assigning the value of constructor out of class
// {
//     p = 5; //the value of p(5) for all three objects(such as a1,a2,a3...)
// }

// int A::q = 10; //initialize static data
// void A::increment()
// {        //function declaration
//     p++; //normal data
//     q++; //static data
// }
// void A::display()
// {
//     cout << p << "\t" << q << endl;
// }
// int main()
// {
//     A a1, a2, a3; //there are three objects of A class
//     a1.increment();
//     a1.display(); //5->6 10->11
//     a2.increment();
//     a2.display(); //5->6 11->12
//     a3.increment();
//     a3.display(); //5->6 12->13
//     return 0;
// }


//static function
 #include <iostream>
 using namespace std;
class ABC{
    public:
    static int add(int,int); //static function
    void display() //normal function
    {
cout<<"\n Hello students\n";
    }
};

int ABC::add(int a,int b){//define the body of static funtion out of class
return(a+b); //sum of a and b
} 

int main(){
    ABC a;  //a is an object of ABC class
    int res;
    a.display();
    res=ABC::add(30,40);  //calling static funtion
    cout<<res;
    return 0;
}

