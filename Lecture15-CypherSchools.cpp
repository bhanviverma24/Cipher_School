#include<iostream>
using namespace std;

//1.
//int main()
//{
////    char r,o,h,i,t;
////    cin>>r>>o>>h>>i>>t;
////cout<<"The nmae you just hae entered is "<<r<<o<<h<<i<<t;
//int i;
//char name[1000];
//for(i=0;i<5;i++){
//    cin>>name[i];
//}
//    cout<<"The nmae you just hae entered is "<<endl;
//    for(i=0;i<5;i++){
//    cout<<name[i];
//}
//
//}

//2.
int main(){
int i;
char name[1000];
cout<<"enter a name: ";
//while(name[i]!='#'){
//    cin>>name[i];
//    i++;
//}

while(1){
    cin>>name[i];
    if(name[i]=='#')break;
    i++;
}

cout<<"The name you just hae entered is "<<endl;
while(name[i]!='#'){
    cout<<name[i];
}

}
