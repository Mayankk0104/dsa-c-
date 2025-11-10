#include <iostream>
#include <climits>
using namespace std;


void printArray (int *arr , int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void bubbleSort(int *arr , int n){

    for(int i = 0; i < n; i++){


        for(int j = 0 ; j < n-i-1; j++)
        {
            if(arr[j] < arr[j+1]){
                swap(arr[j] ,arr[j+1]);
            }
        }
    }

    printArray(arr,n);

}

void selectionSort(int *arr, int n){

    for(int i = 0 ; i < n; i++){
        int minIdx = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[minIdx]){
                minIdx = j;
            }

        swap(arr[i],arr[minIdx]);
        }
    }






    printArray(arr,n);
}


void insertionSort(int *arr  , int n){

    for(int i = 1 ; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] < curr ){
            swap(arr[prev] , arr[prev+1] );
            prev--;
        }
        arr[prev + 1] = curr;
    }
    printArray(arr,n);

}


void countingSort(int arr[] , int n){
    int freq[100000];
    int minValue = INT_MAX , maxValue = INT_MIN;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
        minValue = min(arr[i] , minValue);
        maxValue = max(arr[i] , maxValue);
    }

    for(int i = maxValue , j= 0;  i>=minValue; i--){
        while(freq[i] > 0){
            arr[j++] =i;
            freq[i]--;
        }

    }


    printArray(arr,n);
}




int main(){
    int arr[]={3,6,2,1,8,7,4,5,3,1};
    int n = 10;

    bubbleSort(arr , n);
    selectionSort(arr,n);
    insertionSort(arr,n);
    countingSort(arr,n);












    return 0;
}