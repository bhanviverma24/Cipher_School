#include<iostream>
using namespace std;

int main(){
    long long int a;
    int b;
    cout<<"Size of int is: "<<sizeof(b)<<" The size of long long int is: "<<sizeof(a);   //4bytes.
    cout<<endl<<"The address of a is:"<<&a<<".The address of b is"<<&b;
    return 0;
}
