#include <iostream>
#include <string>
#include <vector>
using namespace std;



// void merge(int arr[] , int si , int mid , int ei){

//     vector<int> temp;
//     int i = si , j = mid+1;
//     while( i <= mid && j <= ei){
//         if(arr[i] <= arr[j]){
//             temp.push_back(arr[i++]);
//         }
//         else{
//             temp.push_back(arr[j++]);
//         }


//         while( i <= mid){
//             temp.push_back(arr[i++]);

//         }
//         while(j <= ei){
//             temp.push_back(arr[j++]);
//         }
//     }

//     for(int i = si, x = 0; i <= ei; i++){
//         arr[i] = temp[x++];
//     }


// }

// void mergeSort(int arr[] , int si , int ei ){
//     if(si >= ei){
//         return;
//     }

//     int mid = si + (ei-si)/2;

//     mergeSort(arr,si,mid);
//     mergeSort(arr,mid+1,ei);

//     merge(arr,si,mid,ei);

// }










// int partition(int arr[] , int si , int ei){

//     int i = si-1;
//     int pivot = arr[ei];

//     for(int j = si; j < ei; j++){
//         if(arr[i] <= pivot){
//             ++i;
//             swap(arr[i] , arr[j]);
//         }
//     }

//     i++;
//     swap(arr[i+1] ,arr[ei]);
//     return i+1;
// }

// void quickSort(int arr[] , int si , int ei){

//     if(si >= ei){
//         return;
//     }
//     int pivotIdx = partition(arr,si,ei);

//     quickSort(arr,si,pivotIdx-1);
//     quickSort(arr,pivotIdx+1,ei);


// }

// void printArr(int arr[] , int n){
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
// }



// int partition(int arr[], int si, int ei){
//     int pivot = arr[ei];
//     int i = si - 1;
//     for(int j = si; j < ei; ++j){
//         if(arr[j] <= pivot){
//             ++i;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i+1], arr[ei]);
//     return i+1;
// }

// void quickSort(int arr[], int si, int ei){
//     if(si >= ei) return;
//     int p = partition(arr, si, ei);
//     quickSort(arr, si, p-1);
//     quickSort(arr, p+1, ei);
// }

// void printArr(int arr[], int n){
//     for(int i = 0; i < n; ++i) cout << arr[i] << " ";
//     cout << '\n';
// }

int main(){

    // int arr[] = {4,2,1,9,6,0};
    // int n = 6;
    // // mergeSort(arr,0,n-1);
    // quickSort(arr,0,n-1);
    // printArr(arr,n);
















    return 0;
}