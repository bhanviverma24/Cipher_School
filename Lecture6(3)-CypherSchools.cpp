#include<iostream>
using namespace std;
int main(){
//    int i,j,k;
//    i=0;
//    j=0;
//    k=0;
//
//    cout<<i<<" "<<j<<" "<<k<<endl;
//    j=i++;
//    cout<<i<<" "<<j<<" "<<k<<endl;
//    k=++i;
//    cout<<i<<" "<<j<<" "<<k<<endl;

    //cout<<i++<<endl;  //result 1 POSTINCREMENT
    //cout<<i;             //result 2

//int i;
//for(i=1;i<101;i++){
//    //which is executed everytime
//    cout<<i<<" ";
//}


//while loop
//int i;
//i=1;
//while(i<101){
//    cout<<i<<" ";
//    i++;
//}

int i=100,input;
//user has 100 chances to gguess number 65
for(i=1;i<101;i++){
    cin>>input;
    if(input==65){
     cout<<"congradulations you have guessed correct";
     break;
    }}
}
