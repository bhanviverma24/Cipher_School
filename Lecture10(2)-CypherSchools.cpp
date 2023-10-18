#include<iostream>
using namespace std;

//void swap(int a,int b)
void swap(int &a,int &b){
    //by including the keyword & we can change actual datatype.
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"The values of a and b after swapping inside the function are: "<<a<<" "<<b<<endl;
    return;
}

int fun(int &a,int b){
    a=99999;
    b=99999;
     cout<<"The values of a and b inside the fun function are: "<<a<<" "<<b<<endl;
}

int main(){

    int c;
    int a,b;
    a=4;
    b=6;
    c=75;
    cout<<"The values of a and b before funfunction : "<<a<<" "<<b<<endl;
    fun(a,b);
    cout<<"The values of a and b after funfunction : "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"The values of a and b after swapping are outside function: "<<a<<" "<<b<<endl;
}
