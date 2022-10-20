//program to accept two integers and check whether they are equal or not
#include<iostream>
using namespace std;

string checkequal(int a, int b){
     if (a == b){
          // cout<<"they are equal."<<endl;
          return "they are equal.";
     } else{
          // cout<<"they are not equal."<<endl;
          return "they are not equal.";
     }
}

int main(){

int a, b;
cout<<"Enter a: "; cin>>a;
cout<<"Enter b: "; cin>>b;

cout << checkequal(a,b) << endl;

     return 0;
}