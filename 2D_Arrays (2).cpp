#include <iostream>
using namespace std;


bool stairSearch(int arr[][4] , int n , int m,int key){
    int i = 0 , j = m-1;
    
    

    while(i < n && j >= 0){
        
        if(arr[i][j] == key){
            cout<<"found at :"<<i<<" "<<j;
             return true;
        }
        else if(arr[i][j] > key){
            j--;
        }
        else if(arr[i][j] < key){
            i++;
        }

    }

    return false;
    
}


int main(){

    int arr[4][4] = {  {10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,29,50} 
                }; 

    stairSearch(arr,4,4,33);













    return 0;
}