//Variable literals

#include<iostream>
using namespace std;
int main()
{

char a='A';
cout<<a<<endl;
char b=65;
cout<<b<<endl;
char c=0x41;
cout<<c<<endl;
char d=65.5;
cout<<d<<endl;
float f=123.56;
cout<<f<<endl;
float g=123e2;
cout<<g<<endl;
float h=123e-2;
cout<<h<<endl;
string i="Hello";
cout<<i<<endl;
}
#include<iostream>
using namespace std;
int main()
{
int a=10;
cout<<a<<endl;
int b=010;
cout<<b<<endl;
int c=0x10;
cout<<c<<endl;
int d(10);
cout<<d<<endl;
int f=(10);
cout<<f<<endl;
int g{10};
cout<<g<<endl;
int h={10};
cout<<h<<endl;
return 0;
}