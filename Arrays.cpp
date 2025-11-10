#include <iostream>
using namespace std;

void printArr(int *arr  , int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int binSearch(int *arr , int n , int key){
    int start = 0 , end = n-1;

    while ( start <= end){

        int mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < key){
            start = mid + 1;
        }

        else{
            end = mid -1;
        }


    }

    return -1;

}

int main(){

    int arr[]={2,4,6,8,10,20,40,60};
    int n = sizeof(arr) / sizeof(int);
    int key = 60;

    // cout<<binSearch(arr,n,key);







    // int copyArr[n];

    // for(int i = 0; i < n; i++){

    //     int j = n-i-1;
    //     copyArr[i] = arr[j];

    // }

    // printArr(copyArr, n);


    // int start = 0 ,  end = n-1;
    // while(start < end){

    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;


    //     start++;
    //     end--;
    // }

    // printArr(arr , n);








    // int marks[10] = {1,2,3,4,5,6,7,8,9,10};
    // cout<<sizeof(marks) / sizeof(int)<<endl;
    // for(int i = 0; i<10; i++){
    //     cout<<marks[i]<<" ";
    // }

    // char alphabet[5] = { 'a','b','c','d','e'};
    // cout<<sizeof(alphabet);



    // int arr[5];
    // int n = sizeof(arr) / sizeof(int);

    // for(int i = 0; i < n; i++){
    //     cin>>arr[i];

    // }

    // cout<<endl<<"printing begins"<<endl;

    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }


    // int marks[10] = {1999,230,3,4,1000,6,7,800,9,10};
    // int max = marks[0];
    // int min = marks[0];

    // for(int i = 0; i < 9; i++){
    //     if(marks[i] > max){
    //         max = marks[i];
    //     }

    // }

    // cout<<"largest element is :"<<max<<endl;



    // for(int i = 0; i < 9; i++){
    //     if(marks[i] < min){
    //         min = marks[i];
    //     }

    // }

    // cout<<"smallest element is :"<<min<<endl;

    // int arr[10]={2,4,6,8,10,12,14,16,18,20};

    // int n = sizeof(arr) / sizeof(int);

    // int key = 11;

    // for(int i = 0; i < n; i++){

    //     if(arr[i] == key){
    //         cout<<i;
    //     }


    // }




















    return 0;
}