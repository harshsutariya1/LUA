//program to check whether a number is prime or not
#include<iostream>
using namespace std;

bool primeornot(int a){
     bool is_prime = true;
     if (a == 1 || a == 0){
          is_prime = false;
     }
     for (int i = 2; i <= a/2; i++){
          if (a % i == 0){
               is_prime = false;
               break;
          }
     }
}

int main(){
int a;

cout<<"Enter number: "; cin>>a;

if (primeornot(a)){
     cout<<"It is prime number.";
}
else{
     cout<<"Not a prime number.";
}

     return 0;
}