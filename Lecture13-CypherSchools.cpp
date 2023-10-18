#include<iostream>
using namespace std;

int main(){

//   int a=5;
//   int *x=&a;
//   cout<<"The address of a stored in pointer x is: "<<x<<" "<<".The value of x+1 is:"<<x+1<<endl;


int a[5];
int *x;
x=&a[0];
for(int i=0;i<6;i++){
    cout<<&a[i]<<endl;
}

}
