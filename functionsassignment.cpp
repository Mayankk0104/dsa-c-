#include <iostream>
using namespace std;



string isPalindrome(int n){
    int z = n;
    int rev;

    while(n > 0){
       int  lastDig = n % 10;
       rev = rev * 10 + lastDig;
       n /= 10;
    }

    if(rev == z){
        return "Palindrome";

    }
    else{
        return "Not Palindrome";
    }

}



int sumDigits(int n){
    int sum = 0;
    while(n > 0){
        int lastDig = n % 10;
        sum += lastDig;
        n /= 10;

    }

    return sum;
}



int square(int a , int b){

    int sq = (a*a) + (b*b) + (2*a*b);
    return sq;

}



void checkLargest(int a , int b , int c){

    if(a > b && a > c){
        cout<<a;
    }
    else if(b > a && b > c){
        cout<<b;
    }
    else{
        cout<<c;
    }

}



void nextCharacter(char n){

    if(n == 'z'){
        cout<<"a" ;
    }
    else if(n == 'Z'){
        cout<<"A";
    }
    else{
        cout<<++n;
    }

}

int main(){

    cout<<isPalindrome(321)<<endl;
    cout<<sumDigits(1891)<<endl;
    cout<<square(2,4)<<endl;
    checkLargest(70,9,81);
    nextCharacter('B');

 


















    return 0;
}