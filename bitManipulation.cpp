#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

// void oddEven(int num){
//     (num & 1) ? cout<<"Odd" : cout<<"Even"<<"\n";
// }


// int getithBit(int num , int pos){

//     int bitMask = 1 << pos;
//     // if((num & bitMask)){
//     //     return 1;
//     // }
//     // else{
//     //     return 0;
//     // }

//     return((num & bitMask)) ?  1 : 0;


// }

// int setithBit(int num , int pos){

//     int bitMask = 1 << pos;
//     return(num | bitMask);


// }

// int clearithBit(int num , int pos){
//     int bitMask = ~(1 << pos);
//     return(num & bitMask);

// }


// bool isPowerOf2(int num){
//     // if((num & (num-1))){
//     //     return false;
//     // }
//     // else{
//     //     return true;
//     // }
//     if(num > 0){
//         return((num & (num - 1))) ? false : true;
//     }
//     else{
//         return false;
//     }



// }


// int updateIthBith(int num , int pos , int val){

//     if(val == 0){
//         int bitMask = ~(1 << pos);
//         return(num & bitMask);

//     }
//     else{
//         int bitMask = (1 << pos);
//         return(num | bitMask);

//     }


// }

// int clearIthBit(int num , int pos){
//     int bitMask = ~0 << pos;
//     return ( num & bitMask);



// }


// int countSetBits(int num){

//     int count = 0;


//     while(num  > 0){
//         int lastDig = num & 1;

//         count += lastDig;

//         num = num  >> 1;


//     }

//     return count;

// }

// void fastExpo(int x , int n){
//     int ans = 1;

//     while(n > 0){
//         int lastDig = n & 1;
//         if(lastDig){
//             ans = ans * x;
//         }


//         x = x * x;

//         n = n  >> 1;

//     }

//     cout<<ans;

// }


// int eliminatingDuplicate(int num[] ,int size){

//     int ans = 0;

//     for(int i = 0; i < size ; i++ ){
//         ans = ans ^ num[i];
//     }

//     return ans;
// }



// int clearRangeBits(int num , int i , int j){

//     int leftMask = ~0 << j + 1;

//    int rightMask  = (1 << i) - 1;

//     int mask = leftMask | rightMask ;

//     return( mask & num);

// }


// int xorbeauty(int arr[] ,int  size){

//     int ans = 0;

//     for(int i = 0; i < size; i++){
//         ans = ans ^ arr[i];
//     }

//     return ans;

// }


int quotient(int num , int div){



    
}




int main(){

    // int num1 = 2;
    // // int num2 = 8;
    // // oddEven(num1);
    // // cout<<endl;
    // // oddEven(num2);
    // // cout<<endl;

    // cout<<getithBit(num1 , 4)<<" \n";
    // cout<<setithBit(num1 , 5)<<" \n";
    // cout<<clearithBit(num1 , 5)<<" \n";


    // for(int i = 0; i < 20; i++){

    //     cout<<isPowerOf2(i)<<" ";
    // }
    // cout<<isPowerOf2(num1);

    // int num = 7 , pos = 2 , val = 0;
    // cout<<updateIthBith(num,pos,val)<<"\n";

    // cout<<updateIthBith(num ,3,1);

    // int num =15 , pos = 2;
    // cout<<clearIthBit(num , pos);

    // int num = 15;
    // cout<<countSetBits(num);

    // fastExpo(3,4);

    // int num[] = { 4,1,3,3,1,2,2};
    // cout<<eliminatingDuplicate(num , 7);

    // cout<<clearRangeBits(15,1,3);

    // int arr[] = {15,45,20,2,34,35,5,44,32,30};
    // cout<<xorbeauty(arr, 10);


    cout<<quotient(48 , 4);







    return 0;
}