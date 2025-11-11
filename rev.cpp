#include <iostream>
using namespace std;
#include <cmath>




// void printingStuff(){
//         cout<<"fn called";

//     }


// int sumTwoNumbers(int a , int b){
//     return a + b;
// }

// //fn overloading
// int sum(int a , int b){
//     return a + b;
// }

// int sum(int a , int b , int c){
//     return a + b +c;
// }


// int binToDecimal(int num){
//     int n = num;
//     int dec = 0;
//     int power = 1;

//     while(n > 0){
//        int lastDig = n % 10;
//        dec = dec + lastDig * power;
//        n = n / 10;
//        power *= 2;

//     }
//     return dec;
// }


// int decToBinary(int num){
//     int n = num;
//     int dec = 0;
//     int power = 1;

//     while(n > 0){
//        int lastDig = n % 2;
//        dec = dec + lastDig * power;
//        n = n / 2;
//        power *= 10;


//     }

//     return dec;

// }


int main(){
    // int a = 20;
    // int *ptroforA = &a;

    // cout<<ptroforA<<"\n";

    // cout<<&ptroforA;     

    // cout<<binToDecimal(1101)<<"\n";
    // cout<<decToBinary(13);

    // int res = sumTwoNumbers(20,40);
    // cout<<res<<"\n";

    // cout<<sum(20,60)<<"\n";
    // cout<<sum(90,30,20)<<"\n";

    // int a = 10;
    // if(a > 10){
    //     cout<<"A is greater";


    // }
    // else{
    //     cout<<"A is not greater";
    // }



    // cout<<"\n";



    // int age = 20;
    // if(age > 18){
    //     cout<<"vote";
    // }
    // else if(age < 90){
    //     cout<<"vote";

    // }
    // else{
    //     cout<<"no vote";
    // }
    // cout<<"\n";




    // int x = 0;
    // (x > 0) ? cout<<"useful" : cout<<"useless";



    // cout<<"\n";
    // switch(0021){
    //     case 0 : cout<<"ridiculous";
    //     break;

    //     case 1 : cout<<"useless";
    //     break;

    //     default : cout<<"not worthy";
    // }





    // int a = 10;
    // if(a > 10){
    //     cout<<"A is greater";


    // }
    // else{
    //     cout<<"A is not greater";
    // }



    // cout<<"\n";



    // int age = 20;
    // if(age > 18){
    //     cout<<"vote";
    // }
    // else if(age < 90){
    //     cout<<"vote";

    // }
    // else{
    //     cout<<"no vote";
    // }
    // cout<<"\n";




    // int x = 0;
    // (x > 0) ? cout<<"useful" : cout<<"useless";



    // cout<<"\n";
    // switch(0021){
    //     case 0 : cout<<"ridiculous";
    //     break;

    //     case 1 : cout<<"useless";
    //     break;

    //     default : cout<<"not worthy";
    // }


    // cout<<"\n";
    // typedef int myInt;

    // myInt rage = 20;
    // cout<<rage;

    //  int num = 10309;
    //  int digSum = 0;

    // while(num > 0){
    //     int lastDig = num % 10;
    //     digSum += lastDig ;
    //     num = num / 10;
    // }

    // cout<<"sum of all digits in number is :"<<digSum<<"\n";



    // int res = 0;
    // int num1 = 10309;

    // while(num1 > 0){

    //     int lastDig = num1 % 10;
    //     res = res*10 + lastDig;
    //     num1 = num1 / 10;


    // }


    // cout<<"rev of number is :"<<res<<"\n";

    // int number = 15;
    // bool isPrime = true;

    // for( int i = 2; i <= sqrt(number); i++){
    //     if(number % i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // isPrime ? cout<<"Prime number" : cout<<"Not a prime number";


    //Patterns

    // for(int i = 0; i < 4; i++){

    //     for(int j = 0 ; j < 4; j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 1; i <= 4; i++){

    //     for(int j = 1; j <= i; j++){

    //         cout<<"*"<<" ";
    //     }

    //     cout<<endl;
    // }


    // for(int i = 10; i >= 1; i--){

    //     for(int j = 1 ; j <= i ; j++){

    //         cout<<"*"<<" ";
    //     }

    //     cout<<endl;
    // }

    int n = 4;

    // for(int i = 1; i <= n; i++){

    //     for(int j = 1; j <= i; j++){

    //         cout<<j<<" ";

    //     }

    //     cout<<endl;


    // }


    // char ch ='A';

    // for(int i = 1; i <= n; i++){

    //     for(int j = 1; j <= i; j++){
    //         cout<<ch;
    //         ch++;
    //     }

    //     cout<<endl;


    // }



    // for(int i = 1 ; i <= n; i++){
    // cout<<"*";


    //     for(int k = 1; k <= n-1; k++ ){

    //         if(i == 1 || i == 4){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";


    //       }


    //     }

    // cout<<"*"<<endl;

    // }

    // for(int i = 1; i <= n; i++){

    //     for(int j = 1; j <= n-i; j++){
    //         cout<<" ";
    //     }

    //     for(int k = 1; k <= i; k++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }


    // for(int i = 1; i <= n; i++){

    //     for(int j = 1; j <= n-i; j++){
    //         cout<<" ";
    //     }

    //     for(int j = 1 ; j <= 2*i-1 ; j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;

    // }

    // for(int i = n; i >= 1; i--){

    //     for(int j = 1; j <= n-i; j++){
    //         cout<<" ";
    //     }

    //     for(int j = 1 ; j <= 2*i-1 ; j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;

    // }

    // for(int i = 1; i <= n; i++){

    //     //stars
    //     for(int j = 1; j <= i; j++){
    //         cout<<"*";
    //     }

    //     //spaces
    //     for(int j = 1; j <= 2*(n-i); j++){
    //         cout<<" ";
    //     }

    //     //stars
    //     for(int j = 1; j <= i; j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    // for(int i = n; i >= 1; i--){

    //     //stars
    //     for(int j = 1; j <= i; j++){
    //         cout<<"*";
    //     }

    //     //spaces
    //     for(int j = 1; j <= 2*(n-i); j++){
    //         cout<<" ";
    //     }

    //     //stars
    //     for(int j = 1; j <= i; j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }


    // printingStuff();















    return 0;
}








