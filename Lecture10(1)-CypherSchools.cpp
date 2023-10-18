#include<iostream>
using namespace std;

void Printhi(){ //No parameters required.
    cout<<"Hi"<<endl;
    return;
}

int sum(int a,int b){
int c;
c=a+b;  //result 10.
a=500;
cout<<"THe value of c in sum function is :"<<c<<endl;   //local variable.
return c;
}

int main(){
    Printhi();
    int c;
    int a,b;
    a=4;
    b=6;
    c=75;
    int d;
    d=sum(a,b);
//    cout<<"The sum is equal to "<<d<<" .the value of a is:"<<a;
cout<<"THe value of c in main is :"<<c;
}
