#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    int *p;
    int *q;

    p=&a;
    q=&b;

    a=2;    //on changing value the address remains same.but value changes.
    b=5;

    c=*p+*q;
    cout<<"The value of c:"<<c<<endl;
    cout<<"The address of a is: "<<a<<".The value of pointer p is:"<<p<<endl;
//    *p=3;   //changing value using pointer.
//    cout<<"The value of a is(from actual variable type): "<<a<<endl;
//    cout<<"The value of a using *(astric/indirection operator): "<<p<<endl;
    return 0;
}
