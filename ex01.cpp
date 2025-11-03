#include<iostream>
#include<iomanip>
using namespace std;
int main() {
int x=9;
int *p=&x;
cout<<x;
cout<<*p;
*p=7;
cout<<x;
}