#include <iostream>
using namespace std;
int main(){
 int a;
 cout<<"enter first number ";
 cin>>a;
 int b;
 cout<<"enter second ";
 cin>>b;
 if (a<b){
    cout<<"b is greatest";
 }else if(a>b){
    cout<<"a is greatest";
 }else {
    cout<<"a is equal to b";
 }

    return 0;
}