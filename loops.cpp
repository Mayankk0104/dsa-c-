#include <iostream>
using namespace std;

int main()
{

    // for(int i=1 ; i<=5; i++){
    //     cout<<i<<"  Apna College"<<endl;
    // }

    // int num , i;
    // cout<<"enter any value:";
    // cin>>num;
    // for(i=1 ; i<=num; i++){
    //     cout<<i<<endl;
    // }

    // int sum=0;
    // int i,num;
    // cout<<"enter value:";
    // cin>>num;

    // for(i=0; i<=num; i++){
    //     sum = sum+i;
    // }

    // cout<<"Sum of first N natural numbers:"<<sum;

    // int num , i;
    // cout<<"enter any value:";
    // cin>>num;

    // for(i=num; i>0; i--){
    //     cout<<i<<endl;
    // }

    // for(int i=0; i<=3; i++){
    //     cout<<"****"<<endl;
    // }

    // int n = 1234566789;
    // int digSum = 0;

    // while (n > 0)
    // {
    //     int lastDig = n % 10;
    //     if (lastDig % 2 != 0)
    //     {
    //         digSum += lastDig;
    //     }

    //     n=n/10;
    // }

    // cout << digSum;

    // int n = 1554;
    // int result = 0 ;

    // while(n>0){
    //     int lastDig = n%10;
    //     n = n / 10;
    //     cout<<lastDig<<' ';
    // }

    // while(n>0){
    //     int lastDig = n % 10;
    //     result = result * 10 + lastDig;
    //     n /=10;

    // }

    // cout<<"Reverse is :"<<result;

//     int input;

//    do{
//     cout<<"Enter value:";
//     cin>>input;
//     if(input % 10 == 0){
//         cout<<"OOPS!! you entered a multiple of 10";
//         break;

//     }

//    }while(input>0);

//    int input;

//    do{
//     cout<<"Enter value:";
//     cin>>input;
//     if(input % 10 == 0){

//         continue;

//     }
//     cout<<"You entered the number :"<<input<<endl;
//    }while(input>0);

// int n = 13;
// bool isPrime = true;

// for( int x = 2 ; x<=n-1;  x++){

//     if(n%x==0){
//         isPrime = false;
//     }
// }

// isPrime ? cout<<"Prime" : cout<<"Not Prime";

int n ;




bool isPrime = true;

for( int x = 2 ; x<=n-1;  x++){

    if(n%x==0){
        isPrime = false;
    }
}

isPrime ? cout<<"Prime" : cout<<"Not Prime";





    return 0;
}