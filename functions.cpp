#include <iostream>
#include <cmath>
using namespace std;

int prod(int a , int b){
    int prod = a * b;
    return prod;
}


string isEven(int a){
    if(a % 2 == 0){
        return "even";
    }

    else{
        return "odd";
    }
}

string isPrime(int m){
    // for(int i = 2; i <= m-1; i++){
    //     if(m % i == 0 || m == 1){
    //         return "Not prime";

    //     } else{
    //         return "Prime";
    //     }
    // }

    for(int i = 2; i <= sqrt(m); i++){
        if(m % i == 0 || m == 1){
            return "Not prime";

        } else{
            return "Prime";
        }
    }

}


int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int binCoeff(int n , int r){
   int  choice = factorial(n) / (factorial(r)*factorial(n-r));
   return choice;

}


void allPrimes(int n){

 for(int i = 2; i<=n; i++){
    if(isPrime(i) == "Prime"){
        cout<<i<<" ";
    }
 }


}


int main (){

    // cout<<binCoeff(3,2);
    // int multiplication = prod(4,9);
    // cout<<multiplication<<endl;
    // cout<<isEven(203)<<endl;
    // cout<<factorial(6)<<endl;
    // cout<<isPrime(5)<<endl;

    allPrimes(20);



    return 0;
}