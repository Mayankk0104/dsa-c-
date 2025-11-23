#include <iostream>
#include <string>
#include <vector>
using namespace std;


// int factorial(int n){
//     if(n==0){
//         return 1;
//     }

//     return n * factorial(n-1);
// }


// void printingNumbers(int n){
//    if(n == 0){
//     return;

//    }
//    cout<<n<<" ";

//     printingNumbers(n-1);
// }


// int sumNatNumbers(int n){

//     if(n == 1){
//         return 1;
//     }

//     return n + sumNatNumbers(n-1);

// }


// int fib(int n){

//     if(n == 1 || n == 0){
//         return n;
//     }

//     return fib(n-1) + fib(n-2);
// }


// bool  checkingSortedArray(int arr[] , int n , int i = 0){

//     if(i == n-1){
//         return true;
//     }

//     if(arr[i] > arr[i+1]){

//         return false;
//     }

//     return checkingSortedArray(arr,n,i+1);

// }



// int checkingFirstOccurence(vector<int> vec , int i , int key){

//     if(i == vec.size()){
//         return -1;
//         return false;
//     }

//     if(vec[i] == key){
//         return i;
//     }

//     return checkingFirstOccurence(vec , i+1 , key);

// }

// int checkingLastOccurence(vector<int> vec , int i , int key){
//     if(i == vec.size()){
//         return -1;
//     }

//     int idxFound = checkingLastOccurence(vec , i + 1,key);

//     if(idxFound == -1 && vec[i] == key){
//         return i;
//     }

//     return idxFound;
// }






// int power(int x, int n) {
//     if(n == 0){
//         return 1;
//     }
//     return x * power(x, n - 1);
// }

// int power1(int x , int n){
//     if(n == 0){
//         return 1;
//     }
//     int halfPow = power1(x , n/2);

//     if(n % 2 == 0){
//         return halfPow * halfPow;
//     }
//     else{
//         return x *halfPow*halfPow;
//     }

// }


int main(){

    // int arr[] = {1,0,2,3,4,5};
    // cout<<checkingSortedArray(arr,5);

    // int ans = factorial(5);
    // cout<<ans<<"\n";

    // printingNumbers(20);

    // int ans = sumNatNumbers(5);
    // cout<<ans<<"\n";

    // int ans = fib(6);
    // cout<<ans<<"\n";

    // vector<int> vec ={1,2,3,3,3,4};
    // // // int key = 3 , i = 0;
    // // // cout<<vec.size();
    // // cout<<checkingFirstOccurence(vec ,0,4);
    // cout<<checkingLastOccurence(vec,0,3);

    // cout<<power(2,10)<<"\n";
    // cout<<power1(2,10);










    return 0;
}