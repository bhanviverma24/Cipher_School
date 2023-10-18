#include<iostream>
using namespace std;

int sum(int a,int b);   //function prototype

int main(){
int a,b;
a=3;
b=5;
int c;
cout<<a<<b<<endl;   //before call function sum
c=sum(3,5);
cout<<c<<endl;
cout<<a<<b<<endl;    //after funtion call
return 0;
}

int sum(int a,int b){
int c=a+b;
a=10;
b=11;
return c;
}
